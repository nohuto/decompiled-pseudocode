/*
 * XREFs of MmAcquireLoadLockShared @ 0x1402BBA64
 * Callers:
 *     MiSplitDriverPage @ 0x1407E8628 (MiSplitDriverPage.c)
 *     MmFreeDriverInitialization @ 0x140A3317C (MmFreeDriverInitialization.c)
 * Callees:
 *     MiAcquireLoadLock @ 0x1402BBB18 (MiAcquireLoadLock.c)
 */

void __noreturn MmAcquireLoadLockShared()
{
  MiAcquireLoadLock(0LL);
}
