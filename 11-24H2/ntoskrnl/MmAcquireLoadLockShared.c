/*
 * XREFs of MmAcquireLoadLockShared @ 0x1402C6EE4
 * Callers:
 *     MiSplitDriverPage @ 0x1407E8058 (MiSplitDriverPage.c)
 *     MmFreeDriverInitialization @ 0x140A3D86C (MmFreeDriverInitialization.c)
 * Callees:
 *     MiAcquireLoadLock @ 0x1402C6F98 (MiAcquireLoadLock.c)
 */

void __noreturn MmAcquireLoadLockShared()
{
  MiAcquireLoadLock(0LL);
}
