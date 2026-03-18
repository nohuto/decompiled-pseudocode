/*
 * XREFs of MmFreeDriverInitialization @ 0x140A3D86C
 * Callers:
 *     IopLoadDriver @ 0x1409C90C0 (IopLoadDriver.c)
 * Callees:
 *     MmAcquireLoadLockShared @ 0x1402C6EE4 (MmAcquireLoadLockShared.c)
 *     MiUnlockLoaderEntry @ 0x1402C7468 (MiUnlockLoaderEntry.c)
 *     MiLockLoaderEntry @ 0x1402C7520 (MiLockLoaderEntry.c)
 *     MmReleaseLoadLockShared @ 0x1402C75F0 (MmReleaseLoadLockShared.c)
 *     MiFreeDriverInitialization @ 0x140A3DC80 (MiFreeDriverInitialization.c)
 */

void __noreturn MmFreeDriverInitialization()
{
  MmAcquireLoadLockShared();
}
