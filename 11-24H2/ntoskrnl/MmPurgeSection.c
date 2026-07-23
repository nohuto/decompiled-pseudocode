/*
 * XREFs of MmPurgeSection @ 0x1403F06F0
 * Callers:
 *     CcPurgeCacheSection @ 0x1402070C0 (CcPurgeCacheSection.c)
 * Callees:
 *     MiPurgeSubsection @ 0x140204780 (MiPurgeSubsection.c)
 *     MiDecrementSubsections @ 0x140259D70 (MiDecrementSubsections.c)
 *     MiInsertUnusedSubsection @ 0x140259F70 (MiInsertUnusedSubsection.c)
 *     MiDecrementSubsectionViewCount @ 0x14025A760 (MiDecrementSubsectionViewCount.c)
 *     MiIncrementSubsectionViewCount @ 0x1402743B0 (MiIncrementSubsectionViewCount.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiComputeDataFlushRange @ 0x140302C10 (MiComputeDataFlushRange.c)
 *     MiCheckControlArea @ 0x140338330 (MiCheckControlArea.c)
 *     MiCanFileBeTruncatedInternal @ 0x1403F2224 (MiCanFileBeTruncatedInternal.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B34A4 (MiReturnCrossPartitionSectionCharges.c)
 */

char __fastcall MmPurgeSection(int a1, unsigned __int64 *a2, __int64 a3, char a4, _BYTE *a5)
{
  unsigned __int64 *v7; // rbx
  char v8; // r15
  __int64 v9; // r12
  __int64 CanFileBeTruncatedInternal; // rax
  unsigned __int8 v11; // dl
  __int64 v12; // rdi
  int v13; // eax
  _DWORD *v14; // rcx
  __int64 v16; // rax
  KIRQL v17; // si
  __int64 v18; // rbx
  ULONG_PTR v19; // r14
  __int64 v20; // rax
  unsigned __int64 v21; // r13
  unsigned __int8 v22; // dl
  __int64 v23; // r12
  __int64 v24; // rax
  __int64 v25; // r12
  __int64 v26; // rbx
  __int64 v27; // [rsp+30h] [rbp-41h]
  _OWORD v28[2]; // [rsp+38h] [rbp-39h] BYREF
  __int64 v29; // [rsp+58h] [rbp-19h]
  __int128 v30; // [rsp+60h] [rbp-11h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+70h] [rbp-1h]
  ULONG_PTR v32[8]; // [rsp+80h] [rbp+Fh]
  unsigned int v33; // [rsp+D0h] [rbp+5Fh]
  unsigned __int64 v34; // [rsp+D8h] [rbp+67h] BYREF
  KIRQL v35; // [rsp+E8h] [rbp+77h] BYREF

  v29 = 0LL;
  v35 = 0;
  v34 = 0LL;
  v7 = a2;
  *a5 = 0;
  v30 = 0LL;
  *(_OWORD *)BugCheckParameter2 = 0LL;
  *(_OWORD *)v32 = 0LL;
  memset(v28, 0, sizeof(v28));
  if ( a2 )
  {
    v7 = &v34;
    v34 = *a2;
  }
  v8 = 1;
  v33 = (a4 & 2) == 0;
  v9 = 0LL;
  CanFileBeTruncatedInternal = MiCanFileBeTruncatedInternal(a1, (_DWORD)v7, 1, (a4 & 2) != 0, (__int64)&v35);
  v11 = v35;
  v12 = CanFileBeTruncatedInternal;
  if ( v35 == 17 )
    return 0;
  if ( !CanFileBeTruncatedInternal )
    return v8;
  if ( (a4 & 1) == 0 && *(_DWORD *)(CanFileBeTruncatedInternal + 88) )
  {
    v14 = (_DWORD *)(CanFileBeTruncatedInternal + 72);
    goto LABEL_9;
  }
  v13 = *(_DWORD *)(CanFileBeTruncatedInternal + 56);
  v11 = v35;
  if ( !*(_QWORD *)(v12 + 64) )
  {
    v14 = (_DWORD *)(v12 + 72);
LABEL_9:
    MiReleaseSpinLockExclusive(v14, v11);
    return 0;
  }
  *(_DWORD *)(v12 + 56) = v13 | 0x8000;
  if ( !(unsigned int)MiComputeDataFlushRange(v12, v11, v7, a3, 1, (__int64)&v30) )
    return v8;
  v16 = *((_QWORD *)&v30 + 1);
  v17 = 17;
  v18 = BugCheckParameter2[1];
  v19 = v32[0];
  v35 = 17;
  while ( 1 )
  {
    v27 = v16;
    if ( v17 == 17 )
    {
      v17 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v12 + 72));
      v35 = v17;
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
    MiIncrementSubsectionViewCount((__int64 *)v18, 0LL);
    v22 = v35;
    *(_DWORD *)(v18 + 32) |= 1u;
    MiReleaseSpinLockExclusive((_DWORD *)(v12 + 72), v22);
    MiPurgeSubsection((__int64 *)v18, v27, v21, v33, (__int64)v28);
    if ( BYTE9(v28[0]) )
      *a5 = 1;
    if ( BYTE8(v28[0]) )
      v8 = 0;
    v35 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v12 + 72));
    v17 = v35;
    MiDecrementSubsectionViewCount((__int64 *)v18, 0);
    if ( !*(_QWORD *)(v18 + 80) )
    {
      if ( (*(_DWORD *)(v18 + 32) & 0x10000) == 0 )
        v9 += MiInsertUnusedSubsection(v18);
      v17 = v35;
    }
    v19 = v32[0];
    goto LABEL_25;
  }
  v8 = 0;
LABEL_26:
  v23 = MiDecrementSubsections(BugCheckParameter2[1], BugCheckParameter2[1], 0) + v9;
  v24 = MiDecrementSubsections(v19, v19, 0);
  --*(_QWORD *)(v12 + 40);
  *(_DWORD *)(v12 + 56) &= ~4u;
  v25 = v24 + v23;
  if ( v25 )
    v26 = *((_QWORD *)qword_140E300C8 + (*(_WORD *)(v12 + 60) & 0x3FF));
  else
    v26 = 0LL;
  MiCheckControlArea(v12, v17);
  if ( v25 )
    MiReturnCrossPartitionSectionCharges(v26, 1LL, v25);
  return v8;
}
