/*
 * XREFs of MiMakePageBad @ 0x140477B64
 * Callers:
 *     MiScrubLargeMappedPage @ 0x14068E678 (MiScrubLargeMappedPage.c)
 *     MiScrubNode @ 0x140A2DE94 (MiScrubNode.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x14024EF60 (MiInsertPageInFreeOrZeroedList.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiIsPageOnBadList @ 0x14030E80C (MiIsPageOnBadList.c)
 *     MiSafeLockPage @ 0x140334630 (MiSafeLockPage.c)
 *     MiAcquireNonPagedResources @ 0x14033A560 (MiAcquireNonPagedResources.c)
 *     MiSetPfnRemovalRequested @ 0x1406757A0 (MiSetPfnRemovalRequested.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall MiMakePageBad(ULONG_PTR BugCheckParameter2, char a2)
{
  __int64 v4; // rdi
  void *Pool; // rbx
  char v6; // si

  v4 = 48 * BugCheckParameter2 - 0x220000000000LL;
  Pool = (void *)MiAllocatePool(0x40uLL, 0x20uLL, 1816291661);
  v6 = MiSafeLockPage(BugCheckParameter2);
  if ( v6 != 17 )
  {
    if ( !MiIsPageOnBadList(v4) )
    {
      if ( (a2 & 1) != 0 && (*(_DWORD *)(v4 + 32) & 0x40000000) == 0 )
      {
        MiAcquireNonPagedResources(
          *((ULONG **)qword_140E300C8 + ((*(_QWORD *)(v4 + 40) >> 43) & 0x3FFLL)),
          1uLL,
          0LL,
          1LL);
        MiSetPfnRemovalRequested(v4, 1LL, 0LL);
        Pool = 0LL;
        _InterlockedIncrement(&dword_140E302E4);
      }
      if ( (a2 & 2) != 0 )
        MiInsertPageInFreeOrZeroedList(BugCheckParameter2, 2LL);
    }
    MiUnlockPage(v4, v6);
  }
  if ( Pool )
    ExFreePoolWithTag(Pool, 0);
}
