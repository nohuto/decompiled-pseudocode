/*
 * XREFs of ?ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1400DA9C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisXlateRecvNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@@Z @ 0x14002F8A0 (-ndisXlateRecvNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@@Z.c)
 *     ?ndisXlateReturnPacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@@Z @ 0x140035310 (-ndisXlateReturnPacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@@Z.c)
 *     NdisAcquireRWLockRead @ 0x140042EE0 (NdisAcquireRWLockRead.c)
 *     NdisReleaseRWLock @ 0x140043190 (NdisReleaseRWLock.c)
 *     ?ndisCoIndicatePromiscNetBuffer@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKE@Z @ 0x14006A5F0 (-ndisCoIndicatePromiscNetBuffer@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET.c)
 *     ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x14006C3F0 (-NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x14006D530 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     ndisReturnPacketToNetBufferList @ 0x140099130 (ndisReturnPacketToNetBufferList.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400EE380 (memset.c)
 */

void __fastcall ndisMCoIndicateReceiveNetBufferListsToNdisPacket(
        _QWORD *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v4; // r15
  __int64 v6; // rsi
  __int64 Status; // r12
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int8 v11; // al
  struct _NDIS_PACKET **v12; // r13
  struct _NDIS_PACKET *v13; // rbx
  __int64 NdisPacketOobOffset; // r14
  char *v15; // r14
  _MDL *v16; // r10
  __int64 v17; // rdx
  __int64 v18; // rax
  struct _NDIS_STACK_RESERVED *v19; // rdi
  int v20; // eax
  int v21; // eax
  int v22; // edx
  bool v23; // zf
  struct _NDIS_PACKET *v24; // rdx
  struct _NDIS_MINIPORT_BLOCK *v25; // rdx
  __int64 v26; // r12
  struct _NET_BUFFER_LIST *v27; // rbx
  _QWORD *v28; // rdi
  unsigned int v29; // esi
  unsigned int v30; // r14d
  unsigned __int8 v31; // [rsp+40h] [rbp-C0h]
  struct _LOCK_STATE_EX LockState; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v33; // [rsp+48h] [rbp-B8h]
  unsigned int v34; // [rsp+50h] [rbp-B0h]
  unsigned int v35; // [rsp+54h] [rbp-ACh]
  struct _NDIS_STACK_RESERVED *v36; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v37; // [rsp+60h] [rbp-A0h]
  struct _NET_BUFFER_LIST *v38; // [rsp+68h] [rbp-98h]
  void *v39; // [rsp+70h] [rbp-90h]
  struct _NDIS_PACKET **v40; // [rsp+78h] [rbp-88h] BYREF
  int v41; // [rsp+80h] [rbp-80h]
  int v42; // [rsp+84h] [rbp-7Ch]
  struct _NET_BUFFER_LIST *v43; // [rsp+88h] [rbp-78h]
  _NET_BUFFER *FirstNetBuffer; // [rsp+90h] [rbp-70h]
  unsigned int v45; // [rsp+98h] [rbp-68h]
  int v46; // [rsp+9Ch] [rbp-64h]
  __int64 v47; // [rsp+A0h] [rbp-60h]
  _BYTE v48[512]; // [rsp+B0h] [rbp-50h] BYREF

  v4 = a1[9];
  v35 = a3;
  v38 = a2;
  v39 = a1;
  *(_WORD *)&LockState.OldIrql = 0;
  LockState.Flags = 0;
  v42 = 0;
  v46 = 0;
  v34 = a4;
  memset(v48, 0, sizeof(v48));
  v6 = *(_QWORD *)(v4 + 120);
  v36 = 0LL;
  v37 = *(_QWORD *)(v6 + 400);
  NdisAcquireRWLockRead(*(PNDIS_RW_LOCK_EX *)(v37 + 288), &LockState, 0);
  Status = a2->Status;
  v8 = KeGetPcr()->Prcb.Number << 12;
  v9 = *(_QWORD *)(v4 + 16);
  v41 = 64;
  v43 = a2;
  v45 = 0;
  v10 = *(_QWORD *)(v9 + 720);
  v40 = (struct _NDIS_PACKET **)v48;
  v47 = v6;
  *(_BYTE *)(v8 + v10) = 1;
  FirstNetBuffer = a2->FirstNetBuffer;
  do
  {
    v11 = ndisXlateRecvNetBufferListsToPacketArray((struct _NDIS_NBLS_TO_PKT_ARRAY *)&v40);
    v31 = v11;
    if ( !v45 )
      continue;
    v12 = v40;
    v33 = v45;
    do
    {
      v13 = *v12;
      NdisPacketOobOffset = (*v12)->Private.NdisPacketOobOffset;
      ++*(_DWORD *)&v13[-1].ProtocolReserved[4];
      v15 = (char *)v13 + NdisPacketOobOffset;
      NDIS_STACK_RESERVED_FROM_PACKET(v13, &v36);
      v17 = *(_QWORD *)(v6 + 3152);
      if ( v17 )
      {
        v18 = 112LL * KeGetPcr()->Prcb.Number;
        ++*(_QWORD *)(v17 + v18 + 32);
      }
      v19 = v36;
      *((_DWORD *)v36 + 2) = -1;
      *((_DWORD *)v19 + 3) = (_DWORD)v16;
      *(_QWORD *)v19 = v6;
      v13->Private.ValidCounts = (unsigned __int8)v16;
      v20 = *((_DWORD *)v15 + 8);
      if ( v20 != -1073741670 )
        *((_DWORD *)v15 + 8) = v20;
      if ( (*(_DWORD *)(v4 + 4) & 0x10) != 0 )
      {
        *((_DWORD *)v19 + 3) = (_DWORD)v16;
LABEL_19:
        *((_DWORD *)v19 + 2) = (_DWORD)v16;
        goto LABEL_20;
      }
      v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct _NDIS_PACKET *))(v4 + 56))(
              *(_QWORD *)(*(_QWORD *)(v4 + 16) + 32LL),
              *(_QWORD *)(v4 + 24),
              v13);
      v16 = 0LL;
      *((_DWORD *)v19 + 3) = v21;
      if ( !v21 )
        goto LABEL_19;
      v22 = v21 + _InterlockedExchangeAdd((volatile signed __int32 *)v19 + 2, v21 + 1) + 1;
      v23 = v22 == 0;
      if ( v22 > 0 )
      {
        if ( (*(_DWORD *)(v6 + 120) & 0x40000) == 0 )
          *(unsigned int *)((char *)&v13->Private.Count + v13->Private.NdisPacketOobOffset) = 259;
        v23 = v22 == 0;
      }
      if ( !v23 )
      {
        if ( (*(_DWORD *)(v6 + 120) & 0x8000) != 0 )
          _InterlockedIncrement((volatile signed __int32 *)(v6 + 1828));
        goto LABEL_33;
      }
      v19 = v36;
LABEL_20:
      --*(_DWORD *)&v13[-1].ProtocolReserved[4];
      if ( *((_DWORD *)v15 + 8) == -1073741670 )
        goto LABEL_33;
      if ( (*(_DWORD *)(v6 + 120) & 0x40000) != 0 )
      {
        *(_QWORD *)v19 = v16;
        *((_DWORD *)v15 + 8) = 259;
        if ( (v13[-1].Reserved[1] & 1) != 0 && *(_DWORD *)&v13[-1].ProtocolReserved[4] == -1 )
          goto LABEL_30;
        v24 = v13;
        if ( *(_MDL **)((char *)&v13[1].Private.Head + v13->Private.NdisPacketOobOffset) != v16 )
          goto LABEL_25;
        (*(void (__fastcall **)(_QWORD, struct _NDIS_PACKET *))(*(_QWORD *)(v6 + 3760) + 224LL))(
          *(_QWORD *)(v6 + 24),
          v13);
      }
      else
      {
        if ( *(_MDL **)((char *)&v13[1].Private.Head + v13->Private.NdisPacketOobOffset) != v16 )
        {
          *(_QWORD *)v19 = v16;
          *(unsigned int *)((char *)&v13->Private.Count + v13->Private.NdisPacketOobOffset) = 259;
          if ( (v13[-1].Reserved[1] & 1) == 0 || *(_DWORD *)&v13[-1].ProtocolReserved[4] != -1 )
          {
            v24 = v13;
LABEL_25:
            ndisReturnPacketToNetBufferList((struct _NDIS_FILTER_BLOCK *)v6, v24);
            goto LABEL_33;
          }
LABEL_30:
          NDIS_FREE_XFER_DATA_PACKET(v13);
          goto LABEL_33;
        }
        *((_DWORD *)v15 + 8) = (_DWORD)v16;
      }
LABEL_33:
      if ( Status == -1073741670 )
        ndisXlateReturnPacketToNetBufferList(v13);
      ++v12;
      --v33;
    }
    while ( v33 );
    v11 = v31;
  }
  while ( v11 );
  v25 = *(struct _NDIS_MINIPORT_BLOCK **)(v4 + 120);
  v26 = v37;
  if ( v25->PmodeOpens )
  {
    v27 = v38;
    v28 = v39;
    v29 = v34;
    v30 = v35;
    ndisCoIndicatePromiscNetBuffer(v39, v25, *(struct _NDIS_OPEN_BLOCK **)v37, v38, v35, v34, 1);
    ndisCoIndicatePromiscNetBuffer(
      v28,
      *(struct _NDIS_MINIPORT_BLOCK **)(v4 + 120),
      *(struct _NDIS_OPEN_BLOCK **)(v26 + 8),
      v27,
      v30,
      v29,
      1);
    ndisCoIndicatePromiscNetBuffer(
      v28,
      *(struct _NDIS_MINIPORT_BLOCK **)(v4 + 120),
      *(struct _NDIS_OPEN_BLOCK **)(v26 + 16),
      v27,
      v30,
      v29,
      1);
  }
  NdisReleaseRWLock(*(PNDIS_RW_LOCK_EX *)(v26 + 288), &LockState);
}
