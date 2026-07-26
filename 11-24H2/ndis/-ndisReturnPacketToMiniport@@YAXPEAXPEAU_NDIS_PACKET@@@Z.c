/*
 * XREFs of ?ndisReturnPacketToMiniport@@YAXPEAXPEAU_NDIS_PACKET@@@Z @ 0x140056440
 * Callers:
 *     ?ndisReturnNetBufferListsToPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x140056220 (-ndisReturnNetBufferListsToPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     NdisReturnPackets @ 0x1400A03D0 (NdisReturnPackets.c)
 * Callees:
 *     ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x140042510 (-NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMQueueWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAX@Z @ 0x14007E940 (-ndisMQueueWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAX@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall ndisReturnPacketToMiniport(struct _NDIS_MINIPORT_BLOCK *a1, PNDIS_PACKET Packet)
{
  unsigned int v3; // ecx
  char v4; // bp
  __int64 v6; // rsi
  void (__fastcall *MiniportReturnPacketHandler)(void *, _NDIS_PACKET *); // r8
  int v8; // eax
  int v9; // ecx

  v3 = *(_DWORD *)&Packet[-1].ProtocolReserved[4];
  v4 = 0;
  if ( v3 >= ndisPacketStackSize )
    v6 = 16LL;
  else
    v6 = (__int64)Packet + 48 * (v3 - (unsigned __int64)ndisPacketStackSize);
  if ( (a1->Flags & 0x40000) == 0 )
  {
    KeAcquireSpinLockAtDpcLevel(&a1->Lock);
    a1->MiniportThread = KeGetCurrentThread();
    if ( !a1->LockAcquired )
    {
      a1->LockAcquired = 1;
      v4 = 1;
      a1->LockThread = KeGetCurrentThread();
    }
  }
  if ( (a1->Flags & 0x40000) != 0 || v4 )
  {
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
