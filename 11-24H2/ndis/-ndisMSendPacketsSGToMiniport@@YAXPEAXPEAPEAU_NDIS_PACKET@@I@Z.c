/*
 * XREFs of ?ndisMSendPacketsSGToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1400D9B80
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140035310 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1400353A0 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x1400425D0 (-ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1400529B0 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     ?ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1400D9CF0 (-ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMCheckPacketAndPad@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1400D9D40 (-ndisMCheckPacketAndPad@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMAllocSGListS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1400DA414 (-ndisMAllocSGListS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMFreeSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1400DA908 (-ndisMFreeSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMSendPacketsSGToMiniport(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_PACKET **a2,
        unsigned int a3)
{
  __int64 v5; // rbp
  struct _NDIS_PACKET *v6; // rbx
  unsigned int v7; // esi
  __int64 v8; // r13
  struct _NDIS_STACK_RESERVED *v9; // r15
  __int64 NdisPacketOobOffset; // rax
  KIRQL v11; // dl
  struct _NDIS_STACK_RESERVED *v12; // [rsp+60h] [rbp+8h] BYREF
  KIRQL NewIrql; // [rsp+70h] [rbp+18h] BYREF

  if ( a3 )
  {
    v12 = 0LL;
    NewIrql = 0;
    v5 = a3;
    do
    {
      v6 = *a2;
      v7 = 0;
      if ( (a1->SendFlags & 8) != 0 )
        v7 = ndisMCheckPacketAndPad(a1, *a2);
      *(unsigned int *)((char *)&v6->Private.Count + v6->Private.NdisPacketOobOffset) = 259;
      if ( v7 )
      {
        NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
        NDIS_STACK_RESERVED_FROM_PACKET(v6, &v12);
        v8 = *(_QWORD *)v12;
        _InterlockedOr((volatile signed __int32 *)&a1->Flags, 0x400000u);
        v9 = v12;
        *(_QWORD *)v12 = 1297040176LL;
        a1->MiniportThread = 0LL;
        KeReleaseSpinLockFromDpcLevel(&a1->Lock);
        if ( *(unsigned __int64 *)((char *)v6->Reserved + v6->Private.NdisPacketOobOffset) )
          ndisMFreeSGList(a1, v6);
        *((_DWORD *)v9 + 2) = 0;
        if ( (a1->SendFlags & 8) != 0 && *(void **)((char *)&v6[1].Private.Pool + v6->Private.NdisPacketOobOffset) )
          ndisFreePaddedMdl(v6);
        NdisPacketOobOffset = v6->Private.NdisPacketOobOffset;
        v6->Private.NdisPacketFlags &= 0xC0u;
        if ( *(_MDL **)((char *)&v6[1].Private.Head + NdisPacketOobOffset) )
          ndisMSendCompletePacketToNetBufferLists(&a1->Header, v6, v7);
        else
          (*(void (__fastcall **)(__int64, struct _NDIS_PACKET *, _QWORD))(v8 + 112))(v8, v6, v7);
        NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(a1);
        v11 = NewIrql;
        a1->MiniportThread = 0LL;
        KeReleaseSpinLock(&a1->Lock, v11);
      }
      else
      {
        ndisMAllocSGListS(a1, v6);
      }
      ++a2;
      --v5;
    }
    while ( v5 );
  }
}
