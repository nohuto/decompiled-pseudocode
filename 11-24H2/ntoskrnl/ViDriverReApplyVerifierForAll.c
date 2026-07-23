/*
 * XREFs of ViDriverReApplyVerifierForAll @ 0x140B8C8E4
 * Callers:
 *     VfDriverInitSuccess @ 0x140B8C494 (VfDriverInitSuccess.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402DEA60 (KeReleaseMutex.c)
 *     MmReleaseLoadLock @ 0x1404C2E10 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1404CBB50 (MmAcquireLoadLock.c)
 *     RtlEqualUnicodeString @ 0x140929190 (RtlEqualUnicodeString.c)
 *     VfUtilIsProtectedDriver @ 0x140B854AC (VfUtilIsProtectedDriver.c)
 *     VfDriverLock @ 0x140B8C4B4 (VfDriverLock.c)
 *     VfThunkApplyDriverAddedThunks @ 0x140B99018 (VfThunkApplyDriverAddedThunks.c)
 *     VfSuspectDriversIsLoaded @ 0x140C3DE84 (VfSuspectDriversIsLoaded.c)
 */

__int64 ViDriverReApplyVerifierForAll()
{
  unsigned int v0; // edi
  PVOID *i; // rbx

  v0 = 0;
  if ( !(_QWORD)ViVerifierDriverAddedThunkListHead )
    return 0LL;
  MmAcquireLoadLock();
  for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
  {
    if ( !RtlEqualUnicodeString(&VfKernelImageName, (PCUNICODE_STRING)(i + 11), 1u) && ((_DWORD)i[13] & 0x2000000) != 0 )
    {
      VfDriverLock();
      if ( (unsigned int)VfSuspectDriversIsLoaded(i + 11) )
      {
        if ( !(unsigned int)VfUtilIsProtectedDriver() )
          v0 = VfThunkApplyDriverAddedThunks(i);
      }
      ViDriversLoadLockOwner = 0LL;
      KeReleaseMutex(&ViDriversLoadLock, 0);
    }
  }
  MmReleaseLoadLock(0LL);
  return v0;
}
