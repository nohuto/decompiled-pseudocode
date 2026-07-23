/*
 * XREFs of LdrpFindExistingModule @ 0x180092F10
 * Callers:
 *     LdrpMapDllFullPath @ 0x180091C68 (LdrpMapDllFullPath.c)
 *     LdrpMapDllRetry @ 0x1800D1240 (LdrpMapDllRetry.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     LdrpFindLoadedDllByNameLockHeld @ 0x1800904F0 (LdrpFindLoadedDllByNameLockHeld.c)
 */

__int64 __fastcall LdrpFindExistingModule(
        unsigned __int16 *a1,
        unsigned __int16 *a2,
        char a3,
        int a4,
        volatile signed __int32 **a5)
{
  unsigned __int16 *v9; // rdx
  int LoadedDllByNameLockHeld; // ebx

  *a5 = 0LL;
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  v9 = 0LL;
  if ( (a3 & 0x20) == 0 )
    v9 = a2;
  LoadedDllByNameLockHeld = LdrpFindLoadedDllByNameLockHeld(a1, v9, a3, a5, a4);
  if ( LoadedDllByNameLockHeld == -1073741515 && (a3 & 8) != 0 )
  {
    LoadedDllByNameLockHeld = LdrpFindLoadedDllByNameLockHeld(0LL, a2, 0, a5, a4);
    if ( LoadedDllByNameLockHeld >= 0 )
      *((_DWORD *)*a5 + 26) |= 1u;
  }
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  return (unsigned int)LoadedDllByNameLockHeld;
}
