/*
 * XREFs of RtlpHpVaMgrCtxFree @ 0x180092700
 * Callers:
 *     RtlpHpSegMgrRelease @ 0x18005589C (RtlpHpSegMgrRelease.c)
 *     RtlpHpHeapDestroy @ 0x180090050 (RtlpHpHeapDestroy.c)
 *     RtlpHpSegMgrReserve @ 0x180091724 (RtlpHpSegMgrReserve.c)
 *     RtlpHpSegMgrCommit @ 0x180091A20 (RtlpHpSegMgrCommit.c)
 *     RtlpHpFreeVA @ 0x1800925C0 (RtlpHpFreeVA.c)
 *     RtlpHpLargeFree @ 0x1800938E4 (RtlpHpLargeFree.c)
 *     RtlpHpLargeReAlloc @ 0x180093AA4 (RtlpHpLargeReAlloc.c)
 *     RtlpHpLargeAlloc @ 0x180093F08 (RtlpHpLargeAlloc.c)
 *     RtlpHpLargeAllocationDestroy @ 0x1800FAE54 (RtlpHpLargeAllocationDestroy.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpEnvFreeVA @ 0x180092B20 (RtlpHpEnvFreeVA.c)
 *     RtlpHpVaMgrRangeFree @ 0x180092CC4 (RtlpHpVaMgrRangeFree.c)
 *     RtlpHpVaMgrRangeSplit @ 0x1800930DC (RtlpHpVaMgrRangeSplit.c)
 *     RtlpHpVaMgrFree @ 0x180093150 (RtlpHpVaMgrFree.c)
 *     RtlSparseArrayElementAllocated @ 0x180093300 (RtlSparseArrayElementAllocated.c)
 *     RtlSparseArrayElementFindCapped @ 0x18011DCE0 (RtlSparseArrayElementFindCapped.c)
 */

__int64 __fastcall RtlpHpVaMgrCtxFree(__int64 a1, unsigned __int64 *a2, __int64 *a3)
{
  unsigned __int64 v6; // rdi
  _BYTE *v7; // rax
  volatile signed __int32 **v8; // rdx
  _BYTE *v9; // rbx
  __int64 v10; // rsi
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rbp
  __int64 v13; // r14
  __int64 v14; // rax
  _WORD *v15; // r9
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rdx
  _BYTE *v19; // rbp
  unsigned __int64 *v20; // rax
  unsigned __int64 v21; // rcx
  _BYTE *v22; // rdi
  __int64 result; // rax
  __int64 Capped; // rbx
  __int64 v25; // rax

  v6 = (unsigned __int64)*a3 >> 20;
  v7 = (_BYTE *)RtlSparseArrayElementAllocated(a1 + 16, (*a2 - *(_QWORD *)(a1 + 8)) >> 20);
  v9 = v7;
  if ( !v7 )
  {
    Capped = RtlSparseArrayElementFindCapped(
               a1 + 16,
               (__int64)(*a2 - *(_QWORD *)(a1 + 8)) / 0x100000,
               ~((__int64)(*a2 - *(_QWORD *)(a1 + 8)) / 0x100000));
    v25 = 6 * (*(unsigned __int8 *)(Capped + 1) + 45LL);
    RtlpHpEnvFreeVA(
      (_DWORD)a2,
      (_DWORD)a3,
      0x8000,
      (*(unsigned __int8 *)(a1 + 8 * v25 + 46) >> 1) & 7,
      *(_QWORD *)(a1 + 8 * v25 + 32));
    result = (unsigned __int64)*a3 >> 20;
    *(_QWORD *)(Capped + 24) -= result;
    return result;
  }
  v10 = a1 + 48 * ((unsigned __int8)v7[1] + 45LL);
  if ( (*v7 & 4) != 0 )
  {
    *v7 &= ~1u;
    return RtlpHpVaMgrRangeFree(v10, v9);
  }
  v11 = 0x100000LL;
  if ( (unsigned int)`RtlpHpMemoryTypePageSize'::`2'::PageSize[((unsigned __int64)*(unsigned __int8 *)(v10 + 46) >> 1) & 7] <= 0x100000 )
  {
    v12 = *a2;
    v13 = *a3;
    v14 = RtlSparseArrayElementAllocated(
            *(_QWORD *)(v10 + 24) + 16LL,
            (*a2 - *(_QWORD *)(*(_QWORD *)(v10 + 24) + 8LL)) >> 20);
    if ( v13 )
    {
      v15 = (_WORD *)(v14 + 2);
      do
      {
        v16 = *(_QWORD *)(*(_QWORD *)(v10 + 24) + 8LL)
            + (((unsigned __int64)v15 - *(_QWORD *)(*(_QWORD *)(v10 + 24) + 40LL) - 2) >> *(_DWORD *)(*(_QWORD *)(v10 + 24) + 24LL) << 20);
        v17 = v16 + 0x100000;
        if ( v13 + v12 <= v16 || v17 <= v12 )
        {
          BYTE2(v16) = 0;
          v18 = 0LL;
        }
        else
        {
          if ( v12 > v16 )
            v16 = v12;
          if ( v13 + v12 < v17 )
            v17 = v13 + v12;
          v18 = v17 - v16;
        }
        v12 += v18;
        *v15 &= ~(((1 << SBYTE2(v18)) - 1) << (BYTE2(v16) & 0xF));
        v15 += 16;
        v13 -= v18;
      }
      while ( v13 );
    }
    RtlpHpEnvFreeVA((_DWORD)a2, (_DWORD)a3, 0x4000, (*(unsigned __int8 *)(v10 + 46) >> 1) & 7, *(_QWORD *)(v10 + 32));
  }
  LOBYTE(v8) = *v9;
  v19 = v9;
  if ( (*v9 & 2) != 0 )
  {
    v22 = v9;
    do
      v9 -= 32;
    while ( (*v9 & 2) != 0 );
  }
  else
  {
    LOBYTE(v8) = (*(_BYTE *)(v10 + 46) >> 5) & ~((unsigned __int8)v8 >> 2);
    v20 = (unsigned __int64 *)(v9 + 24);
    if ( ((unsigned __int8)v8 & 1) == 0 )
    {
      v8 = (*v9 & 4) != 0 ? (volatile signed __int32 **)*v20 : (volatile signed __int32 **)*(unsigned __int16 *)v20;
      if ( (volatile signed __int32 **)v6 != v8 )
        NT_ASSERT("(Range->Standalone == 0 && Allocator->AllowFreeHead == 1) || ChunksToFree == RtlpHpVaMgrRangeSize(Range)");
    }
    if ( (*v9 & 4) != 0 )
      v21 = *v20;
    else
      v21 = *(unsigned __int16 *)v20;
    if ( v6 < v21 )
      v22 = &v9[32 * v6];
    else
      v22 = 0LL;
  }
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)v10, v8, v11);
  if ( v22 )
    RtlpHpVaMgrRangeSplit(v10, v9, (v22 - v9) >> 5);
  v9 = (_BYTE *)RtlpHpVaMgrFree(v10, v19);
  result = RtlReleaseSRWLockExclusive((volatile signed __int64 *)v10);
  if ( v9 )
    return RtlpHpVaMgrRangeFree(v10, v9);
  return result;
}
