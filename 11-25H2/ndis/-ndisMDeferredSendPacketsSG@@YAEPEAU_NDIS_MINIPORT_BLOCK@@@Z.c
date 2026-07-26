/*
 * XREFs of ?ndisMDeferredSendPacketsSG@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400E0640
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140025750 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMLoopbackPacketX@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1400305C0 (-ndisMLoopbackPacketX@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x140031220 (-ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x14006D530 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     ?ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1400E0F48 (-ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMFreeSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1400E1AEC (-ndisMFreeSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400EE380 (memset.c)
 */

unsigned __int8 __fastcall ndisMDeferredSendPacketsSG(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int Flags; // eax
  unsigned int MaxSendPackets; // r12d
  unsigned int v4; // esi
  _NDIS_PACKET **v5; // rbp
  _NDIS_PACKET *FirstPendingPacket; // rdi
  unsigned __int8 *WrapperReserved; // r14
  __int64 v8; // rax
  __int64 v9; // r10
  unsigned int v10; // eax
  __int64 v11; // rcx
  struct _NDIS_STACK_RESERVED *v12; // r15
  __int64 v13; // r13
  unsigned __int8 **v14; // rax
  __int64 NdisPacketOobOffset; // rax
  _QWORD *v16; // r12
  __int64 v17; // rbp
  __int64 v18; // rdi
  unsigned int v19; // r14d
  struct _NDIS_STACK_RESERVED *v20; // r15
  __int64 v21; // r13
  _QWORD *v22; // rax
  __int64 v23; // rdx
  _QWORD *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 *v27; // rcx
  __int64 v28; // rax
  unsigned int v30; // [rsp+20h] [rbp-D8h]
  struct _NDIS_STACK_RESERVED *v31; // [rsp+28h] [rbp-D0h] BYREF
  void (__fastcall *WSendPacketsHandler)(void *, _NDIS_PACKET **, unsigned int); // [rsp+30h] [rbp-C8h]
  _QWORD v33[16]; // [rsp+40h] [rbp-B8h] BYREF

  v31 = 0LL;
  memset(v33, 0, sizeof(v33));
  Flags = a1->Flags;
  MaxSendPackets = a1->MaxSendPackets;
  v30 = MaxSendPackets;
  WSendPacketsHandler = a1->WSendPacketsHandler;
  if ( (Flags & 0x400000) == 0 && !a1->FirstPendingPacket )
    a1->Flags = Flags | 0x400000;
  if ( a1->PacketList.Flink == &a1->PacketList )
    a1->FirstPendingPacket = 0LL;
  while ( a1->FirstPendingPacket )
  {
    if ( (a1->Flags & 0x400000) == 0 )
      break;
    v4 = 0;
    v5 = (_NDIS_PACKET **)v33;
    if ( !MaxSendPackets )
      break;
    do
    {
      FirstPendingPacket = a1->FirstPendingPacket;
      if ( !FirstPendingPacket )
        break;
      NDIS_STACK_RESERVED_FROM_PACKET(a1->FirstPendingPacket, &v31);
      a1->FirstPendingPacket = 0LL;
      WrapperReserved = FirstPendingPacket->WrapperReserved;
      v8 = *(_QWORD *)&FirstPendingPacket->MacReserved[16];
      if ( v8 != v9 )
        a1->FirstPendingPacket = (_NDIS_PACKET *)(v8 - 64);
      if ( ((v10 = a1->Flags, (v10 & 0x4000) != 0)
         || (v10 & 0x8800000) != 0 && SLOBYTE(FirstPendingPacket->Private.Flags) >= 0)
        && ndisMLoopbackPacketX(a1, FirstPendingPacket) )
      {
        v11 = *(_QWORD *)WrapperReserved;
        v12 = v31;
        v13 = *(_QWORD *)v31;
        if ( *(unsigned __int8 **)(*(_QWORD *)WrapperReserved + 8LL) != WrapperReserved
          || (v14 = *(unsigned __int8 ***)&FirstPendingPacket->MacReserved[24], *v14 != WrapperReserved) )
        {
LABEL_50:
          __fastfail(3u);
        }
        *v14 = (unsigned __int8 *)v11;
        *(_QWORD *)(v11 + 8) = v14;
        *(_QWORD *)&FirstPendingPacket->MacReserved[24] = &FirstPendingPacket->MacReserved[16];
        *(_QWORD *)&FirstPendingPacket->MacReserved[16] = &FirstPendingPacket->MacReserved[16];
        a1->Flags |= 0x400000u;
        *(_QWORD *)v12 = 1297040178LL;
        a1->MiniportThread = 0LL;
        KeReleaseSpinLockFromDpcLevel(&a1->Lock);
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
          ndisMSendCompletePacketToNetBufferLists(&a1->Header, FirstPendingPacket, 0);
        else
          (*(void (__fastcall **)(__int64, _NDIS_PACKET *, _QWORD))(v13 + 112))(v13, FirstPendingPacket, 0LL);
        NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(a1);
      }
      else
      {
        *v5 = FirstPendingPacket;
        ++v4;
        FirstPendingPacket->Private.NdisPacketFlags |= 0x18u;
        *(unsigned int *)((char *)&FirstPendingPacket->Private.Count + FirstPendingPacket->Private.NdisPacketOobOffset) = 0;
        ++v5;
      }
    }
    while ( v4 < MaxSendPackets );
    if ( !v4 )
      break;
    a1->MiniportThread = 0LL;
    v16 = v33;
    KeReleaseSpinLockFromDpcLevel(&a1->Lock);
    WSendPacketsHandler(a1->MiniportAdapterContext, (_NDIS_PACKET **)v33, v4);
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(a1);
    v17 = 0LL;
    while ( (unsigned int)v17 < v4 )
    {
      v18 = *v16;
      v19 = *(_DWORD *)(*(unsigned __int16 *)(*v16 + 42LL) + *v16 + 32LL);
      *(_BYTE *)(*v16 + 41LL) &= ~8u;
      if ( v19 != 259 )
      {
        if ( v19 == -1073741670 )
        {
          a1->Flags &= ~0x400000u;
          a1->FirstPendingPacket = (_NDIS_PACKET *)v18;
          v26 = v4 - (unsigned int)v17;
          v27 = &v33[v17];
          do
          {
            v28 = *v27++;
            *(_BYTE *)(v28 + 41) &= ~0x10u;
            --v26;
          }
          while ( v26 );
          break;
        }
        NDIS_STACK_RESERVED_FROM_PACKET((struct _NDIS_PACKET *)v18, &v31);
        v20 = v31;
        v21 = *(_QWORD *)v31;
        if ( (*(_QWORD *)v31 & 0xFFFFFF00LL) != 0x4D4F4300 )
        {
          v22 = (_QWORD *)(v18 + 64);
          v23 = *(_QWORD *)(v18 + 64);
          if ( *(_QWORD *)(v23 + 8) != v18 + 64 )
            goto LABEL_50;
          v24 = *(_QWORD **)(v18 + 72);
          if ( (_QWORD *)*v24 != v22 )
            goto LABEL_50;
          *v24 = v23;
          *(_QWORD *)(v23 + 8) = v24;
          *(_QWORD *)(v18 + 72) = v18 + 64;
          *v22 = v22;
          a1->Flags |= 0x400000u;
          *(_QWORD *)v20 = 1297040179LL;
          a1->MiniportThread = 0LL;
          KeReleaseSpinLockFromDpcLevel(&a1->Lock);
          if ( *(_QWORD *)(*(unsigned __int16 *)(v18 + 42) + v18 + 80) )
            ndisMFreeSGList(a1, (struct _NDIS_PACKET *)v18);
          *((_DWORD *)v20 + 2) = 0;
          if ( (a1->SendFlags & 8) != 0 && *(_QWORD *)(*(unsigned __int16 *)(v18 + 42) + v18 + 128) )
            ndisFreePaddedMdl((struct _NDIS_PACKET *)v18);
          v25 = *(unsigned __int16 *)(v18 + 42);
          *(_BYTE *)(v18 + 41) &= 0xC0u;
          if ( *(_QWORD *)(v25 + v18 + 112) )
            ndisMSendCompletePacketToNetBufferLists(&a1->Header, (struct _NDIS_PACKET *)v18, v19);
          else
            (*(void (__fastcall **)(__int64, __int64, _QWORD))(v21 + 112))(v21, v18, v19);
          NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(a1);
        }
      }
      v17 = (unsigned int)(v17 + 1);
      ++v16;
    }
    MaxSendPackets = v30;
  }
  return 0;
}
