/*
 * XREFs of ?ndisMDeferredSendSG@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400E0A50
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140025750 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMLoopbackPacketX@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1400305C0 (-ndisMLoopbackPacketX@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x140031220 (-ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x14006D530 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     ?ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1400E0F48 (-ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMFreeSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1400E1AEC (-ndisMFreeSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

unsigned __int8 __fastcall ndisMDeferredSendSG(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_PACKET *i; // rdi
  int v3; // r10d
  struct _NDIS_MINIPORT_BLOCK *v4; // rcx
  unsigned int v5; // ebx
  unsigned __int64 *p_Lock; // rbp
  unsigned int Flags; // ebx
  struct _NDIS_STACK_RESERVED *v8; // r14
  __int64 v9; // rax
  __int64 v10; // r15
  _NDIS_PACKET **v11; // r8
  __int64 NdisPacketOobOffset; // rax
  struct _NDIS_STACK_RESERVED *v14; // [rsp+40h] [rbp+8h] BYREF

  v14 = 0LL;
  for ( i = a1->FirstPendingPacket; i && (a1->Flags & 0x400000) != 0; i = a1->FirstPendingPacket )
  {
    NDIS_STACK_RESERVED_FROM_PACKET(i, &v14);
    a1->FirstPendingPacket = 0LL;
    v4 = *(struct _NDIS_MINIPORT_BLOCK **)&i->MacReserved[16];
    if ( v4 != (struct _NDIS_MINIPORT_BLOCK *)&a1->PacketList )
      a1->FirstPendingPacket = (_NDIS_PACKET *)&v4[-1].PollModeConfigKnobs.MaxPacketsSend.AtDispatch;
    if ( ((v3 & 0x4000) != 0 || (v3 & 0x8800000) != 0 && SLOBYTE(i->Private.Flags) >= 0) && ndisMLoopbackPacketX(a1, i) )
    {
      v5 = 0;
      p_Lock = &a1->Lock;
    }
    else
    {
      Flags = i->Private.Flags;
      p_Lock = &a1->Lock;
      i->Private.NdisPacketFlags |= 0x10u;
      a1->MiniportThread = 0LL;
      KeReleaseSpinLockFromDpcLevel(&a1->Lock);
      v5 = a1->SendHandler(a1->MiniportAdapterContext, i, Flags);
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(a1);
      if ( v5 == 259 )
        continue;
    }
    i->Private.NdisPacketFlags &= ~0x10u;
    if ( v5 == -1073741670 )
    {
      a1->Flags &= ~0x400000u;
      a1->FirstPendingPacket = i;
    }
    else
    {
      v8 = v14;
      v9 = *(_QWORD *)&i->MacReserved[16];
      v10 = *(_QWORD *)v14;
      if ( *(_NDIS_PACKET **)(v9 + 8) != (_NDIS_PACKET *)&i->MacReserved[16]
        || (v11 = *(_NDIS_PACKET ***)&i->MacReserved[24], *v11 != (_NDIS_PACKET *)&i->MacReserved[16]) )
      {
        __fastfail(3u);
      }
      *v11 = (_NDIS_PACKET *)v9;
      *(_QWORD *)(v9 + 8) = v11;
      *(_QWORD *)&i->MacReserved[24] = &i->MacReserved[16];
      *(_QWORD *)&i->MacReserved[16] = &i->MacReserved[16];
      a1->Flags |= 0x400000u;
      *(_QWORD *)v8 = 1297040180LL;
      a1->MiniportThread = 0LL;
      KeReleaseSpinLockFromDpcLevel(p_Lock);
      if ( *(unsigned __int64 *)((char *)i->Reserved + i->Private.NdisPacketOobOffset) )
        ndisMFreeSGList(a1, i);
      *((_DWORD *)v8 + 2) = 0;
      if ( (a1->SendFlags & 8) != 0 && *(void **)((char *)&i[1].Private.Pool + i->Private.NdisPacketOobOffset) )
        ndisFreePaddedMdl(i);
      NdisPacketOobOffset = i->Private.NdisPacketOobOffset;
      i->Private.NdisPacketFlags &= 0xC0u;
      if ( *(_MDL **)((char *)&i[1].Private.Head + NdisPacketOobOffset) )
        ndisMSendCompletePacketToNetBufferLists(&a1->Header, i, v5);
      else
        (*(void (__fastcall **)(__int64, _NDIS_PACKET *, _QWORD))(v10 + 112))(v10, i, v5);
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(a1);
    }
  }
  return 0;
}
