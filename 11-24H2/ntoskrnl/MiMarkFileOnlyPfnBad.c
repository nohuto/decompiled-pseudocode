/*
 * XREFs of MiMarkFileOnlyPfnBad @ 0x14067C654
 * Callers:
 *     MmMarkPhysicalMemoryAsBad @ 0x140675D20 (MmMarkPhysicalMemoryAsBad.c)
 * Callees:
 *     MiSetPfnModified @ 0x140215EC0 (MiSetPfnModified.c)
 *     MiTrimSharedPage @ 0x14025A33C (MiTrimSharedPage.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiInsertPageInList @ 0x140300420 (MiInsertPageInList.c)
 *     MiSafeLockPage @ 0x140334630 (MiSafeLockPage.c)
 *     MiUnlinkPageFromListEx @ 0x14033B030 (MiUnlinkPageFromListEx.c)
 *     MiSetPfnRemovalRequested @ 0x1406757A0 (MiSetPfnRemovalRequested.c)
 *     MiPersistPage @ 0x14067CAF8 (MiPersistPage.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiMarkFileOnlyPfnBad(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  _QWORD *Pool; // rsi
  char v5; // di
  unsigned __int8 v6; // dl
  __int64 v7; // rcx
  int v9; // [rsp+40h] [rbp+8h]

  Pool = (_QWORD *)MiAllocatePool(0x40uLL, 0x20uLL, 1816291661);
  v5 = MiSafeLockPage(0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4));
  if ( v5 != 17 )
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
        v9 = *(_DWORD *)(BugCheckParameter2 + 32);
        HIBYTE(v9) |= 0x80u;
        *(_DWORD *)(BugCheckParameter2 + 32) = v9;
      }
      if ( (*(_BYTE *)(BugCheckParameter2 + 35) & 0x10) != 0
        || (unsigned __int16)*(_DWORD *)(BugCheckParameter2 + 32)
        || (*(_BYTE *)(BugCheckParameter2 + 34) & 7u) - 2 > 1 )
      {
        MiSetPfnRemovalRequested(BugCheckParameter2, 1, 0, Pool);
        v6 = v5;
        v7 = BugCheckParameter2;
        if ( (*(_BYTE *)(BugCheckParameter2 + 34) & 7) == 6 )
        {
          MiTrimSharedPage(BugCheckParameter2, v5, a2);
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
        v6 = v5;
        v7 = BugCheckParameter2;
      }
      MiUnlockPage(v7, v6);
      return 259LL;
    }
    MiUnlockPage(BugCheckParameter2, v5);
  }
  if ( Pool )
    ExFreePoolWithTag(Pool, 0);
  return 3221226548LL;
}
