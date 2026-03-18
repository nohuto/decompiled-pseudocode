/*
 * XREFs of ViDriverReApplyVerifierForAll @ 0x140B8A8E4
 * Callers:
 *     VfDriverInitSuccess @ 0x140B8A494 (VfDriverInitSuccess.c)
 * Callees:
 *     KeReleaseMutex @ 0x1403379B0 (KeReleaseMutex.c)
 *     MmReleaseLoadLock @ 0x1404C9960 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1404D2990 (MmAcquireLoadLock.c)
 *     RtlEqualUnicodeString @ 0x140927050 (RtlEqualUnicodeString.c)
 *     VfUtilIsProtectedDriver @ 0x140B834AC (VfUtilIsProtectedDriver.c)
 *     VfDriverLock @ 0x140B8A4B4 (VfDriverLock.c)
 *     VfThunkApplyDriverAddedThunks @ 0x140B97018 (VfThunkApplyDriverAddedThunks.c)
 *     VfSuspectDriversIsLoaded @ 0x140C3BD2C (VfSuspectDriversIsLoaded.c)
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
