/*
 * XREFs of ?ndisMDeferredSendPackets@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400D7F30
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140035310 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x1400425D0 (-ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1400529B0 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     ?NDISM_SEND_PACKET_STATS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1400546C0 (-NDISM_SEND_PACKET_STATS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMLoopbackPacketX@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x14008AAC0 (-ndisMLoopbackPacketX@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1400D9CF0 (-ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 *     memset @ 0x1400E7500 (memset.c)
 */

unsigned __int8 __fastcall ndisMDeferredSendPackets(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int MaxSendPackets; // r12d
  unsigned int v3; // r14d
  _NDIS_PACKET **v4; // r15
  _NDIS_PACKET *FirstPendingPacket; // rsi
  unsigned __int8 *WrapperReserved; // rbx
  __int64 v7; // rax
  __int64 v8; // r10
  __int64 v9; // rcx
  __int64 v10; // r13
  unsigned __int8 **v11; // rax
  struct _NDIS_STACK_RESERVED *v12; // rbx
  __int64 NdisPacketOobOffset; // rax
  _QWORD *v14; // rbx
  __int64 v15; // r15
  __int64 v16; // rsi
  unsigned int v17; // r12d
  __int64 v18; // r13
  _QWORD *v19; // rax
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  struct _NDIS_STACK_RESERVED *v22; // rbx
  __int64 v23; // rax
  __int64 *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rax
  unsigned int v28; // [rsp+28h] [rbp-79h]
  struct _NDIS_STACK_RESERVED *v29; // [rsp+30h] [rbp-71h] BYREF
  _QWORD *v30; // [rsp+38h] [rbp-69h]
  void (__fastcall *WSendPacketsHandler)(void *, _NDIS_PACKET **, unsigned int); // [rsp+40h] [rbp-61h]
  _QWORD v32[16]; // [rsp+48h] [rbp-59h] BYREF

  v29 = 0LL;
  memset(v32, 0, sizeof(v32));
  MaxSendPackets = a1->MaxSendPackets;
  v28 = MaxSendPackets;
  WSendPacketsHandler = a1->WSendPacketsHandler;
  if ( a1->PacketList.Flink == &a1->PacketList )
    a1->FirstPendingPacket = 0LL;
  if ( !a1->FirstPendingPacket )
    return 0;
LABEL_4:
  if ( (a1->Flags & 0x400000) != 0 )
  {
    v3 = 0;
    v4 = (_NDIS_PACKET **)v32;
    if ( MaxSendPackets )
    {
      do
      {
        FirstPendingPacket = a1->FirstPendingPacket;
        if ( !FirstPendingPacket )
          break;
        NDIS_STACK_RESERVED_FROM_PACKET(a1->FirstPendingPacket, &v29);
        a1->FirstPendingPacket = 0LL;
        WrapperReserved = FirstPendingPacket->WrapperReserved;
        v7 = *(_QWORD *)&FirstPendingPacket->MacReserved[16];
        if ( v7 != v8 )
          a1->FirstPendingPacket = (_NDIS_PACKET *)(v7 - 64);
        if ( ((a1->Flags & 0x4000) != 0
           || (FirstPendingPacket->Private.Flags & 0x80u) == 0 && (a1->Flags & 0x8800000) != 0)
          && ndisMLoopbackPacketX(a1, FirstPendingPacket) )
        {
          v9 = *(_QWORD *)WrapperReserved;
          v10 = *(_QWORD *)v29;
          if ( *(unsigned __int8 **)(*(_QWORD *)WrapperReserved + 8LL) != WrapperReserved
            || (v11 = *(unsigned __int8 ***)&FirstPendingPacket->MacReserved[24], *v11 != WrapperReserved) )
          {
LABEL_48:
            __fastfail(3u);
          }
          *v11 = (unsigned __int8 *)v9;
          *(_QWORD *)(v9 + 8) = v11;
          *(_QWORD *)&FirstPendingPacket->MacReserved[24] = &FirstPendingPacket->MacReserved[16];
          *(_QWORD *)WrapperReserved = WrapperReserved;
          _InterlockedOr((volatile signed __int32 *)&a1->Flags, 0x400000u);
          v12 = v29;
          *(_QWORD *)v29 = 1297040178LL;
          a1->MiniportThread = 0LL;
          KeReleaseSpinLockFromDpcLevel(&a1->Lock);
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
            (*(void (__fastcall **)(__int64, _NDIS_PACKET *))(v10 + 112))(v10, FirstPendingPacket);
          NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(a1);
        }
        else
        {
          *v4 = FirstPendingPacket;
          ++v3;
          FirstPendingPacket->Private.NdisPacketFlags |= 0x18u;
          *(unsigned int *)((char *)&FirstPendingPacket->Private.Count + FirstPendingPacket->Private.NdisPacketOobOffset) = 0;
          ++v4;
        }
      }
      while ( v3 < MaxSendPackets );
      if ( v3 )
      {
        a1->MiniportThread = 0LL;
        v14 = v32;
        v30 = v32;
        KeReleaseSpinLockFromDpcLevel(&a1->Lock);
        WSendPacketsHandler(a1->MiniportAdapterContext, (_NDIS_PACKET **)v32, v3);
        NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(a1);
        v15 = 0LL;
        while ( 1 )
        {
          v16 = *v14;
          v17 = *(_DWORD *)(*(unsigned __int16 *)(*v14 + 42LL) + *v14 + 32LL);
          *(_BYTE *)(*v14 + 41LL) &= ~8u;
          if ( v17 != 259 )
          {
            if ( v17 == -1073741670 )
            {
              a1->FirstPendingPacket = (_NDIS_PACKET *)v16;
              _InterlockedAnd((volatile signed __int32 *)&a1->Flags, 0xFFBFFFFF);
              if ( (unsigned int)v15 < v3 )
              {
                v24 = &v32[v15];
                v25 = v3 - (unsigned int)v15;
                do
                {
                  v26 = *v24++;
                  *(_BYTE *)(v26 + 41) &= ~0x10u;
                  --v25;
                }
                while ( v25 );
              }
LABEL_45:
              MaxSendPackets = v28;
              if ( a1->FirstPendingPacket )
                goto LABEL_4;
              return 0;
            }
            if ( !v17 )
              NDISM_SEND_PACKET_STATS(a1, (struct _NDIS_PACKET *)v16);
            NDIS_STACK_RESERVED_FROM_PACKET((struct _NDIS_PACKET *)v16, &v29);
            v18 = *(_QWORD *)v29;
            if ( (*(_QWORD *)v29 & 0xFFFFFF00LL) != 0x4D4F4300 )
            {
              v19 = (_QWORD *)(v16 + 64);
              v20 = *(_QWORD *)(v16 + 64);
              if ( *(_QWORD *)(v20 + 8) != v16 + 64 )
                goto LABEL_48;
              v21 = *(_QWORD **)(v16 + 72);
              if ( (_QWORD *)*v21 != v19 )
                goto LABEL_48;
              *v21 = v20;
              *(_QWORD *)(v20 + 8) = v21;
              *(_QWORD *)(v16 + 72) = v16 + 64;
              *v19 = v19;
              _InterlockedOr((volatile signed __int32 *)&a1->Flags, 0x400000u);
              v22 = v29;
              *(_QWORD *)v29 = 1297040179LL;
              a1->MiniportThread = 0LL;
              KeReleaseSpinLockFromDpcLevel(&a1->Lock);
              *((_DWORD *)v22 + 2) = 0;
              if ( (a1->SendFlags & 8) != 0 && *(_QWORD *)(*(unsigned __int16 *)(v16 + 42) + v16 + 128) )
                ndisFreePaddedMdl((struct _NDIS_PACKET *)v16);
              v23 = *(unsigned __int16 *)(v16 + 42);
              *(_BYTE *)(v16 + 41) &= 0xC0u;
              if ( *(_QWORD *)(v23 + v16 + 112) )
                ndisMSendCompletePacketToNetBufferLists(&a1->Header, (struct _NDIS_PACKET *)v16, v17);
              else
                (*(void (__fastcall **)(__int64, __int64, _QWORD))(v18 + 112))(v18, v16, v17);
              NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(a1);
              v14 = v30;
            }
          }
          ++v14;
          v15 = (unsigned int)(v15 + 1);
          v30 = v14;
          if ( (unsigned int)v15 >= v3 )
            goto LABEL_45;
        }
      }
    }
  }
  return 0;
}
