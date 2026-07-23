/*
 * XREFs of RtlpHpVaMgrCtxFree @ 0x18009D290
 * Callers:
 *     RtlpHpHeapDestroy @ 0x1800270BC (RtlpHpHeapDestroy.c)
 *     RtlpHpSegMgrRelease @ 0x18006B47C (RtlpHpSegMgrRelease.c)
 *     RtlpHpLargeAlloc @ 0x18009A714 (RtlpHpLargeAlloc.c)
 *     RtlpHpSegMgrReserve @ 0x18009C2B0 (RtlpHpSegMgrReserve.c)
 *     RtlpHpSegMgrCommit @ 0x18009C5B0 (RtlpHpSegMgrCommit.c)
 *     RtlpHpFreeVA @ 0x18009D150 (RtlpHpFreeVA.c)
 *     RtlpHpLargeReAlloc @ 0x18009E474 (RtlpHpLargeReAlloc.c)
 *     RtlpHpLargeFree @ 0x18009E878 (RtlpHpLargeFree.c)
 *     RtlpHpLargeAllocationDestroy @ 0x1800F5BB4 (RtlpHpLargeAllocationDestroy.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpEnvFreeVA @ 0x18009D6B0 (RtlpHpEnvFreeVA.c)
 *     RtlpHpVaMgrRangeFree @ 0x18009D854 (RtlpHpVaMgrRangeFree.c)
 *     RtlpHpVaMgrRangeSplit @ 0x18009DC6C (RtlpHpVaMgrRangeSplit.c)
 *     RtlpHpVaMgrFree @ 0x18009DCE0 (RtlpHpVaMgrFree.c)
 *     RtlSparseArrayElementAllocated @ 0x18009DE90 (RtlSparseArrayElementAllocated.c)
 *     RtlSparseArrayElementFindCapped @ 0x18011BF10 (RtlSparseArrayElementFindCapped.c)
 */

void __fastcall RtlpHpVaMgrCtxFree(__int64 a1, PVOID *a2, ULONG_PTR *a3)
{
  ULONG_PTR v6; // rdi
  _BYTE *v7; // rax
  _BYTE *v8; // rbx
  __int64 v9; // rsi
  char *v10; // rbp
  ULONG_PTR v11; // r14
  __int64 v12; // rax
  _WORD *v13; // r9
  unsigned __int64 v14; // r8
  char *v15; // rdx
  char *v16; // rdx
  _BYTE *v17; // rbp
  ULONG_PTR *v18; // rax
  ULONG_PTR v19; // rdx
  ULONG_PTR v20; // rcx
  _BYTE *v21; // rdi
  __int64 Capped; // rbx

  v6 = *a3 >> 20;
  v7 = (_BYTE *)RtlSparseArrayElementAllocated(a1 + 16, ((unsigned __int64)*a2 - *(_QWORD *)(a1 + 8)) >> 20);
  v8 = v7;
  if ( !v7 )
  {
    Capped = RtlSparseArrayElementFindCapped(
               a1 + 16,
               ((__int64)*a2 - *(_QWORD *)(a1 + 8)) / 0x100000,
               ~(((__int64)*a2 - *(_QWORD *)(a1 + 8)) / 0x100000));
    RtlpHpEnvFreeVA(a2, a3, *(_QWORD *)(a1 + 48 * (*(unsigned __int8 *)(Capped + 1) + 45LL) + 32));
    *(_QWORD *)(Capped + 24) -= *a3 >> 20;
    return;
  }
  v9 = a1 + 48 * ((unsigned __int8)v7[1] + 45LL);
  if ( (*v7 & 4) != 0 )
  {
    *v7 &= ~1u;
LABEL_28:
    RtlpHpVaMgrRangeFree(v9, v8);
    return;
  }
  if ( (unsigned int)`RtlpHpMemoryTypePageSize'::`2'::PageSize[((unsigned __int64)*(unsigned __int8 *)(v9 + 46) >> 1) & 7] <= 0x100000 )
  {
    v10 = (char *)*a2;
    v11 = *a3;
    v12 = RtlSparseArrayElementAllocated(
            *(_QWORD *)(v9 + 24) + 16LL,
            ((unsigned __int64)*a2 - *(_QWORD *)(*(_QWORD *)(v9 + 24) + 8LL)) >> 20);
    if ( v11 )
    {
      v13 = (_WORD *)(v12 + 2);
      do
      {
        v14 = *(_QWORD *)(*(_QWORD *)(v9 + 24) + 8LL)
            + (((unsigned __int64)v13 - *(_QWORD *)(*(_QWORD *)(v9 + 24) + 40LL) - 2) >> *(_DWORD *)(*(_QWORD *)(v9 + 24) + 24LL) << 20);
        v15 = (char *)(v14 + 0x100000);
        if ( (unsigned __int64)&v10[v11] <= v14 || v15 <= v10 )
        {
          BYTE2(v14) = 0;
          v16 = 0LL;
        }
        else
        {
          if ( (unsigned __int64)v10 > v14 )
            v14 = (unsigned __int64)v10;
          if ( &v10[v11] < v15 )
            v15 = &v10[v11];
          v16 = &v15[-v14];
        }
        v10 = &v10[(_QWORD)v16];
        *v13 &= ~(((1 << SBYTE2(v16)) - 1) << (BYTE2(v14) & 0xF));
        v13 += 16;
        v11 -= (unsigned __int64)v16;
      }
      while ( v11 );
    }
    RtlpHpEnvFreeVA(a2, a3, *(_QWORD *)(v9 + 32));
  }
  v17 = v8;
  if ( (*v8 & 2) != 0 )
  {
    v21 = v8;
    do
      v8 -= 32;
    while ( (*v8 & 2) != 0 );
  }
  else
  {
    v18 = (ULONG_PTR *)(v8 + 24);
    if ( ((*(_BYTE *)(v9 + 46) >> 5) & (unsigned __int8)~(*v8 >> 2) & 1) == 0 )
    {
      v19 = (*v8 & 4) != 0 ? *v18 : *(unsigned __int16 *)v18;
      if ( v6 != v19 )
        NT_ASSERT("(Range->Standalone == 0 && Allocator->AllowFreeHead == 1) || ChunksToFree == RtlpHpVaMgrRangeSize(Range)");
    }
    if ( (*v8 & 4) != 0 )
      v20 = *v18;
    else
      v20 = *(unsigned __int16 *)v18;
    if ( v6 < v20 )
      v21 = &v8[32 * v6];
    else
      v21 = 0LL;
  }
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)v9);
  if ( v21 )
    RtlpHpVaMgrRangeSplit(v9, v8, (v21 - v8) >> 5);
  v8 = (_BYTE *)RtlpHpVaMgrFree(v9, v17);
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)v9);
  if ( v8 )
    goto LABEL_28;
}
