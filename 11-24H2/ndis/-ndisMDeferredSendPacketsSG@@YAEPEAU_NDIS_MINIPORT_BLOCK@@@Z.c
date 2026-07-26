/*
 * XREFs of ?ndisMDeferredSendPacketsSG@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400D93B0
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140035310 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x1400425D0 (-ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1400529B0 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     ?ndisMLoopbackPacketX@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x14008AAC0 (-ndisMLoopbackPacketX@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1400D9CF0 (-ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMFreeSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1400DA908 (-ndisMFreeSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 *     memset @ 0x1400E7500 (memset.c)
 */

unsigned __int8 __fastcall ndisMDeferredSendPacketsSG(struct _NDIS_MINIPORT_BLOCK *a1)
{
  struct _NDIS_PACKET **p_FirstPendingPacket; // rsi
  unsigned int Flags; // eax
  unsigned int MaxSendPackets; // ecx
  void (__fastcall *WSendPacketsHandler)(void *, _NDIS_PACKET **, unsigned int); // r15
  struct _NDIS_PACKET **v6; // r12
  unsigned int v7; // r14d
  struct _NDIS_PACKET *v8; // rdi
  unsigned __int8 *WrapperReserved; // r15
  __int64 v10; // rax
  __int64 v11; // r10
  __int64 v12; // rcx
  __int64 v13; // r13
  unsigned __int8 **v14; // rax
  struct _NDIS_STACK_RESERVED *v15; // r15
  __int64 NdisPacketOobOffset; // rax
  __int64 *v17; // rdi
  unsigned int v18; // r15d
  __int64 v19; // rdi
  unsigned int v20; // r12d
  _QWORD *v21; // rax
  __int64 v22; // rdx
  _QWORD *v23; // rcx
  struct _NDIS_STACK_RESERVED *v24; // r13
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 *v27; // rcx
  __int64 v28; // rax
  struct _NDIS_STACK_RESERVED *v30; // [rsp+28h] [rbp-89h] BYREF
  unsigned int v31; // [rsp+30h] [rbp-81h]
  _QWORD *v32; // [rsp+38h] [rbp-79h]
  void (__fastcall *v33)(void *, _NDIS_PACKET **, unsigned int); // [rsp+40h] [rbp-71h]
  __int64 v34; // [rsp+48h] [rbp-69h]
  _QWORD v35[16]; // [rsp+58h] [rbp-59h] BYREF

  v30 = 0LL;
  memset(v35, 0, sizeof(v35));
  p_FirstPendingPacket = &a1->FirstPendingPacket;
  Flags = a1->Flags;
  MaxSendPackets = a1->MaxSendPackets;
  WSendPacketsHandler = a1->WSendPacketsHandler;
  v31 = MaxSendPackets;
  v33 = WSendPacketsHandler;
  if ( (Flags & 0x400000) == 0 && !*p_FirstPendingPacket )
    _InterlockedOr((volatile signed __int32 *)&a1->Flags, 0x400000u);
  if ( a1->PacketList.Flink == &a1->PacketList )
    *p_FirstPendingPacket = 0LL;
  if ( *p_FirstPendingPacket )
  {
    while ( 1 )
    {
      if ( (a1->Flags & 0x400000) == 0 )
        return 0;
      v6 = (struct _NDIS_PACKET **)v35;
      v7 = 0;
      if ( !MaxSendPackets )
        return 0;
      do
      {
        v8 = *p_FirstPendingPacket;
        if ( !*p_FirstPendingPacket )
          break;
        NDIS_STACK_RESERVED_FROM_PACKET(*p_FirstPendingPacket, &v30);
        WrapperReserved = v8->WrapperReserved;
        *p_FirstPendingPacket = 0LL;
        v10 = *(_QWORD *)&v8->MacReserved[16];
        if ( v10 != v11 )
          *p_FirstPendingPacket = (struct _NDIS_PACKET *)(v10 - 64);
        if ( ((a1->Flags & 0x4000) != 0 || (v8->Private.Flags & 0x80u) == 0 && (a1->Flags & 0x8800000) != 0)
          && ndisMLoopbackPacketX(a1, v8) )
        {
          v12 = *(_QWORD *)WrapperReserved;
          v13 = *(_QWORD *)v30;
          if ( *(unsigned __int8 **)(*(_QWORD *)WrapperReserved + 8LL) != WrapperReserved
            || (v14 = *(unsigned __int8 ***)&v8->MacReserved[24], *v14 != WrapperReserved) )
          {
LABEL_52:
            __fastfail(3u);
          }
          *v14 = (unsigned __int8 *)v12;
          *(_QWORD *)(v12 + 8) = v14;
          *(_QWORD *)&v8->MacReserved[24] = &v8->MacReserved[16];
          *(_QWORD *)WrapperReserved = WrapperReserved;
          _InterlockedOr((volatile signed __int32 *)&a1->Flags, 0x400000u);
          v15 = v30;
          *(_QWORD *)v30 = 1297040178LL;
          a1->MiniportThread = 0LL;
          KeReleaseSpinLockFromDpcLevel(&a1->Lock);
          if ( *(unsigned __int64 *)((char *)v8->Reserved + v8->Private.NdisPacketOobOffset) )
            ndisMFreeSGList(a1, v8);
          *((_DWORD *)v15 + 2) = 0;
          if ( (a1->SendFlags & 8) != 0 && *(void **)((char *)&v8[1].Private.Pool + v8->Private.NdisPacketOobOffset) )
            ndisFreePaddedMdl(v8);
          NdisPacketOobOffset = v8->Private.NdisPacketOobOffset;
          v8->Private.NdisPacketFlags &= 0xC0u;
          if ( *(_MDL **)((char *)&v8[1].Private.Head + NdisPacketOobOffset) )
            ndisMSendCompletePacketToNetBufferLists(&a1->Header, v8, 0);
          else
            (*(void (__fastcall **)(__int64, struct _NDIS_PACKET *))(v13 + 112))(v13, v8);
          NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(a1);
        }
        else
        {
          *v6 = v8;
          ++v7;
          v8->Private.NdisPacketFlags |= 0x18u;
          ++v6;
          *(unsigned int *)((char *)&v8->Private.Count + v8->Private.NdisPacketOobOffset) = 0;
        }
      }
      while ( v7 < v31 );
      if ( !v7 )
        return 0;
      v17 = v35;
      a1->MiniportThread = 0LL;
      v32 = v35;
      KeReleaseSpinLockFromDpcLevel(&a1->Lock);
      v33(a1->MiniportAdapterContext, (_NDIS_PACKET **)v35, v7);
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(a1);
      v18 = 0;
      while ( 1 )
      {
        v19 = *v17;
        v20 = *(_DWORD *)(*(unsigned __int16 *)(v19 + 42) + v19 + 32);
        *(_BYTE *)(v19 + 41) &= ~8u;
        if ( v20 == 259 )
          goto LABEL_45;
        if ( v20 == -1073741670 )
          break;
        NDIS_STACK_RESERVED_FROM_PACKET((struct _NDIS_PACKET *)v19, &v30);
        v34 = *(_QWORD *)v30;
        if ( (v34 & 0xFFFFFF00) != 0x4D4F4300 )
        {
          v21 = (_QWORD *)(v19 + 64);
          v22 = *(_QWORD *)(v19 + 64);
          if ( *(_QWORD *)(v22 + 8) != v19 + 64 )
            goto LABEL_52;
          v23 = *(_QWORD **)(v19 + 72);
          if ( (_QWORD *)*v23 != v21 )
            goto LABEL_52;
          *v23 = v22;
          *(_QWORD *)(v22 + 8) = v23;
          *(_QWORD *)(v19 + 72) = v19 + 64;
          *v21 = v21;
          _InterlockedOr((volatile signed __int32 *)&a1->Flags, 0x400000u);
          v24 = v30;
          *(_QWORD *)v30 = 1297040179LL;
          a1->MiniportThread = 0LL;
          KeReleaseSpinLockFromDpcLevel(&a1->Lock);
          if ( *(_QWORD *)(*(unsigned __int16 *)(v19 + 42) + v19 + 80) )
            ndisMFreeSGList(a1, (struct _NDIS_PACKET *)v19);
          *((_DWORD *)v24 + 2) = 0;
          if ( (a1->SendFlags & 8) != 0 && *(_QWORD *)(*(unsigned __int16 *)(v19 + 42) + v19 + 128) )
            ndisFreePaddedMdl((struct _NDIS_PACKET *)v19);
          v25 = *(unsigned __int16 *)(v19 + 42);
          *(_BYTE *)(v19 + 41) &= 0xC0u;
          if ( *(_QWORD *)(v25 + v19 + 112) )
            ndisMSendCompletePacketToNetBufferLists(&a1->Header, (struct _NDIS_PACKET *)v19, v20);
          else
            (*(void (__fastcall **)(__int64, __int64, _QWORD))(v34 + 112))(v34, v19, v20);
          NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(a1);
        }
LABEL_45:
        ++v18;
        v17 = ++v32;
        if ( v18 >= v7 )
          goto LABEL_50;
      }
      *p_FirstPendingPacket = (struct _NDIS_PACKET *)v19;
      _InterlockedAnd((volatile signed __int32 *)&a1->Flags, 0xFFBFFFFF);
      if ( v18 < v7 )
      {
        v26 = v7 - v18;
        v27 = &v35[v18];
        do
        {
          v28 = *v27++;
          *(_BYTE *)(v28 + 41) &= ~0x10u;
          --v26;
        }
        while ( v26 );
      }
LABEL_50:
      if ( !*p_FirstPendingPacket )
        return 0;
      MaxSendPackets = v31;
    }
  }
  return 0;
}
