/*
 * XREFs of MiDeleteStaleCacheMaps @ 0x140669E20
 * Callers:
 *     <none>
 * Callees:
 *     MiFlushEntireTbDueToAttributeChange @ 0x14026F550 (MiFlushEntireTbDueToAttributeChange.c)
 *     RtlAvlRemoveNode @ 0x1402A8F20 (RtlAvlRemoveNode.c)
 *     KeShouldYieldProcessor @ 0x1402B0440 (KeShouldYieldProcessor.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiIsPageInHugePfn @ 0x140392030 (MiIsPageInHugePfn.c)
 *     MiIsPageInIoHugeRangeTransition @ 0x140392060 (MiIsPageInIoHugeRangeTransition.c)
 *     MiUnlockIoPfnTree @ 0x1403922D8 (MiUnlockIoPfnTree.c)
 *     MiLockIoPfnTree @ 0x140392384 (MiLockIoPfnTree.c)
 *     MiTbFlushTimeStampMayNeedFlush @ 0x14044FFB8 (MiTbFlushTimeStampMayNeedFlush.c)
 *     MiIoPfnTreeLockContended @ 0x140492B20 (MiIoPfnTreeLockContended.c)
 *     MiConvertIoPfnTreeLockExclusiveToShared @ 0x1404C4700 (MiConvertIoPfnTreeLockExclusiveToShared.c)
 *     MiDereferenceIoHugeRange @ 0x140664048 (MiDereferenceIoHugeRange.c)
 *     MiFlushStaleCacheMap @ 0x14066A350 (MiFlushStaleCacheMap.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  bool v30; // cf
  __int64 v31; // rcx
  struct _LIST_ENTRY **v32; // rcx
  struct _LIST_ENTRY **v33; // rdx
  struct _LIST_ENTRY *v34; // rax
  unsigned __int64 *v35; // rbx
  _QWORD *v36; // rcx
  PVOID *v37; // rax
  _QWORD *j; // rcx
  signed __int32 v40[8]; // [rsp+0h] [rbp-78h] BYREF
  int v41; // [rsp+20h] [rbp-58h]
  int v42; // [rsp+24h] [rbp-54h]
  int v43; // [rsp+28h] [rbp-50h]
  int v44; // [rsp+2Ch] [rbp-4Ch]
  PVOID P[2]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v46[2]; // [rsp+40h] [rbp-38h] BYREF
  _OWORD v47[2]; // [rsp+50h] [rbp-28h]
  unsigned __int8 v49; // [rsp+C8h] [rbp+50h]
  char v50; // [rsp+D0h] [rbp+58h]
  int v51; // [rsp+D8h] [rbp+60h]

LABEL_1:
  P[1] = P;
  v1 = (__int64 *)&unk_140E36F60;
  v41 = 0;
  P[0] = P;
  v2 = 0;
  v43 = 0;
  v3 = 0LL;
  v50 = 0;
  v4 = 2LL;
  LOBYTE(v42) = 0;
  v51 = 0;
  v47[0] = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  do
  {
    v5 = *v1;
    v1 += 8;
    *(_QWORD *)((char *)&v47[1] + v3 * 8) = v5;
    v46[v3++] = v5;
    --v4;
  }
  while ( v4 );
  v6 = MiLockIoPfnTree(1LL);
  v44 = 0;
  v7 = (volatile signed __int64 *)&unk_140E36F50;
  v8 = 0LL;
  v49 = v6;
  v9 = v6;
  do
  {
    while ( 1 )
    {
LABEL_4:
      v10 = *((_QWORD *)v7 + 1);
      if ( !v10 )
        goto LABEL_66;
      v11 = *(_QWORD *)((char *)v47 + v8 * 8);
      if ( v11 > v10 )
      {
        v11 = *((_QWORD *)v7 + 1);
        *(_QWORD *)((char *)v47 + v8 * 8) = v10;
      }
      if ( *((_QWORD *)v7 - 1) < 0x400uLL && !*v7 )
        goto LABEL_66;
      v12 = (_QWORD *)*((_QWORD *)v7 - 2);
      v13 = v46[v8];
      if ( v12 )
        break;
LABEL_63:
      if ( !*(_QWORD *)((char *)&v47[1] + v8 * 8) )
        goto LABEL_66;
      v46[v8] = 0LL;
      *(_QWORD *)((char *)&v47[1] + v8 * 8) = 0LL;
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
        v20 = v41;
        if ( v41 )
        {
          --v41;
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
        v46[v8] = v22 + 512;
        *(_QWORD *)((char *)v47 + v8 * 8) = --v11;
        if ( !v11 )
          goto LABEL_65;
        if ( (++v51 & 0xF) == 0 && ((unsigned int)MiIoPfnTreeLockContended(v2) || v49 != 17 && KeShouldYieldProcessor()) )
        {
          if ( v2 )
          {
            v2 = 0;
            v41 = 0;
          }
          v30 = v21 != 0;
          v9 = v49;
          MiUnlockIoPfnTree(v49, v30 + 1);
LABEL_60:
          v31 = 1LL;
LABEL_61:
          MiLockIoPfnTree(v31);
          goto LABEL_4;
        }
        v9 = v49;
        v12 = (_QWORD *)v16;
      }
      if ( !v2 )
      {
        v9 = v49;
        v46[v8] = v22;
        MiUnlockIoPfnTree(v49, 1);
        v2 = 1;
        v41 = 64;
        _InterlockedOr(v40, 0);
        v31 = 2LL;
        v43 = KiCacheFlushTimeStamp;
        LOBYTE(v42) = 0;
        v50 = 0;
        goto LABEL_61;
      }
      ++v51;
      v23 = (unsigned int)MiIsPageInHugePfn(v22);
      v24 = v23;
      if ( !v50 && !v23 )
      {
        MiFlushEntireTbDueToAttributeChange();
        v50 = 1;
      }
      if ( (_BYTE)v42 || v24 || !*((_BYTE *)v12 + 40) || !MiTbFlushTimeStampMayNeedFlush(*((_DWORD *)v12 + 9), v43, -1) )
      {
        LOBYTE(v24) = v51;
      }
      else
      {
        v25 = (unsigned int)MiFlushStaleCacheMap(v12) == 0;
        v26 = (unsigned __int8)v42;
        if ( !v25 )
          v26 = 1;
        v51 = 0;
        v42 = v26;
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
      v46[v8] = v12[3] + 512LL;
      if ( v29 <= 0x300 )
        break;
      *(_QWORD *)((char *)v47 + v8 * 8) = --v11;
      if ( !v11 )
        break;
      v25 = (v24 & 0xF) == 0;
      v12 = (_QWORD *)v16;
      v9 = v49;
      if ( v25 && ((unsigned int)MiIoPfnTreeLockContended(v2) || v49 != 17 && KeShouldYieldProcessor()) )
      {
        v2 = 0;
        v41 = 0;
        MiUnlockIoPfnTree(v49, 2);
        goto LABEL_60;
      }
    }
LABEL_65:
    v9 = v49;
LABEL_66:
    v7 += 8;
    ++v8;
    ++v44;
  }
  while ( v44 < 2 );
  MiUnlockIoPfnTree(v9, (v2 != 0) + 1);
  v32 = (struct _LIST_ENTRY **)&unk_140E36F60;
  v33 = (struct _LIST_ENTRY **)v46;
  do
  {
    v34 = *v33++;
    *v32 = v34;
    v32 += 8;
  }
  while ( (__int64)v32 < (__int64)&stru_140E36FD8.List.Blink );
  while ( 1 )
  {
    v35 = (unsigned __int64 *)P[0];
    if ( P[0] == P )
      break;
    v36 = *(_QWORD **)P[0];
    if ( *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0] )
      goto LABEL_79;
    v37 = (PVOID *)*((_QWORD *)P[0] + 1);
    if ( *v37 != P[0] )
      goto LABEL_79;
    *v37 = v36;
    v36[1] = v37;
    MiDereferenceIoHugeRange(v35[3]);
    ExFreePoolWithTag(v35, 0);
  }
  ExAcquireSpinLockExclusive(&dword_140E36FD0);
  for ( j = &unk_140E36F50; (__int64)j < (__int64)&dword_140E36FD0; j += 8 )
  {
    if ( *(j - 1) >= 0x400uLL || *j )
    {
      MiReleaseSpinLockExclusive(&dword_140E36FD0, v9);
      goto LABEL_1;
    }
  }
  *(_QWORD *)(a1 + 24) = 0LL;
  return MiReleaseSpinLockExclusive(&dword_140E36FD0, v9);
}
