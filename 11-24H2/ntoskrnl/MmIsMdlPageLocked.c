/*
 * XREFs of MmIsMdlPageLocked @ 0x140BA46F8
 * Callers:
 *     MmAreMdlPagesLocked @ 0x140BA4694 (MmAreMdlPagesLocked.c)
 *     ViSpMmMapIoSpace_Entry @ 0x140BA4A90 (ViSpMmMapIoSpace_Entry.c)
 *     ViSpMmMapLockedPagesSanityChecks @ 0x140BA4B60 (ViSpMmMapLockedPagesSanityChecks.c)
 * Callees:
 *     MiSafeLockPage @ 0x140216290 (MiSafeLockPage.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     MiIsPfnLocked @ 0x14044C868 (MiIsPfnLocked.c)
 *     MiIsPfn @ 0x14045A380 (MiIsPfn.c)
 */

__int64 __fastcall MmIsMdlPageLocked(unsigned __int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  unsigned int v4; // ebx
  __int64 v5; // rdi
  char v6; // si
  BOOL IsPfnLocked; // ebp

  v4 = 0;
  if ( !(unsigned int)MiIsPfn(a1) )
    return 1LL;
  v5 = 48 * a1 - 0x220000000000LL;
  if ( dword_140E3004C == 2 )
  {
    v6 = 17;
  }
  else
  {
    v6 = MiSafeLockPage(a1, v2, v3);
    if ( v6 == 17 )
      return 1LL;
  }
  IsPfnLocked = MiIsPfnLocked(v5);
  if ( v6 != 17 )
    MiUnlockPage(v5, v6);
  LOBYTE(v4) = IsPfnLocked;
  return v4;
}
