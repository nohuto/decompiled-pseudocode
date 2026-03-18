/*
 * XREFs of MmAcquireLoadLockShared @ 0x14036DE84
 * Callers:
 *     MiSplitDriverPage @ 0x1407D8198 (MiSplitDriverPage.c)
 *     MmFreeDriverInitialization @ 0x140A39550 (MmFreeDriverInitialization.c)
 * Callees:
 *     MiAcquireLoadLock @ 0x14036DF38 (MiAcquireLoadLock.c)
 */

void __noreturn MmAcquireLoadLockShared()
{
  MiAcquireLoadLock(0LL);
}
