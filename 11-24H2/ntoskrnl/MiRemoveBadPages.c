/*
 * XREFs of MiRemoveBadPages @ 0x14067406C
 * Callers:
 *     MmRemovePhysicalMemory @ 0x1407EA5D0 (MmRemovePhysicalMemory.c)
 * Callees:
 *     MiSafeLockPage @ 0x140216290 (MiSafeLockPage.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     MiIsPageOnBadList @ 0x14030492C (MiIsPageOnBadList.c)
 *     MiUnlinkPageFromBadList @ 0x14039398C (MiUnlinkPageFromBadList.c)
 *     MiReturnBadPagesToBadList @ 0x140674474 (MiReturnBadPagesToBadList.c)
 *     MiSetPfnRemovalRequested @ 0x1406745D0 (MiSetPfnRemovalRequested.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiRemoveBadPages(__int64 a1, ULONG_PTR a2, unsigned __int64 a3)
{
  ULONG_PTR v4; // rsi
  __int64 v7; // rdi
  unsigned __int64 i; // rbp
  unsigned int v9; // ebx
  void *Pool; // r14
  __int64 v11; // rdx
  __int64 v12; // r8
  char v13; // r15

  v4 = a2;
  if ( (MiFlags & 0x10000000) == 0 )
    return 3221225474LL;
  v7 = 48 * a2 - 0x220000000000LL;
  for ( i = 0LL; ; ++i )
  {
    v9 = 0;
    if ( i >= a3 )
      break;
    Pool = (void *)MiAllocatePool(0x40uLL, 0x20uLL, 1816291661);
    v13 = MiSafeLockPage(v4, v11, v12);
    if ( v13 == 17 )
    {
      v9 = -1073741585;
      goto LABEL_15;
    }
    if ( _bittest64((const signed __int64 *)(v7 + 40), 0x35u) )
    {
      v9 = -1073741585;
LABEL_13:
      MiUnlockPage(v7, v13);
LABEL_15:
      if ( Pool )
        ExFreePoolWithTag(Pool, 0);
      if ( i )
        MiReturnBadPagesToBadList(v4 - i, i);
      return v9;
    }
    if ( *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v7 + 40) >> 43) & 0x3FFLL)) != a1 )
    {
      v9 = -1073740277;
      goto LABEL_13;
    }
    if ( !MiIsPageOnBadList(v7) )
    {
      v9 = -1073740682;
      goto LABEL_13;
    }
    MiUnlinkPageFromBadList(v7, 0);
    MiSetPfnRemovalRequested(v7, 1LL, 0LL);
    *(_QWORD *)(v7 + 24) |= 0x4000000000000000uLL;
    MiUnlockPage(v7, v13);
    ++v4;
    v7 += 48LL;
  }
  return v9;
}
