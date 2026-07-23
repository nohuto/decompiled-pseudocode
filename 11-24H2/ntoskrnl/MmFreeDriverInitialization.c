/*
 * XREFs of MmFreeDriverInitialization @ 0x140A3317C
 * Callers:
 *     IopLoadDriver @ 0x1409B6EEC (IopLoadDriver.c)
 * Callees:
 *     MmAcquireLoadLockShared @ 0x1402BBA64 (MmAcquireLoadLockShared.c)
 *     MiUnlockLoaderEntry @ 0x1402BBFE8 (MiUnlockLoaderEntry.c)
 *     MiLockLoaderEntry @ 0x1402BC0A0 (MiLockLoaderEntry.c)
 *     MmReleaseLoadLockShared @ 0x1402BC170 (MmReleaseLoadLockShared.c)
 *     MiFreeDriverInitialization @ 0x140A33590 (MiFreeDriverInitialization.c)
 */

void __noreturn MmFreeDriverInitialization()
{
  MmAcquireLoadLockShared();
}
