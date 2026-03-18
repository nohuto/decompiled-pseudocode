/*
 * XREFs of MiMarkFileOnlyPfnBad @ 0x14067B474
 * Callers:
 *     MmMarkPhysicalMemoryAsBad @ 0x140674B50 (MmMarkPhysicalMemoryAsBad.c)
 * Callees:
 *     MiUnlinkPageFromListEx @ 0x140211CD0 (MiUnlinkPageFromListEx.c)
 *     MiSafeLockPage @ 0x140216290 (MiSafeLockPage.c)
 *     MiInsertPageInList @ 0x14022CB10 (MiInsertPageInList.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     MiSetPfnModified @ 0x1402E4730 (MiSetPfnModified.c)
 *     MiTrimSharedPage @ 0x140370B4C (MiTrimSharedPage.c)
 *     MiSetPfnRemovalRequested @ 0x1406745D0 (MiSetPfnRemovalRequested.c)
 *     MiPersistPage @ 0x14067B918 (MiPersistPage.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiMarkFileOnlyPfnBad(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  _QWORD *Pool; // rsi
  __int64 v5; // rdx
  __int64 v6; // r8
  char v7; // di
  unsigned __int8 v8; // dl
  __int64 v9; // rcx
  int v11; // [rsp+40h] [rbp+8h]

  Pool = (_QWORD *)MiAllocatePool(0x40uLL, 0x20uLL, 1816291661);
  v7 = MiSafeLockPage(0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4), v5, v6);
  if ( v7 != 17 )
  {
    if ( _bittest64((const signed __int64 *)(BugCheckParameter2 + 40), 0x35u)
      && ((*(_BYTE *)(BugCheckParameter2 + 34) & 7) == 5
       && *(__int64 *)(BugCheckParameter2 + 40) >= 0
       && !*(_QWORD *)(BugCheckParameter2 + 8)
       && !*(_QWORD *)(BugCheckParameter2 + 16)
       || _bittest64((const signed __int64 *)(BugCheckParameter2 + 40), 0x35u)
       && *(__int64 *)(BugCheckParameter2 + 40) < 0
       && (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) != 0) )
    {
      if ( (a2 & 0x10000000) != 0 && *(char *)(BugCheckParameter2 + 35) >= 0 )
      {
        v11 = *(_DWORD *)(BugCheckParameter2 + 32);
        HIBYTE(v11) |= 0x80u;
        *(_DWORD *)(BugCheckParameter2 + 32) = v11;
      }
      if ( (*(_BYTE *)(BugCheckParameter2 + 35) & 0x10) != 0
        || (unsigned __int16)*(_DWORD *)(BugCheckParameter2 + 32)
        || (*(_BYTE *)(BugCheckParameter2 + 34) & 7u) - 2 > 1 )
      {
        MiSetPfnRemovalRequested(BugCheckParameter2, 1, 0, Pool);
        v8 = v7;
        v9 = BugCheckParameter2;
        if ( (*(_BYTE *)(BugCheckParameter2 + 34) & 7) == 6 )
        {
          MiTrimSharedPage(BugCheckParameter2, v7, a2);
          return 259LL;
        }
      }
      else
      {
        MiUnlinkPageFromListEx(BugCheckParameter2, 0);
        if ( (*(_BYTE *)(BugCheckParameter2 + 34) & 0x10) != 0 )
        {
          if ( *(char *)(BugCheckParameter2 + 35) >= 0 )
            MiPersistPage(0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4));
          MiSetPfnModified(BugCheckParameter2, 0);
        }
        MiSetPfnRemovalRequested(BugCheckParameter2, 1, 0, Pool);
        MiInsertPageInList(BugCheckParameter2, 4u);
        v8 = v7;
        v9 = BugCheckParameter2;
      }
      MiUnlockPage(v9, v8);
      return 259LL;
    }
    MiUnlockPage(BugCheckParameter2, v7);
  }
  if ( Pool )
    ExFreePoolWithTag(Pool, 0);
  return 3221226548LL;
}
