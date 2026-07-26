/*
 * XREFs of ?ndisMDeferredSendSG@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400D97E0
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140035310 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x1400425D0 (-ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1400529B0 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     ?ndisMLoopbackPacketX@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x14008AAC0 (-ndisMLoopbackPacketX@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1400D9CF0 (-ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMFreeSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1400DA908 (-ndisMFreeSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

unsigned __int8 __fastcall ndisMDeferredSendSG(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_PACKET *FirstPendingPacket; // rsi
  unsigned __int8 *WrapperReserved; // r14
  struct _NDIS_MINIPORT_BLOCK *v4; // rcx
  unsigned int *p_Flags; // rbx
  unsigned int v6; // ebx
  unsigned __int64 *p_Lock; // r15
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rbp
  unsigned __int8 **v11; // rax
  struct _NDIS_STACK_RESERVED *v12; // r14
  __int64 NdisPacketOobOffset; // rax
  struct _NDIS_STACK_RESERVED *v15; // [rsp+40h] [rbp+8h] BYREF

  v15 = 0LL;
  if ( a1->FirstPendingPacket )
  {
    while ( 1 )
    {
      if ( (a1->Flags & 0x400000) == 0 )
        return 0;
      FirstPendingPacket = a1->FirstPendingPacket;
      NDIS_STACK_RESERVED_FROM_PACKET(FirstPendingPacket, &v15);
      a1->FirstPendingPacket = 0LL;
      WrapperReserved = FirstPendingPacket->WrapperReserved;
      v4 = *(struct _NDIS_MINIPORT_BLOCK **)&FirstPendingPacket->MacReserved[16];
      if ( v4 != (struct _NDIS_MINIPORT_BLOCK *)&a1->PacketList )
        a1->FirstPendingPacket = (_NDIS_PACKET *)&v4[-1].PollModeConfigKnobs.MaxPacketsReceiveComplete.AtDispatch;
      p_Flags = &FirstPendingPacket->Private.Flags;
      if ( ((a1->Flags & 0x4000) != 0 || (*p_Flags & 0x80u) == 0 && (a1->Flags & 0x8800000) != 0)
        && ndisMLoopbackPacketX(a1, FirstPendingPacket) )
      {
        break;
      }
      v8 = *p_Flags;
      p_Lock = &a1->Lock;
      FirstPendingPacket->Private.NdisPacketFlags |= 0x10u;
      a1->MiniportThread = 0LL;
      KeReleaseSpinLockFromDpcLevel(&a1->Lock);
      v6 = a1->SendHandler(a1->MiniportAdapterContext, FirstPendingPacket, v8);
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(a1);
      if ( v6 != 259 )
        goto LABEL_11;
LABEL_24:
      if ( !a1->FirstPendingPacket )
        return 0;
    }
    v6 = 0;
    p_Lock = &a1->Lock;
LABEL_11:
    FirstPendingPacket->Private.NdisPacketFlags &= ~0x10u;
    if ( v6 == -1073741670 )
    {
      a1->FirstPendingPacket = FirstPendingPacket;
      _InterlockedAnd((volatile signed __int32 *)&a1->Flags, 0xFFBFFFFF);
    }
    else
    {
      v9 = *(_QWORD *)WrapperReserved;
      v10 = *(_QWORD *)v15;
      if ( *(unsigned __int8 **)(*(_QWORD *)WrapperReserved + 8LL) != WrapperReserved
        || (v11 = *(unsigned __int8 ***)&FirstPendingPacket->MacReserved[24], *v11 != WrapperReserved) )
      {
        __fastfail(3u);
      }
      *v11 = (unsigned __int8 *)v9;
      *(_QWORD *)(v9 + 8) = v11;
      *(_QWORD *)&FirstPendingPacket->MacReserved[24] = &FirstPendingPacket->MacReserved[16];
      *(_QWORD *)WrapperReserved = WrapperReserved;
      _InterlockedOr((volatile signed __int32 *)&a1->Flags, 0x400000u);
      v12 = v15;
      *(_QWORD *)v15 = 1297040180LL;
      a1->MiniportThread = 0LL;
      KeReleaseSpinLockFromDpcLevel(p_Lock);
      if ( *(unsigned __int64 *)((char *)FirstPendingPacket->Reserved + FirstPendingPacket->Private.NdisPacketOobOffset) )
        ndisMFreeSGList(a1, FirstPendingPacket);
      *((_DWORD *)v12 + 2) = 0;
      if ( (a1->SendFlags & 8) != 0
        && *(void **)((char *)&FirstPendingPacket[1].Private.Pool + FirstPendingPacket->Private.NdisPacketOobOffset) )
      {
        ndisFreePaddedMdl(FirstPendingPacket);
      }
      NdisPacketOobOffset = FirstPendingPacket->Private.NdisPacketOobOffset;
      FirstPendingPacket->Private.NdisPacketFlags &= 0xC0u;
      if ( *(_MDL **)((char *)&FirstPendingPacket[1].Private.Head + NdisPacketOobOffset) )
        ndisMSendCompletePacketToNetBufferLists(&a1->Header, FirstPendingPacket, v6);
      else
        (*(void (__fastcall **)(__int64, _NDIS_PACKET *, _QWORD))(v10 + 112))(v10, FirstPendingPacket, v6);
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(a1);
    }
    goto LABEL_24;
  }
  return 0;
}
