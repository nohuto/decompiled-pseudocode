/*
 * XREFs of MiMakePageBad @ 0x14047C9DC
 * Callers:
 *     MiScrubLargeMappedPage @ 0x14068D548 (MiScrubLargeMappedPage.c)
 *     MiScrubNode @ 0x140A38DD4 (MiScrubNode.c)
 * Callees:
 *     MiAcquireNonPagedResources @ 0x140211200 (MiAcquireNonPagedResources.c)
 *     MiSafeLockPage @ 0x140216290 (MiSafeLockPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140222210 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     MiIsPageOnBadList @ 0x14030492C (MiIsPageOnBadList.c)
 *     MiSetPfnRemovalRequested @ 0x1406745D0 (MiSetPfnRemovalRequested.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiMakePageBad(ULONG_PTR BugCheckParameter2, char a2)
{
  __int64 v4; // rdi
  void *Pool; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  char v8; // si

  v4 = 48 * BugCheckParameter2 - 0x220000000000LL;
  Pool = (void *)MiAllocatePool(0x40uLL, 0x20uLL, 1816291661);
  v8 = MiSafeLockPage(BugCheckParameter2, v6, v7);
  if ( v8 != 17 )
  {
    if ( !MiIsPageOnBadList(v4) )
    {
      if ( (a2 & 1) != 0 && (*(_DWORD *)(v4 + 32) & 0x40000000) == 0 )
      {
        MiAcquireNonPagedResources(
          *((ULONG **)qword_140E2FF88 + ((*(_QWORD *)(v4 + 40) >> 43) & 0x3FFLL)),
          1uLL,
          0LL,
          1u);
        MiSetPfnRemovalRequested(v4, 1LL, 0LL);
        Pool = 0LL;
        _InterlockedIncrement(&dword_140E301A4);
      }
      if ( (a2 & 2) != 0 )
        MiInsertPageInFreeOrZeroedList(BugCheckParameter2, 2LL);
    }
    MiUnlockPage(v4, v8);
  }
  if ( Pool )
    ExFreePoolWithTag(Pool, 0);
}
