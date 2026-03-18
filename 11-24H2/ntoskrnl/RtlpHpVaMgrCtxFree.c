/*
 * XREFs of RtlpHpVaMgrCtxFree @ 0x140421038
 * Callers:
 *     RtlpHpSegMgrRelease @ 0x1402BCD10 (RtlpHpSegMgrRelease.c)
 *     RtlpHpSegMgrCommit @ 0x1402C21D4 (RtlpHpSegMgrCommit.c)
 *     RtlpHpLargeFree @ 0x140420C64 (RtlpHpLargeFree.c)
 *     RtlpHpFreeVA @ 0x140420FB8 (RtlpHpFreeVA.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x14020D790 (RtlpHpAcquireLockExclusive.c)
 *     MmFreePoolMemory @ 0x140243A40 (MmFreePoolMemory.c)
 *     RtlpHpEnvFreeVA @ 0x14024421C (RtlpHpEnvFreeVA.c)
 *     RtlpHpReleaseLockExclusive @ 0x1402B9650 (RtlpHpReleaseLockExclusive.c)
 *     RtlSparseArrayElementAllocated @ 0x1402C276C (RtlSparseArrayElementAllocated.c)
 *     RtlpHpVaMgrRangeFree @ 0x1404212F8 (RtlpHpVaMgrRangeFree.c)
 *     RtlpHpVaMgrRangeSplit @ 0x140421760 (RtlpHpVaMgrRangeSplit.c)
 *     RtlpHpVaMgrFree @ 0x1404217D4 (RtlpHpVaMgrFree.c)
 *     RtlSparseArrayElementFindCapped @ 0x1406071C0 (RtlSparseArrayElementFindCapped.c)
 */

void __fastcall RtlpHpVaMgrCtxFree(__int64 a1, ULONG_PTR *a2, ULONG_PTR *a3)
{
  ULONG_PTR v6; // rdi
  _BYTE *v7; // rax
  _BYTE *v8; // rbx
  ULONG_PTR v9; // rsi
  _BYTE *v10; // rbp
  __int64 v11; // r8
  ULONG_PTR v12; // r14
  ULONG_PTR v13; // r13
  __int64 v14; // rax
  _WORD *v15; // r9
  unsigned __int64 v16; // r8
  ULONG_PTR v17; // rdx
  ULONG_PTR v18; // rdx
  _BYTE *v19; // r15
  ULONG_PTR *v20; // rcx
  ULONG_PTR v21; // rdx
  ULONG_PTR v22; // rax
  _BYTE *v23; // rdi
  char v24; // r14
  __int64 Capped; // rbx

  v6 = *a3 >> 20;
  v7 = (_BYTE *)RtlSparseArrayElementAllocated(a1 + 16, (*a2 - *(_QWORD *)(a1 + 8)) >> 20);
  v8 = v7;
  if ( !v7 )
  {
    Capped = RtlSparseArrayElementFindCapped(
               a1 + 16,
               (__int64)(*a2 - *(_QWORD *)(a1 + 8)) / 0x100000,
               ~((__int64)(*a2 - *(_QWORD *)(a1 + 8)) / 0x100000));
    RtlpHpEnvFreeVA(a2, a3, 0x8000);
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
  v10 = (_BYTE *)(v9 + 46);
  v11 = 0x100000LL;
  if ( (unsigned int)`RtlpHpMemoryTypePageSize'::`2'::PageSize[((unsigned __int64)*(unsigned __int8 *)(v9 + 46) >> 1) & 7] <= 0x100000 )
  {
    v12 = *a2;
    v13 = *a3;
    v14 = RtlSparseArrayElementAllocated(
            *(_QWORD *)(v9 + 24) + 16LL,
            (*a2 - *(_QWORD *)(*(_QWORD *)(v9 + 24) + 8LL)) >> 20);
    if ( v13 )
    {
      v15 = (_WORD *)(v14 + 2);
      do
      {
        v16 = *(_QWORD *)(*(_QWORD *)(v9 + 24) + 8LL)
            + (((unsigned __int64)v15 - *(_QWORD *)(*(_QWORD *)(v9 + 24) + 40LL) - 2) >> *(_DWORD *)(*(_QWORD *)(v9 + 24) + 24LL) << 20);
        v17 = v16 + 0x100000;
        if ( v12 + v13 <= v16 || v17 <= v12 )
        {
          BYTE2(v16) = 0;
          v18 = 0LL;
        }
        else
        {
          if ( v12 > v16 )
            v16 = v12;
          if ( v12 + v13 < v17 )
            v17 = v12 + v13;
          v18 = v17 - v16;
        }
        v12 += v18;
        *v15 &= ~(((1 << SBYTE2(v18)) - 1) << (BYTE2(v16) & 0xF));
        v15 += 16;
        v13 -= v18;
      }
      while ( v13 );
    }
    MmFreePoolMemory(a2, a3);
  }
  v19 = v8;
  if ( (*v8 & 2) != 0 )
  {
    v23 = v8;
    do
      v8 -= 32;
    while ( (*v8 & 2) != 0 );
  }
  else
  {
    v20 = (ULONG_PTR *)(v8 + 24);
    if ( ((*v10 >> 5) & (unsigned __int8)~(*v8 >> 2) & 1) == 0 )
    {
      v21 = (*v8 & 4) != 0 ? *v20 : *(unsigned __int16 *)v20;
      if ( v6 != v21 )
        NT_ASSERT("(Range->Standalone == 0 && Allocator->AllowFreeHead == 1) || ChunksToFree == RtlpHpVaMgrRangeSize(Range)");
    }
    if ( (*v8 & 4) != 0 )
      v22 = *v20;
    else
      v22 = *(unsigned __int16 *)v20;
    if ( v6 < v22 )
      v23 = &v8[32 * v6];
    else
      v23 = 0LL;
  }
  v24 = RtlpHpAcquireLockExclusive((int *)v9, *v10 & 1, v11);
  if ( v23 )
    RtlpHpVaMgrRangeSplit(v9, v8, (v23 - v8) >> 5);
  v8 = (_BYTE *)RtlpHpVaMgrFree(v9, v19);
  RtlpHpReleaseLockExclusive(v9, *v10 & 1, v24);
  if ( v8 )
    goto LABEL_28;
}
