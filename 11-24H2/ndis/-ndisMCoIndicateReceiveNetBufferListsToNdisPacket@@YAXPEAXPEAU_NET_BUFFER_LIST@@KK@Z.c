/*
 * XREFs of ?ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1400D3670
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisXlateRecvNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@@Z @ 0x14001F140 (-ndisXlateRecvNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@@Z.c)
 *     NdisAcquireRWLockRead @ 0x14003FA30 (NdisAcquireRWLockRead.c)
 *     NdisReleaseRWLock @ 0x14003FCA0 (NdisReleaseRWLock.c)
 *     ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x140042510 (-NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisXlateReturnPacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@@Z @ 0x140042CD0 (-ndisXlateReturnPacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisCoIndicatePromiscNetBuffer@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKE@Z @ 0x14004E1F0 (-ndisCoIndicatePromiscNetBuffer@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1400529B0 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     ndisReturnPacketToNetBufferList @ 0x14008D890 (ndisReturnPacketToNetBufferList.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 *     memset @ 0x1400E7500 (memset.c)
 */

void __fastcall ndisMCoIndicateReceiveNetBufferListsToNdisPacket(
        _QWORD *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v4; // r15
  __int64 v6; // rdi
  __int64 Status; // r12
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int8 v11; // al
  struct _NDIS_PACKET **v12; // r13
  struct _NDIS_PACKET *v13; // rbx
  __int64 NdisPacketOobOffset; // r14
  char *v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rax
  struct _NDIS_STACK_RESERVED *v18; // rsi
  int v19; // eax
  int v20; // eax
  int v21; // edx
  bool v22; // zf
  struct _NDIS_PACKET *v23; // rdx
  struct _NDIS_MINIPORT_BLOCK *v24; // rdx
  __int64 v25; // r12
  struct _NET_BUFFER_LIST *v26; // rbx
  _QWORD *v27; // rdi
  unsigned int v28; // esi
  unsigned int v29; // r14d
  unsigned __int8 v30; // [rsp+40h] [rbp-C0h]
  struct _LOCK_STATE_EX LockState; // [rsp+44h] [rbp-BCh] BYREF
  struct _NDIS_STACK_RESERVED *v32; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v33; // [rsp+50h] [rbp-B0h]
  unsigned int v34; // [rsp+58h] [rbp-A8h]
  unsigned int v35; // [rsp+5Ch] [rbp-A4h]
  __int64 v36; // [rsp+60h] [rbp-A0h]
  struct _NET_BUFFER_LIST *v37; // [rsp+68h] [rbp-98h]
  void *v38; // [rsp+70h] [rbp-90h]
  struct _NDIS_PACKET **v39; // [rsp+78h] [rbp-88h] BYREF
  int v40; // [rsp+80h] [rbp-80h]
  int v41; // [rsp+84h] [rbp-7Ch]
  struct _NET_BUFFER_LIST *v42; // [rsp+88h] [rbp-78h]
  _NET_BUFFER *FirstNetBuffer; // [rsp+90h] [rbp-70h]
  unsigned int v44; // [rsp+98h] [rbp-68h]
  int v45; // [rsp+9Ch] [rbp-64h]
  __int64 v46; // [rsp+A0h] [rbp-60h]
  _BYTE v47[512]; // [rsp+B0h] [rbp-50h] BYREF

  v4 = a1[9];
  v35 = a3;
  v37 = a2;
  v38 = a1;
  *(_WORD *)&LockState.OldIrql = 0;
  LockState.Flags = 0;
  v41 = 0;
  v45 = 0;
  v34 = a4;
  memset(v47, 0, sizeof(v47));
  v6 = *(_QWORD *)(v4 + 120);
  v32 = 0LL;
  v36 = *(_QWORD *)(v6 + 400);
  NdisAcquireRWLockRead(*(PNDIS_RW_LOCK_EX *)(v36 + 288), &LockState, 0);
  Status = a2->Status;
  v8 = KeGetPcr()->Prcb.Number << 12;
  v9 = *(_QWORD *)(v4 + 16);
  v40 = 64;
  v42 = a2;
  v44 = 0;
  v10 = *(_QWORD *)(v9 + 720);
  v39 = (struct _NDIS_PACKET **)v47;
  v46 = v6;
  *(_BYTE *)(v8 + v10) = 1;
  FirstNetBuffer = a2->FirstNetBuffer;
  do
  {
    v11 = ndisXlateRecvNetBufferListsToPacketArray((struct _NDIS_NBLS_TO_PKT_ARRAY *)&v39);
    v30 = v11;
    if ( !v44 )
      continue;
    v12 = v39;
    v33 = v44;
    do
    {
      v13 = *v12;
      NdisPacketOobOffset = (*v12)->Private.NdisPacketOobOffset;
      ++*(_DWORD *)&v13[-1].ProtocolReserved[4];
      v15 = (char *)v13 + NdisPacketOobOffset;
      NDIS_STACK_RESERVED_FROM_PACKET(v13, &v32);
      v16 = *(_QWORD *)(v6 + 3152);
      if ( v16 )
      {
        v17 = 112LL * KeGetPcr()->Prcb.Number;
        ++*(_QWORD *)(v16 + v17 + 32);
      }
      v18 = v32;
      *((_DWORD *)v32 + 2) = -1;
      *((_DWORD *)v18 + 3) = 0;
      *(_QWORD *)v18 = v6;
      v13->Private.ValidCounts = 0;
      v19 = *((_DWORD *)v15 + 8);
      if ( v19 != -1073741670 )
        *((_DWORD *)v15 + 8) = v19;
      if ( (*(_DWORD *)(v4 + 4) & 0x10) != 0 )
      {
        *((_DWORD *)v18 + 3) = 0;
LABEL_18:
        *((_DWORD *)v18 + 2) = 0;
        goto LABEL_19;
      }
      v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct _NDIS_PACKET *))(v4 + 56))(
              *(_QWORD *)(*(_QWORD *)(v4 + 16) + 32LL),
              *(_QWORD *)(v4 + 24),
              v13);
      *((_DWORD *)v18 + 3) = v20;
      if ( !v20 )
        goto LABEL_18;
      v21 = v20 + _InterlockedExchangeAdd((volatile signed __int32 *)v18 + 2, v20 + 1) + 1;
      v22 = v21 == 0;
      if ( v21 > 0 )
      {
        if ( (*(_DWORD *)(v6 + 120) & 0x40000) == 0 )
          *(unsigned int *)((char *)&v13->Private.Count + v13->Private.NdisPacketOobOffset) = 259;
        v22 = v21 == 0;
      }
      if ( !v22 )
      {
        if ( (*(_DWORD *)(v6 + 120) & 0x8000) != 0 )
          _InterlockedIncrement((volatile signed __int32 *)(v6 + 1828));
        goto LABEL_32;
      }
LABEL_19:
      --*(_DWORD *)&v13[-1].ProtocolReserved[4];
      if ( *((_DWORD *)v15 + 8) == -1073741670 )
        goto LABEL_32;
      if ( (*(_DWORD *)(v6 + 120) & 0x40000) != 0 )
      {
        *(_QWORD *)v32 = 0LL;
        *((_DWORD *)v15 + 8) = 259;
        if ( (v13[-1].Reserved[1] & 1) != 0 && *(_DWORD *)&v13[-1].ProtocolReserved[4] == -1 )
          goto LABEL_29;
        v23 = v13;
        if ( *(_MDL **)((char *)&v13[1].Private.Head + v13->Private.NdisPacketOobOffset) )
          goto LABEL_24;
        (*(void (__fastcall **)(_QWORD, struct _NDIS_PACKET *))(*(_QWORD *)(v6 + 3760) + 224LL))(
          *(_QWORD *)(v6 + 24),
          v13);
      }
      else
      {
        if ( *(_MDL **)((char *)&v13[1].Private.Head + v13->Private.NdisPacketOobOffset) )
        {
          *(_QWORD *)v32 = 0LL;
          *(unsigned int *)((char *)&v13->Private.Count + v13->Private.NdisPacketOobOffset) = 259;
          if ( (v13[-1].Reserved[1] & 1) == 0 || *(_DWORD *)&v13[-1].ProtocolReserved[4] != -1 )
          {
            v23 = v13;
LABEL_24:
            ndisReturnPacketToNetBufferList((struct _NDIS_FILTER_BLOCK *)v6, v23);
            goto LABEL_32;
          }
LABEL_29:
          NDIS_FREE_XFER_DATA_PACKET(v13);
          goto LABEL_32;
        }
        *((_DWORD *)v15 + 8) = 0;
      }
LABEL_32:
      if ( Status == -1073741670 )
        ndisXlateReturnPacketToNetBufferList(v13);
      ++v12;
      --v33;
    }
    while ( v33 );
    v11 = v30;
  }
  while ( v11 );
  v24 = *(struct _NDIS_MINIPORT_BLOCK **)(v4 + 120);
  v25 = v36;
  if ( v24->PmodeOpens )
  {
    v26 = v37;
    v27 = v38;
    v28 = v34;
    v29 = v35;
    ndisCoIndicatePromiscNetBuffer(v38, v24, *(struct _NDIS_OPEN_BLOCK **)v36, v37, v35, v34, 1);
    ndisCoIndicatePromiscNetBuffer(
      v27,
      *(struct _NDIS_MINIPORT_BLOCK **)(v4 + 120),
      *(struct _NDIS_OPEN_BLOCK **)(v25 + 8),
      v26,
      v29,
      v28,
      1);
    ndisCoIndicatePromiscNetBuffer(
      v27,
      *(struct _NDIS_MINIPORT_BLOCK **)(v4 + 120),
      *(struct _NDIS_OPEN_BLOCK **)(v25 + 16),
      v26,
      v29,
      v28,
      1);
  }
  NdisReleaseRWLock(*(PNDIS_RW_LOCK_EX *)(v25 + 288), &LockState);
}
