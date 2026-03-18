/*
 * XREFs of MmPurgeSection @ 0x1403704CC
 * Callers:
 *     CcPurgeCacheSection @ 0x14023EF70 (CcPurgeCacheSection.c)
 * Callees:
 *     MiCheckControlArea @ 0x14020EFD0 (MiCheckControlArea.c)
 *     MiComputeDataFlushRange @ 0x14022F300 (MiComputeDataFlushRange.c)
 *     MiPurgeSubsection @ 0x14023C9F0 (MiPurgeSubsection.c)
 *     MiIncrementSubsectionViewCount @ 0x1402624F0 (MiIncrementSubsectionViewCount.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiCanFileBeTruncatedInternal @ 0x140314C44 (MiCanFileBeTruncatedInternal.c)
 *     MiDecrementSubsections @ 0x1403719B0 (MiDecrementSubsections.c)
 *     MiInsertUnusedSubsection @ 0x140371BB0 (MiInsertUnusedSubsection.c)
 *     MiDecrementSubsectionViewCount @ 0x140371EA0 (MiDecrementSubsectionViewCount.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B8B54 (MiReturnCrossPartitionSectionCharges.c)
 */

char __fastcall MmPurgeSection(__int64 *a1, unsigned __int64 *a2, __int64 a3, char a4, _BYTE *a5)
{
  unsigned __int64 *v7; // rbx
  char v8; // r15
  __int64 v9; // r12
  __int64 CanFileBeTruncatedInternal; // rax
  unsigned __int8 v11; // dl
  __int64 v12; // rdi
  int v13; // eax
  _DWORD *v14; // rcx
  unsigned __int64 v16; // rax
  KIRQL v17; // si
  ULONG_PTR v18; // rbx
  ULONG_PTR v19; // r14
  __int64 v20; // rax
  unsigned __int64 v21; // r13
  unsigned __int8 v22; // dl
  __int64 v23; // r12
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r12
  __int64 v27; // rbx
  unsigned __int64 v28; // [rsp+30h] [rbp-41h]
  _OWORD v29[2]; // [rsp+38h] [rbp-39h] BYREF
  __int64 v30; // [rsp+58h] [rbp-19h]
  __int128 v31; // [rsp+60h] [rbp-11h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+70h] [rbp-1h]
  ULONG_PTR v33[8]; // [rsp+80h] [rbp+Fh]
  unsigned int v34; // [rsp+D0h] [rbp+5Fh]
  unsigned __int64 v35; // [rsp+D8h] [rbp+67h] BYREF
  KIRQL v36; // [rsp+E8h] [rbp+77h] BYREF

  v30 = 0LL;
  v36 = 0;
  v35 = 0LL;
  v7 = a2;
  *a5 = 0;
  v31 = 0LL;
  *(_OWORD *)BugCheckParameter2 = 0LL;
  *(_OWORD *)v33 = 0LL;
  memset(v29, 0, sizeof(v29));
  if ( a2 )
  {
    v7 = &v35;
    v35 = *a2;
  }
  v8 = 1;
  v34 = (a4 & 2) == 0;
  v9 = 0LL;
  CanFileBeTruncatedInternal = MiCanFileBeTruncatedInternal(a1, v7, 1, (a4 & 2) != 0, &v36);
  v11 = v36;
  v12 = CanFileBeTruncatedInternal;
  if ( v36 == 17 )
    return 0;
  if ( !CanFileBeTruncatedInternal )
    return v8;
  if ( (a4 & 1) == 0 && *(_DWORD *)(CanFileBeTruncatedInternal + 88) )
  {
    v14 = (_DWORD *)(CanFileBeTruncatedInternal + 72);
    goto LABEL_9;
  }
  v13 = *(_DWORD *)(CanFileBeTruncatedInternal + 56);
  v11 = v36;
  if ( !*(_QWORD *)(v12 + 64) )
  {
    v14 = (_DWORD *)(v12 + 72);
LABEL_9:
    MiReleaseSpinLockExclusive(v14, v11);
    return 0;
  }
  *(_DWORD *)(v12 + 56) = v13 | 0x8000;
  if ( !(unsigned int)MiComputeDataFlushRange(v12, v11, v7, a3, 1, (__int64)&v31) )
    return v8;
  v16 = *((_QWORD *)&v31 + 1);
  v17 = 17;
  v18 = BugCheckParameter2[1];
  v19 = v33[0];
  v36 = 17;
  while ( 1 )
  {
    v28 = v16;
    if ( v17 == 17 )
    {
      v17 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v12 + 72));
      v36 = v17;
    }
    v20 = *(_QWORD *)(v18 + 8);
    v21 = v19 == v18
        ? BugCheckParameter2[0] + 8
        : v20 + 8LL * (*(_DWORD *)(v18 + 44) - (*(_DWORD *)(v18 + 52) & 0x3FFFFFFFu));
    if ( v20 )
      break;
    if ( v18 == v19 )
      goto LABEL_26;
LABEL_25:
    if ( v18 == v19 || !v8 )
      goto LABEL_26;
    v18 = *(_QWORD *)(v18 + 16);
    v16 = *(_QWORD *)(v18 + 8);
  }
  if ( !*(_DWORD *)(v18 + 108) )
  {
    MiIncrementSubsectionViewCount((__int64 *)v18, 0);
    v22 = v36;
    *(_DWORD *)(v18 + 32) |= 1u;
    MiReleaseSpinLockExclusive((_DWORD *)(v12 + 72), v22);
    MiPurgeSubsection((__int64 *)v18, v28, v21, v34, (__int64)v29);
    if ( BYTE9(v29[0]) )
      *a5 = 1;
    if ( BYTE8(v29[0]) )
      v8 = 0;
    v36 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v12 + 72));
    v17 = v36;
    MiDecrementSubsectionViewCount(v18);
    if ( !*(_QWORD *)(v18 + 80) )
    {
      if ( (*(_DWORD *)(v18 + 32) & 0x10000) == 0 )
        v9 += MiInsertUnusedSubsection(v18);
      v17 = v36;
    }
    v19 = v33[0];
    goto LABEL_25;
  }
  v8 = 0;
LABEL_26:
  v23 = MiDecrementSubsections(BugCheckParameter2[1]) + v9;
  v24 = MiDecrementSubsections(v19);
  --*(_QWORD *)(v12 + 40);
  *(_DWORD *)(v12 + 56) &= ~4u;
  v26 = v24 + v23;
  if ( v26 )
    v27 = *((_QWORD *)qword_140E2FF88 + (*(_WORD *)(v12 + 60) & 0x3FF));
  else
    v27 = 0LL;
  LOBYTE(v25) = v17;
  MiCheckControlArea(v12, v25);
  if ( v26 )
    MiReturnCrossPartitionSectionCharges(v27, 1LL, v26);
  return v8;
}
