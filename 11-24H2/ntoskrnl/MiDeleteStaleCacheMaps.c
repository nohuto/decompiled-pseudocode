/*
 * XREFs of MiDeleteStaleCacheMaps @ 0x140676A50
 * Callers:
 *     <none>
 * Callees:
 *     KeShouldYieldProcessor @ 0x14023BA60 (KeShouldYieldProcessor.c)
 *     RtlAvlRemoveNode @ 0x1402911D0 (RtlAvlRemoveNode.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiIsPageInHugePfn @ 0x14038ED20 (MiIsPageInHugePfn.c)
 *     MiIsPageInIoHugeRangeTransition @ 0x14038ED50 (MiIsPageInIoHugeRangeTransition.c)
 *     MiUnlockIoPfnTree @ 0x14038F980 (MiUnlockIoPfnTree.c)
 *     MiLockIoPfnTree @ 0x14038FA2C (MiLockIoPfnTree.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14039D0A4 (MiFlushEntireTbDueToAttributeChange.c)
 *     MiTbFlushTimeStampMayNeedFlush @ 0x140446A68 (MiTbFlushTimeStampMayNeedFlush.c)
 *     MiIoPfnTreeLockContended @ 0x14048CC20 (MiIoPfnTreeLockContended.c)
 *     MiConvertIoPfnTreeLockExclusiveToShared @ 0x1404BE32C (MiConvertIoPfnTreeLockExclusiveToShared.c)
 *     MiDereferenceIoHugeRange @ 0x140670D38 (MiDereferenceIoHugeRange.c)
 *     MiFlushStaleCacheMap @ 0x140676F80 (MiFlushStaleCacheMap.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiDeleteStaleCacheMaps(__int64 a1)
{
  __int64 *v1; // rdx
  char v2; // r15
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rax
  char v6; // al
  volatile signed __int64 *v7; // r12
  __int64 v8; // r14
  unsigned __int8 v9; // di
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r13
  _QWORD *v12; // rbx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  _QWORD *v15; // rax
  unsigned __int64 v16; // rsi
  _QWORD *v17; // rcx
  _QWORD *v18; // rcx
  __int64 i; // rsi
  int v20; // eax
  char v21; // di
  unsigned __int64 v22; // rax
  unsigned int v23; // eax
  unsigned int v24; // edi
  bool v25; // zf
  int v26; // ecx
  signed __int64 v27; // rcx
  _QWORD *v28; // rax
  unsigned __int64 v29; // rcx
  __int64 v30; // rdx
  bool v31; // cf
  __int64 v32; // rcx
  struct _LIST_ENTRY **v33; // rcx
  struct _LIST_ENTRY **v34; // rdx
  struct _LIST_ENTRY *v35; // rax
  unsigned __int64 *v36; // rbx
  _QWORD *v37; // rcx
  PVOID *v38; // rax
  _QWORD *j; // rcx
  signed __int32 v41[8]; // [rsp+0h] [rbp-78h] BYREF
  int v42; // [rsp+20h] [rbp-58h]
  int v43; // [rsp+24h] [rbp-54h]
  int v44; // [rsp+28h] [rbp-50h]
  int v45; // [rsp+2Ch] [rbp-4Ch]
  PVOID P[2]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v47[2]; // [rsp+40h] [rbp-38h] BYREF
  _OWORD v48[2]; // [rsp+50h] [rbp-28h]
  unsigned __int8 v50; // [rsp+C8h] [rbp+50h]
  char v51; // [rsp+D0h] [rbp+58h]
  int v52; // [rsp+D8h] [rbp+60h]

LABEL_1:
  P[1] = P;
  v1 = (__int64 *)&unk_140E372E0;
  v42 = 0;
  P[0] = P;
  v2 = 0;
  v44 = 0;
  v3 = 0LL;
  v51 = 0;
  v4 = 2LL;
  LOBYTE(v43) = 0;
  v52 = 0;
  v48[0] = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  do
  {
    v5 = *v1;
    v1 += 8;
    *(_QWORD *)((char *)&v48[1] + v3 * 8) = v5;
    v47[v3++] = v5;
    --v4;
  }
  while ( v4 );
  v6 = MiLockIoPfnTree(1LL, (__int64)v1);
  v45 = 0;
  v7 = (volatile signed __int64 *)&unk_140E372D0;
  v8 = 0LL;
  v50 = v6;
  v9 = v6;
  do
  {
    while ( 1 )
    {
LABEL_4:
      v10 = *((_QWORD *)v7 + 1);
      if ( !v10 )
        goto LABEL_66;
      v11 = *(_QWORD *)((char *)v48 + v8 * 8);
      if ( v11 > v10 )
      {
        v11 = *((_QWORD *)v7 + 1);
        *(_QWORD *)((char *)v48 + v8 * 8) = v10;
      }
      if ( *((_QWORD *)v7 - 1) < 0x400uLL && !*v7 )
        goto LABEL_66;
      v12 = (_QWORD *)*((_QWORD *)v7 - 2);
      v13 = v47[v8];
      if ( v12 )
        break;
LABEL_63:
      if ( !*(_QWORD *)((char *)&v48[1] + v8 * 8) )
        goto LABEL_66;
      v47[v8] = 0LL;
      *(_QWORD *)((char *)&v48[1] + v8 * 8) = 0LL;
    }
    while ( 1 )
    {
      v14 = v12[3];
      if ( v13 >= v14 )
      {
        if ( v13 < v14 + 512 )
          goto LABEL_16;
        v15 = (_QWORD *)v12[1];
      }
      else
      {
        v15 = (_QWORD *)*v12;
      }
      if ( !v15 )
        break;
      v12 = v15;
    }
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_16:
        if ( !v12 )
          goto LABEL_63;
        v16 = v12[1];
        v17 = v12;
        if ( v16 )
        {
          v18 = *(_QWORD **)v16;
          if ( *(_QWORD *)v16 )
          {
            do
            {
              v16 = (unsigned __int64)v18;
              v18 = (_QWORD *)*v18;
            }
            while ( v18 );
          }
        }
        else
        {
          for ( i = v12[2]; ; i = *(_QWORD *)(v16 + 16) )
          {
            v16 = i & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !v16 || *(_QWORD **)v16 == v17 )
              break;
            v17 = (_QWORD *)v16;
          }
        }
        v20 = v42;
        if ( v42 )
        {
          --v42;
          if ( v20 == 1 )
          {
            MiConvertIoPfnTreeLockExclusiveToShared();
            v2 = 0;
          }
        }
        v21 = v2;
        v22 = v12[3];
        if ( !*((_DWORD *)v12 + 8) )
          break;
        v47[v8] = v22 + 512;
        *(_QWORD *)((char *)v48 + v8 * 8) = --v11;
        if ( !v11 )
          goto LABEL_65;
        if ( (++v52 & 0xF) == 0 && ((unsigned int)MiIoPfnTreeLockContended(v2) || v50 != 17 && KeShouldYieldProcessor()) )
        {
          if ( v2 )
          {
            v2 = 0;
            v42 = 0;
          }
          v31 = v21 != 0;
          v9 = v50;
          MiUnlockIoPfnTree(v50, v31 + 1);
LABEL_60:
          v32 = 1LL;
LABEL_61:
          MiLockIoPfnTree(v32, v30);
          goto LABEL_4;
        }
        v9 = v50;
        v12 = (_QWORD *)v16;
      }
      if ( !v2 )
      {
        v9 = v50;
        v47[v8] = v22;
        MiUnlockIoPfnTree(v50, 1);
        v2 = 1;
        v42 = 64;
        _InterlockedOr(v41, 0);
        v32 = 2LL;
        v44 = KiCacheFlushTimeStamp;
        LOBYTE(v43) = 0;
        v51 = 0;
        goto LABEL_61;
      }
      ++v52;
      v23 = (unsigned int)MiIsPageInHugePfn(v22);
      v24 = v23;
      if ( !v51 && !v23 )
      {
        MiFlushEntireTbDueToAttributeChange();
        v51 = 1;
      }
      if ( (_BYTE)v43 || v24 || !*((_BYTE *)v12 + 40) || !MiTbFlushTimeStampMayNeedFlush(*((_DWORD *)v12 + 9), v44, -1) )
      {
        LOBYTE(v24) = v52;
      }
      else
      {
        v25 = (unsigned int)MiFlushStaleCacheMap(v12) == 0;
        v26 = (unsigned __int8)v43;
        if ( !v25 )
          v26 = 1;
        v52 = 0;
        v43 = v26;
      }
      RtlAvlRemoveNode((unsigned __int64 *)v7 - 2, (__int64)v12);
      if ( (unsigned int)MiIsPageInIoHugeRangeTransition(v12[3]) )
        _InterlockedDecrement64(v7);
      v27 = _InterlockedExchangeAdd64(v7 - 1, 0xFFFFFFFFFFFFFFFFuLL);
      _InterlockedDecrement64(v7 + 1);
      v28 = P[0];
      v29 = v27 - 1;
      if ( *((PVOID **)P[0] + 1) != P )
LABEL_79:
        __fastfail(3u);
      *v12 = P[0];
      v12[1] = P;
      v28[1] = v12;
      P[0] = v12;
      v47[v8] = v12[3] + 512LL;
      if ( v29 <= 0x300 )
        break;
      *(_QWORD *)((char *)v48 + v8 * 8) = --v11;
      if ( !v11 )
        break;
      v25 = (v24 & 0xF) == 0;
      v12 = (_QWORD *)v16;
      v9 = v50;
      if ( v25 && ((unsigned int)MiIoPfnTreeLockContended(v2) || v50 != 17 && KeShouldYieldProcessor()) )
      {
        v2 = 0;
        v42 = 0;
        MiUnlockIoPfnTree(v50, 2);
        goto LABEL_60;
      }
    }
LABEL_65:
    v9 = v50;
LABEL_66:
    v7 += 8;
    ++v8;
    ++v45;
  }
  while ( v45 < 2 );
  MiUnlockIoPfnTree(v9, (v2 != 0) + 1);
  v33 = (struct _LIST_ENTRY **)&unk_140E372E0;
  v34 = (struct _LIST_ENTRY **)v47;
  do
  {
    v35 = *v34++;
    *v33 = v35;
    v33 += 8;
  }
  while ( (__int64)v33 < (__int64)&stru_140E37358.List.Blink );
  while ( 1 )
  {
    v36 = (unsigned __int64 *)P[0];
    if ( P[0] == P )
      break;
    v37 = *(_QWORD **)P[0];
    if ( *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0] )
      goto LABEL_79;
    v38 = (PVOID *)*((_QWORD *)P[0] + 1);
    if ( *v38 != P[0] )
      goto LABEL_79;
    *v38 = v37;
    v37[1] = v38;
    MiDereferenceIoHugeRange(v36[3]);
    ExFreePoolWithTag(v36, 0);
  }
  ExAcquireSpinLockExclusive(&dword_140E37350);
  for ( j = &unk_140E372D0; (__int64)j < (__int64)&dword_140E37350; j += 8 )
  {
    if ( *(j - 1) >= 0x400uLL || *j )
    {
      MiReleaseSpinLockExclusive(&dword_140E37350, v9);
      goto LABEL_1;
    }
  }
  *(_QWORD *)(a1 + 24) = 0LL;
  return MiReleaseSpinLockExclusive(&dword_140E37350, v9);
}
