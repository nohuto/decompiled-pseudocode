/*
 * XREFs of RtlpHpVaMgrCtxFree @ 0x1403CC28C
 * Callers:
 *     RtlpHpSegMgrRelease @ 0x1402E15FC (RtlpHpSegMgrRelease.c)
 *     RtlpHpSegMgrCommit @ 0x1402F9CA8 (RtlpHpSegMgrCommit.c)
 *     RtlpHpFreeVA @ 0x1402FA99C (RtlpHpFreeVA.c)
 *     RtlpHpLargeFree @ 0x1403CB4FC (RtlpHpLargeFree.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x140212CB0 (RtlpHpAcquireLockExclusive.c)
 *     RtlSparseArrayElementAllocated @ 0x1402FA2C0 (RtlSparseArrayElementAllocated.c)
 *     RtlpHpEnvFreeVA @ 0x1402FAA1C (RtlpHpEnvFreeVA.c)
 *     MmFreePoolMemory @ 0x1402FAA60 (MmFreePoolMemory.c)
 *     RtlpHpReleaseLockExclusive @ 0x14031FBD0 (RtlpHpReleaseLockExclusive.c)
 *     RtlpHpVaMgrRangeSplit @ 0x1403CC218 (RtlpHpVaMgrRangeSplit.c)
 *     RtlpHpVaMgrRangeFree @ 0x1403CC544 (RtlpHpVaMgrRangeFree.c)
 *     RtlpHpVaMgrFree @ 0x1403CC694 (RtlpHpVaMgrFree.c)
 *     RtlSparseArrayElementFindCapped @ 0x1405FAE80 (RtlSparseArrayElementFindCapped.c)
 */

void __fastcall RtlpHpVaMgrCtxFree(__int64 a1, unsigned __int64 *a2, unsigned __int64 *a3)
{
  unsigned __int64 v6; // rdi
  _BYTE *v7; // rax
  _BYTE *v8; // rbx
  ULONG_PTR v9; // rsi
  _BYTE *v10; // rbp
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // r13
  __int64 v13; // rax
  _WORD *v14; // r9
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rdx
  _BYTE *v19; // r15
  unsigned __int64 *v20; // rcx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rax
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
    RtlpHpEnvFreeVA(a2, a3, 0x8000LL);
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
        v16 = v11 + v12;
        v17 = v15 + 0x100000;
        if ( v15 + 0x100000 <= v11 || v16 <= v15 )
        {
          BYTE2(v15) = 0;
          v18 = 0LL;
        }
        else
        {
          if ( v11 > v15 )
            v15 = v11;
          if ( v16 < v17 )
            v17 = v11 + v12;
          v18 = v17 - v15;
        }
        v11 += v18;
        *v14 &= ~(((1 << SBYTE2(v18)) - 1) << (BYTE2(v15) & 0xF));
        v14 += 16;
        v12 -= v18;
      }
      while ( v12 );
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
    v20 = (unsigned __int64 *)(v8 + 24);
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
  v24 = RtlpHpAcquireLockExclusive((int *)v9, *v10 & 1);
  if ( v23 )
    RtlpHpVaMgrRangeSplit(v9, (__int64)v8, (v23 - v8) >> 5);
  v8 = (_BYTE *)RtlpHpVaMgrFree(v9, v19);
  RtlpHpReleaseLockExclusive(v9, *v10 & 1, v24);
  if ( v8 )
    goto LABEL_28;
}
