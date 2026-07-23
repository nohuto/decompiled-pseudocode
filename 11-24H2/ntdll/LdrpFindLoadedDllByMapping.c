/*
 * XREFs of LdrpFindLoadedDllByMapping @ 0x1800C77DC
 * Callers:
 *     LdrpFindLoadedDllByMappingFile @ 0x1800C7618 (LdrpFindLoadedDllByMappingFile.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18003CC20 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003CC80 (RtlReleaseSRWLockShared.c)
 *     LdrpFindLoadedDllByMappingLockHeld @ 0x1800907B0 (LdrpFindLoadedDllByMappingLockHeld.c)
 */

__int64 __fastcall LdrpFindLoadedDllByMapping(
        PVOID File2MappedAsFile,
        _DWORD *Buf1,
        volatile signed __int32 **a3,
        _DWORD *a4)
{
  int LoadedDllByMappingLockHeld; // ebx
  unsigned int v10; // [rsp+38h] [rbp+10h] BYREF
  int v11; // [rsp+3Ch] [rbp+14h]

  v10 = Buf1[2];
  v11 = Buf1[20];
  RtlAcquireSRWLockShared(&LdrpModuleDatatableLock);
  LoadedDllByMappingLockHeld = LdrpFindLoadedDllByMappingLockHeld(File2MappedAsFile, Buf1, &v10, a3);
  if ( LoadedDllByMappingLockHeld >= 0 && a4 )
    *a4 = *(_DWORD *)(*((_QWORD *)*a3 + 19) + 56LL);
  RtlReleaseSRWLockShared(&LdrpModuleDatatableLock);
  return (unsigned int)LoadedDllByMappingLockHeld;
}
