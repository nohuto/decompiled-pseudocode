/*
 * XREFs of MiMakePageBad @ 0x14047BA9C
 * Callers:
 *     MiScrubLargeMappedPage @ 0x140681CB8 (MiScrubLargeMappedPage.c)
 *     MiScrubNode @ 0x140A337C8 (MiScrubNode.c)
 * Callees:
 *     MiIsPageOnBadList @ 0x14021E29C (MiIsPageOnBadList.c)
 *     MiAcquireNonPagedResources @ 0x14022E560 (MiAcquireNonPagedResources.c)
 *     MiSafeLockPage @ 0x140231E30 (MiSafeLockPage.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140343510 (MiInsertPageInFreeOrZeroedList.c)
 *     MiSetPfnRemovalRequested @ 0x140668B70 (MiSetPfnRemovalRequested.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
          *((ULONG **)qword_140E2FD48 + ((*(_QWORD *)(v4 + 40) >> 43) & 0x3FFLL)),
          1uLL,
          0LL,
          1LL);
        MiSetPfnRemovalRequested(v4, 1LL, 0LL);
        Pool = 0LL;
        _InterlockedIncrement(&dword_140E2FF5C);
      }
      if ( (a2 & 2) != 0 )
        MiInsertPageInFreeOrZeroedList(BugCheckParameter2, 2);
    }
    MiUnlockPage(v4, v8);
  }
  if ( Pool )
    ExFreePoolWithTag(Pool, 0);
}
