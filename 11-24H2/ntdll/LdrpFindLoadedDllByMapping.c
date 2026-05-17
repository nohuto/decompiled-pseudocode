/*
 * XREFs of LdrpFindLoadedDllByMapping @ 0x180003ABC
 * Callers:
 *     LdrpFindLoadedDllByMappingFile @ 0x1800038F8 (LdrpFindLoadedDllByMappingFile.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180010220 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180010280 (RtlReleaseSRWLockShared.c)
 *     LdrpFindLoadedDllByMappingLockHeld @ 0x180073ED0 (LdrpFindLoadedDllByMappingLockHeld.c)
 */

__int64 __fastcall LdrpFindLoadedDllByMapping(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  int LoadedDllByMappingLockHeld; // ebx
  int v10; // [rsp+38h] [rbp+10h] BYREF
  int v11; // [rsp+3Ch] [rbp+14h]

  v10 = *(_DWORD *)(a2 + 8);
  v11 = *(_DWORD *)(a2 + 80);
  RtlAcquireSRWLockShared(&LdrpModuleDatatableLock);
  LoadedDllByMappingLockHeld = LdrpFindLoadedDllByMappingLockHeld(a1, a2, &v10, a3);
  if ( LoadedDllByMappingLockHeld >= 0 && a4 )
    *a4 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 152LL) + 56LL);
  RtlReleaseSRWLockShared(&LdrpModuleDatatableLock);
  return (unsigned int)LoadedDllByMappingLockHeld;
}
