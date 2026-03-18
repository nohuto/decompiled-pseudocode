/*
 * XREFs of MmPurgeSection @ 0x1402C5AB8
 * Callers:
 *     CcPurgeCacheSection @ 0x1402C4260 (CcPurgeCacheSection.c)
 * Callees:
 *     MiComputeDataFlushRange @ 0x140218970 (MiComputeDataFlushRange.c)
 *     MiCheckControlArea @ 0x14022F1E0 (MiCheckControlArea.c)
 *     MiIncrementSubsectionViewCount @ 0x1402A7470 (MiIncrementSubsectionViewCount.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiDecrementSubsections @ 0x140322C00 (MiDecrementSubsections.c)
 *     MiInsertUnusedSubsection @ 0x140322E10 (MiInsertUnusedSubsection.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiDecrementSubsectionViewCount @ 0x14033F740 (MiDecrementSubsectionViewCount.c)
 *     MiPurgeSubsection @ 0x1403400A0 (MiPurgeSubsection.c)
 *     MiCanFileBeTruncatedInternal @ 0x14034EBE4 (MiCanFileBeTruncatedInternal.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B9590 (MiReturnCrossPartitionSectionCharges.c)
 */

char __fastcall MmPurgeSection(int a1, unsigned __int64 *a2, __int64 a3, char a4, _BYTE *a5)
{
  unsigned __int64 *v7; // rbx
  char v8; // r15
  __int64 v9; // r12
  __int64 CanFileBeTruncatedInternal; // rax
  __int64 v11; // rdx
  __int64 v12; // rdi
  int v13; // eax
  __int64 v14; // rcx
  ULONG_PTR v16; // rax
  KIRQL v17; // si
  ULONG_PTR v18; // rbx
  ULONG_PTR v19; // r14
  __int64 v20; // rdx
  __int64 v21; // r12
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r12
  __int64 v25; // rbx
  ULONG_PTR v26; // [rsp+30h] [rbp-41h]
  _OWORD v27[2]; // [rsp+38h] [rbp-39h] BYREF
  __int64 v28; // [rsp+58h] [rbp-19h]
  __int128 v29; // [rsp+60h] [rbp-11h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+70h] [rbp-1h]
  ULONG_PTR v31[8]; // [rsp+80h] [rbp+Fh]
  unsigned __int64 v32; // [rsp+D8h] [rbp+67h] BYREF
  KIRQL v33; // [rsp+E8h] [rbp+77h] BYREF

  v28 = 0LL;
  v33 = 0;
  v32 = 0LL;
  v7 = a2;
  *a5 = 0;
  v29 = 0LL;
  *(_OWORD *)BugCheckParameter2 = 0LL;
  *(_OWORD *)v31 = 0LL;
  memset(v27, 0, sizeof(v27));
  if ( a2 )
  {
    v7 = &v32;
    v32 = *a2;
  }
  v8 = 1;
  v9 = 0LL;
  CanFileBeTruncatedInternal = MiCanFileBeTruncatedInternal(a1, (_DWORD)v7, 1, (a4 & 2) != 0, (__int64)&v33);
  LOBYTE(v11) = v33;
  v12 = CanFileBeTruncatedInternal;
  if ( v33 == 17 )
    return 0;
  if ( !CanFileBeTruncatedInternal )
    return v8;
  if ( (a4 & 1) == 0 && *(_DWORD *)(CanFileBeTruncatedInternal + 88) )
  {
    v14 = CanFileBeTruncatedInternal + 72;
    goto LABEL_9;
  }
  v13 = *(_DWORD *)(CanFileBeTruncatedInternal + 56);
  LOBYTE(v11) = v33;
  if ( !*(_QWORD *)(v12 + 64) )
  {
    v14 = v12 + 72;
LABEL_9:
    MiReleaseSpinLockExclusive(v14, v11);
    return 0;
  }
  *(_DWORD *)(v12 + 56) = v13 | 0x8000;
  if ( !(unsigned int)MiComputeDataFlushRange(v12, v11, v7, a3, 1, (__int64)&v29) )
    return v8;
  v16 = *((_QWORD *)&v29 + 1);
  v17 = 17;
  v18 = BugCheckParameter2[1];
  v19 = v31[0];
  v33 = 17;
  while ( 1 )
  {
    v26 = v16;
    if ( v17 == 17 )
    {
      v17 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v12 + 72));
      v33 = v17;
    }
    if ( *(_QWORD *)(v18 + 8) )
      break;
    if ( v18 == v19 )
      goto LABEL_24;
LABEL_23:
    if ( v18 == v19 || !v8 )
      goto LABEL_24;
    v18 = *(_QWORD *)(v18 + 16);
    v16 = *(_QWORD *)(v18 + 8);
  }
  if ( !*(_DWORD *)(v18 + 108) )
  {
    MiIncrementSubsectionViewCount((__int64 *)v18, 0);
    LOBYTE(v20) = v33;
    *(_DWORD *)(v18 + 32) |= 1u;
    MiReleaseSpinLockExclusive(v12 + 72, v20);
    MiPurgeSubsection(v18, v26, (__int64)v27);
    if ( BYTE9(v27[0]) )
      *a5 = 1;
    if ( BYTE8(v27[0]) )
      v8 = 0;
    v33 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v12 + 72));
    v17 = v33;
    MiDecrementSubsectionViewCount(v18);
    if ( !*(_QWORD *)(v18 + 80) )
    {
      if ( (*(_DWORD *)(v18 + 32) & 0x10000) == 0 )
        v9 += MiInsertUnusedSubsection(v18);
      v17 = v33;
    }
    v19 = v31[0];
    goto LABEL_23;
  }
  v8 = 0;
LABEL_24:
  v21 = MiDecrementSubsections(BugCheckParameter2[1]) + v9;
  v22 = MiDecrementSubsections(v19);
  --*(_QWORD *)(v12 + 40);
  *(_DWORD *)(v12 + 56) &= ~4u;
  v24 = v22 + v21;
  if ( v24 )
    v25 = *((_QWORD *)qword_140E2FD48 + (*(_WORD *)(v12 + 60) & 0x3FF));
  else
    v25 = 0LL;
  LOBYTE(v23) = v17;
  MiCheckControlArea(v12, v23);
  if ( v24 )
    MiReturnCrossPartitionSectionCharges(v25, 1LL, v24);
  return v8;
}
