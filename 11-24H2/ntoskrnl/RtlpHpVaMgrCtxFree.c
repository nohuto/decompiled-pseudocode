/*
 * XREFs of RtlpHpVaMgrCtxFree @ 0x14045930C
 * Callers:
 *     RtlpHpSegMgrCommit @ 0x14035E694 (RtlpHpSegMgrCommit.c)
 *     RtlpHpSegMgrRelease @ 0x140364450 (RtlpHpSegMgrRelease.c)
 *     RtlpHpLargeFree @ 0x140458F38 (RtlpHpLargeFree.c)
 *     RtlpHpFreeVA @ 0x14045928C (RtlpHpFreeVA.c)
 * Callees:
 *     MmFreePoolMemory @ 0x14020C540 (MmFreePoolMemory.c)
 *     RtlpHpEnvFreeVA @ 0x14020C9AC (RtlpHpEnvFreeVA.c)
 *     RtlpHpAcquireLockExclusive @ 0x140336AF0 (RtlpHpAcquireLockExclusive.c)
 *     RtlSparseArrayElementAllocated @ 0x14035D950 (RtlSparseArrayElementAllocated.c)
 *     RtlpHpReleaseLockExclusive @ 0x140360D90 (RtlpHpReleaseLockExclusive.c)
 *     RtlpHpVaMgrRangeFree @ 0x1404595CC (RtlpHpVaMgrRangeFree.c)
 *     RtlpHpVaMgrRangeSplit @ 0x140459A34 (RtlpHpVaMgrRangeSplit.c)
 *     RtlpHpVaMgrFree @ 0x140459AA8 (RtlpHpVaMgrFree.c)
 *     RtlSparseArrayElementFindCapped @ 0x1406047C0 (RtlSparseArrayElementFindCapped.c)
 */

void __fastcall RtlpHpVaMgrCtxFree(__int64 a1, ULONG_PTR *a2, ULONG_PTR *a3)
{
  ULONG_PTR v6; // rdi
  _BYTE *v7; // rax
  _BYTE *v8; // rbx
  ULONG_PTR v9; // rsi
  _BYTE *v10; // rbp
  ULONG_PTR v11; // r14
  ULONG_PTR v12; // r13
  __int64 v13; // rax
  _WORD *v14; // r9
  unsigned __int64 v15; // r8
  ULONG_PTR v16; // rdx
  ULONG_PTR v17; // rdx
  _BYTE *v18; // r15
  ULONG_PTR *v19; // rcx
  ULONG_PTR v20; // rdx
  ULONG_PTR v21; // rax
  _BYTE *v22; // rdi
  char v23; // r14
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
  if ( (unsigned int)`RtlpHpMemoryTypePageSize'::`2'::PageSize[((unsigned __int64)*(unsigned __int8 *)(v9 + 46) >> 1) & 7] <= 0x100000 )
  {
    v11 = *a2;
    v12 = *a3;
    v13 = RtlSparseArrayElementAllocated(
            *(_QWORD *)(v9 + 24) + 16LL,
            (*a2 - *(_QWORD *)(*(_QWORD *)(v9 + 24) + 8LL)) >> 20);
    if ( v12 )
    {
      v14 = (_WORD *)(v13 + 2);
      do
      {
        v15 = *(_QWORD *)(*(_QWORD *)(v9 + 24) + 8LL)
            + (((unsigned __int64)v14 - *(_QWORD *)(*(_QWORD *)(v9 + 24) + 40LL) - 2) >> *(_DWORD *)(*(_QWORD *)(v9 + 24) + 24LL) << 20);
        v16 = v15 + 0x100000;
        if ( v11 + v12 <= v15 || v16 <= v11 )
        {
          BYTE2(v15) = 0;
          v17 = 0LL;
        }
        else
        {
          if ( v11 > v15 )
            v15 = v11;
          if ( v11 + v12 < v16 )
            v16 = v11 + v12;
          v17 = v16 - v15;
        }
        v11 += v17;
        *v14 &= ~(((1 << SBYTE2(v17)) - 1) << (BYTE2(v15) & 0xF));
        v14 += 16;
        v12 -= v17;
      }
      while ( v12 );
    }
    MmFreePoolMemory(a2, a3);
  }
  v18 = v8;
  if ( (*v8 & 2) != 0 )
  {
    v22 = v8;
    do
      v8 -= 32;
    while ( (*v8 & 2) != 0 );
  }
  else
  {
    v19 = (ULONG_PTR *)(v8 + 24);
    if ( ((*v10 >> 5) & (unsigned __int8)~(*v8 >> 2) & 1) == 0 )
    {
      v20 = (*v8 & 4) != 0 ? *v19 : *(unsigned __int16 *)v19;
      if ( v6 != v20 )
        NT_ASSERT("(Range->Standalone == 0 && Allocator->AllowFreeHead == 1) || ChunksToFree == RtlpHpVaMgrRangeSize(Range)");
    }
    if ( (*v8 & 4) != 0 )
      v21 = *v19;
    else
      v21 = *(unsigned __int16 *)v19;
    if ( v6 < v21 )
      v22 = &v8[32 * v6];
    else
      v22 = 0LL;
  }
  v23 = RtlpHpAcquireLockExclusive((int *)v9, *v10 & 1);
  if ( v22 )
    RtlpHpVaMgrRangeSplit(v9, v8, (v22 - v8) >> 5);
  v8 = (_BYTE *)RtlpHpVaMgrFree(v9, v18);
  RtlpHpReleaseLockExclusive(v9, *v10 & 1, v23);
  if ( v8 )
    goto LABEL_28;
}
