/*
 * XREFs of VfDriverUnlock @ 0x140B8A63C
 * Callers:
 *     VfIsVerificationEnabledForImage @ 0x1406101C0 (VfIsVerificationEnabledForImage.c)
 *     VfDriverRemoveAllDifVerification @ 0x1406110D4 (VfDriverRemoveAllDifVerification.c)
 *     VfSuspectDriversParseRegistryString @ 0x140C3BD54 (VfSuspectDriversParseRegistryString.c)
 *     VfXdvExcludeParseRegistryString @ 0x140C3BF00 (VfXdvExcludeParseRegistryString.c)
 * Callees:
 *     KeReleaseMutex @ 0x1403379B0 (KeReleaseMutex.c)
 */

LONG VfDriverUnlock()
{
  ViDriversLoadLockOwner = 0LL;
  return KeReleaseMutex(&ViDriversLoadLock, 0);
}
