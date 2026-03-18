/*
 * XREFs of MmFreeDriverInitialization @ 0x140A39550
 * Callers:
 *     IopLoadDriver @ 0x1409B0D50 (IopLoadDriver.c)
 * Callees:
 *     MmAcquireLoadLockShared @ 0x14036DE84 (MmAcquireLoadLockShared.c)
 *     MiUnlockLoaderEntry @ 0x14036E408 (MiUnlockLoaderEntry.c)
 *     MiLockLoaderEntry @ 0x14036E4C0 (MiLockLoaderEntry.c)
 *     MmReleaseLoadLockShared @ 0x14036E590 (MmReleaseLoadLockShared.c)
 *     MiFreeDriverInitialization @ 0x140A39960 (MiFreeDriverInitialization.c)
 */

void __noreturn MmFreeDriverInitialization()
{
  MmAcquireLoadLockShared();
}
