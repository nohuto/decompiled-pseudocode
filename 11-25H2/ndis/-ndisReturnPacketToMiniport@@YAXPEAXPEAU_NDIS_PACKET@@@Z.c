/*
 * XREFs of ?ndisReturnPacketToMiniport@@YAXPEAXPEAU_NDIS_PACKET@@@Z @ 0x14006C180
 * Callers:
 *     ?ndisReturnNetBufferListsToPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x14006BF60 (-ndisReturnNetBufferListsToPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     NdisReturnPackets @ 0x1400A88F0 (NdisReturnPackets.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140025750 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMQueueWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAX@Z @ 0x14006C2D0 (-ndisMQueueWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAX@Z.c)
 *     ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x14006C3F0 (-NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

void __fastcall ndisReturnPacketToMiniport(struct _NDIS_MINIPORT_BLOCK *a1, PNDIS_PACKET Packet)
{
  __int64 v3; // rcx
  char v4; // bp
  __int64 v6; // rdi
  void (__fastcall *MiniportReturnPacketHandler)(void *, _NDIS_PACKET *); // r8
  int v8; // eax
  int v9; // ecx

  v3 = *(unsigned int *)&Packet[-1].ProtocolReserved[4];
  v4 = 0;
  if ( (unsigned int)v3 >= ndisPacketStackSize )
    v6 = 16LL;
  else
    v6 = (__int64)Packet + 48 * (v3 - ndisPacketStackSize);
  if ( (a1->Flags & 0x40000) != 0 )
    goto LABEL_4;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(a1);
  if ( !a1->LockAcquired )
  {
    a1->LockAcquired = 1;
    v4 = 1;
    a1->LockThread = KeGetCurrentThread();
  }
  if ( (a1->Flags & 0x40000) != 0 || v4 )
  {
LABEL_4:
    MiniportReturnPacketHandler = a1->MiniportReturnPacketHandler;
    *(_QWORD *)v6 = 0LL;
    v8 = Packet[-1].Reserved[1];
    v9 = *(_DWORD *)&Packet[-1].ProtocolReserved[4] - 1;
    *(_DWORD *)&Packet[-1].ProtocolReserved[4] = v9;
    if ( (v8 & 1) != 0 && v9 == -1 )
      NDIS_FREE_XFER_DATA_PACKET(Packet);
    else
      MiniportReturnPacketHandler(a1->MiniportReturnPacketContext, Packet);
    if ( (a1->Flags & 0x8000) != 0 )
      _InterlockedDecrement((volatile signed __int32 *)&a1->IndicatedPacketsCount);
  }
  else
  {
    *(_QWORD *)v6 = a1->ReturnPacketsQueue;
    a1->ReturnPacketsQueue = Packet;
    ndisMQueueWorkItem(a1, NdisWorkItemReturnPackets, 0LL);
  }
  if ( (a1->Flags & 0x40000) == 0 )
  {
    if ( v4 )
    {
      a1->LockAcquired = 0;
      a1->LockThread = 0LL;
    }
    a1->MiniportThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&a1->Lock);
  }
}
