/*
 * XREFs of CiSystemAcquirePushLock @ 0x14000F6C0
 * Callers:
 *     CiDispatchCreateNotificationClient @ 0x14000D240 (CiDispatchCreateNotificationClient.c)
 *     CiNdisCleanupThrottle @ 0x14000DB90 (CiNdisCleanupThrottle.c)
 *     CiTaskIndexCreate @ 0x14000E600 (CiTaskIndexCreate.c)
 *     CiTaskIndexLocate @ 0x14000EAD0 (CiTaskIndexLocate.c)
 *     CiThreadSetRelativePriority @ 0x14000EBB0 (CiThreadSetRelativePriority.c)
 *     CiAcquireProcessLock @ 0x14000EC70 (CiAcquireProcessLock.c)
 *     CiAcquireTaskIndexListLock @ 0x14000EC90 (CiAcquireTaskIndexListLock.c)
 *     CiThreadCreate @ 0x14000ECB0 (CiThreadCreate.c)
 *     CiProcessCreate @ 0x14000F050 (CiProcessCreate.c)
 *     CiThreadCleanup @ 0x14000F520 (CiThreadCleanup.c)
 *     CiProcessDereference @ 0x14000F700 (CiProcessDereference.c)
 *     CiProcessRemoveThread @ 0x14000F7F0 (CiProcessRemoveThread.c)
 *     CiThreadDecrementScheduledCount @ 0x14000F860 (CiThreadDecrementScheduledCount.c)
 *     CiThreadIncrementScheduledCount @ 0x14000F8C0 (CiThreadIncrementScheduledCount.c)
 *     CiDispatchClose @ 0x14000F920 (CiDispatchClose.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *__fastcall CiSystemAcquirePushLock(__int64 a1)
{
  struct _KTHREAD *result; // rax

  ExAcquirePushLockExclusiveEx(a1, 0LL);
  result = KeGetCurrentThread();
  *(_QWORD *)(a1 + 8) = result;
  return result;
}
