/*
 * XREFs of ?ndisMSendPacketsToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1400D85C0
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140035310 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1400353A0 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x1400425D0 (-ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1400529B0 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     ?ndisMQueueWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAX@Z @ 0x14007E940 (-ndisMQueueWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAX@Z.c)
 *     ?ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14009D670 (-ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1400D9CF0 (-ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMCheckPacketAndPad@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1400D9D40 (-ndisMCheckPacketAndPad@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMSendPacketsToMiniport(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PACKET **a2, unsigned int a3)
{
  unsigned int v4; // ebp
  unsigned int v5; // ebx
  unsigned int v7; // r14d
  _LIST_ENTRY *p_PacketList; // r13
  struct _NDIS_PACKET *v9; // rsi
  _LIST_ENTRY *v10; // rcx
  _LIST_ENTRY *Blink; // rax
  _LIST_ENTRY *Flink; // rdx
  __int64 v13; // r12
  _LIST_ENTRY **v14; // rax
  struct _NDIS_STACK_RESERVED *v15; // rbx
  __int64 NdisPacketOobOffset; // rax
  KIRQL v17; // dl
  KIRQL NewIrql; // [rsp+60h] [rbp+8h] BYREF
  struct _NDIS_STACK_RESERVED *v19; // [rsp+68h] [rbp+10h] BYREF
  unsigned int v20; // [rsp+70h] [rbp+18h]

  v20 = a3;
  v19 = 0LL;
  NewIrql = 0;
  v4 = 0;
  v5 = a3;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  v7 = 0;
  if ( v5 )
  {
    p_PacketList = &a1->PacketList;
    while ( 1 )
    {
      v9 = *a2;
      if ( (a1->SendFlags & 8) != 0 )
        v4 = ndisMCheckPacketAndPad(a1, *a2);
      *(unsigned int *)((char *)&v9->Private.Count + v9->Private.NdisPacketOobOffset) = 259;
      NDIS_STACK_RESERVED_FROM_PACKET(v9, &v19);
      v10 = (_LIST_ENTRY *)&v9->MacReserved[16];
      *(_QWORD *)&v9->MacReserved[24] = &v9->MacReserved[16];
      *(_QWORD *)&v9->MacReserved[16] = &v9->MacReserved[16];
      Blink = a1->PacketList.Blink;
      if ( Blink->Flink != p_PacketList )
        break;
      v10->Flink = p_PacketList;
      *(_QWORD *)&v9->MacReserved[24] = Blink;
      Blink->Flink = v10;
      a1->PacketList.Blink = v10;
      if ( v4 )
      {
        Flink = v10->Flink;
        v13 = *(_QWORD *)v19;
        if ( v10->Flink->Blink != v10 )
          break;
        v14 = *(_LIST_ENTRY ***)&v9->MacReserved[24];
        if ( *v14 != v10 )
          break;
        *v14 = Flink;
        Flink->Blink = (_LIST_ENTRY *)v14;
        *(_QWORD *)&v9->MacReserved[24] = &v9->MacReserved[16];
        v10->Flink = v10;
        _InterlockedOr((volatile signed __int32 *)&a1->Flags, 0x400000u);
        v15 = v19;
        *(_QWORD *)v19 = 1297040176LL;
        a1->MiniportThread = 0LL;
        KeReleaseSpinLockFromDpcLevel(&a1->Lock);
        *((_DWORD *)v15 + 2) = 0;
        if ( (a1->SendFlags & 8) != 0 && *(void **)((char *)&v9[1].Private.Pool + v9->Private.NdisPacketOobOffset) )
          ndisFreePaddedMdl(v9);
        NdisPacketOobOffset = v9->Private.NdisPacketOobOffset;
        v9->Private.NdisPacketFlags &= 0xC0u;
        if ( *(_MDL **)((char *)&v9[1].Private.Head + NdisPacketOobOffset) )
          ndisMSendCompletePacketToNetBufferLists(&a1->Header, v9, v4);
        else
          (*(void (__fastcall **)(__int64, struct _NDIS_PACKET *, _QWORD))(v13 + 112))(v13, v9, v4);
        NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(a1);
        v5 = v20;
        v4 = 0;
      }
      else if ( !a1->FirstPendingPacket )
      {
        a1->FirstPendingPacket = v9;
      }
      ++v7;
      ++a2;
      if ( v7 >= v5 )
        goto LABEL_19;
    }
    __fastfail(3u);
  }
LABEL_19:
  ndisMQueueWorkItem(a1, 1, 0LL);
  if ( !a1->LockAcquired )
  {
    a1->LockAcquired = 1;
    a1->LockThread = KeGetCurrentThread();
    ndisMProcessDeferred(a1);
    a1->LockAcquired = 0;
    a1->LockThread = 0LL;
  }
  v17 = NewIrql;
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v17);
}
