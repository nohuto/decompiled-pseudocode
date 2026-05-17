/*
 * XREFs of LdrpFindExistingModule @ 0x180076630
 * Callers:
 *     LdrpMapDllFullPath @ 0x180075388 (LdrpMapDllFullPath.c)
 *     LdrpMapDllRetry @ 0x1800D5ED0 (LdrpMapDllRetry.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     LdrpFindLoadedDllByNameLockHeld @ 0x180073C10 (LdrpFindLoadedDllByNameLockHeld.c)
 */

__int64 __fastcall LdrpFindExistingModule(
        unsigned __int16 *a1,
        volatile signed __int32 **a2,
        unsigned __int64 a3,
        int a4,
        volatile signed __int32 **a5)
{
  char v7; // si
  unsigned __int16 *v9; // rdx
  int LoadedDllByNameLockHeld; // ebx

  v7 = a3;
  *a5 = 0LL;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpModuleDatatableLock, a2, a3);
  v9 = 0LL;
  if ( (v7 & 0x20) == 0 )
    v9 = (unsigned __int16 *)a2;
  LoadedDllByNameLockHeld = LdrpFindLoadedDllByNameLockHeld(a1, v9, v7, a5, a4);
  if ( LoadedDllByNameLockHeld == -1073741515 && (v7 & 8) != 0 )
  {
    LoadedDllByNameLockHeld = LdrpFindLoadedDllByNameLockHeld(0LL, (unsigned __int16 *)a2, 0, a5, a4);
    if ( LoadedDllByNameLockHeld >= 0 )
      *((_DWORD *)*a5 + 26) |= 1u;
  }
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  return (unsigned int)LoadedDllByNameLockHeld;
}
