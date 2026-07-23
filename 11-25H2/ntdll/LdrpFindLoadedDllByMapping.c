/*
 * XREFs of LdrpFindLoadedDllByMapping @ 0x18006CE70
 * Callers:
 *     LdrpFindLoadedDllByMappingFile @ 0x1800CBEB8 (LdrpFindLoadedDllByMappingFile.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18004F0C0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18004F120 (RtlReleaseSRWLockShared.c)
 *     LdrpFindLoadedDllByMappingLockHeld @ 0x18006E750 (LdrpFindLoadedDllByMappingLockHeld.c)
 */

__int64 __fastcall LdrpFindLoadedDllByMapping(PVOID File2MappedAsFile, void *Buf1, __int64 a3, _DWORD *a4)
{
  int LoadedDllByMappingLockHeld; // ebx

  RtlAcquireSRWLockShared(&LdrpModuleDatatableLock);
  LoadedDllByMappingLockHeld = LdrpFindLoadedDllByMappingLockHeld(File2MappedAsFile, Buf1);
  if ( LoadedDllByMappingLockHeld >= 0 && a4 )
    *a4 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 152LL) + 56LL);
  RtlReleaseSRWLockShared(&LdrpModuleDatatableLock);
  return (unsigned int)LoadedDllByMappingLockHeld;
}
