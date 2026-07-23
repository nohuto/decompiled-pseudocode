/*
 * XREFs of MmIsMdlPageLocked @ 0x140BA66F8
 * Callers:
 *     MmAreMdlPagesLocked @ 0x140BA6694 (MmAreMdlPagesLocked.c)
 *     ViSpMmMapIoSpace_Entry @ 0x140BA6A90 (ViSpMmMapIoSpace_Entry.c)
 *     ViSpMmMapLockedPagesSanityChecks @ 0x140BA6B60 (ViSpMmMapLockedPagesSanityChecks.c)
 * Callees:
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiSafeLockPage @ 0x140334630 (MiSafeLockPage.c)
 *     MiIsPfnLocked @ 0x140443768 (MiIsPfnLocked.c)
 *     MiIsPfn @ 0x14044F7D0 (MiIsPfn.c)
 */

__int64 __fastcall MmIsMdlPageLocked(unsigned __int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  char v4; // si
  BOOL IsPfnLocked; // ebp

  v2 = 0;
  if ( !(unsigned int)MiIsPfn(a1) )
    return 1LL;
  v3 = 48 * a1 - 0x220000000000LL;
  if ( dword_140E3018C == 2 )
  {
    v4 = 17;
  }
  else
  {
    v4 = MiSafeLockPage(a1);
    if ( v4 == 17 )
      return 1LL;
  }
  IsPfnLocked = MiIsPfnLocked(v3);
  if ( v4 != 17 )
    MiUnlockPage(v3, v4);
  LOBYTE(v2) = IsPfnLocked;
  return v2;
}
