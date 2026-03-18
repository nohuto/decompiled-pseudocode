/*
 * XREFs of CiSystemAcquirePushLock @ 0x1C000E130
 * Callers:
 *     CiDispatchCreateNotificationClient @ 0x1C000C240 (CiDispatchCreateNotificationClient.c)
 *     CiTaskIndexCreate @ 0x1C000D070 (CiTaskIndexCreate.c)
 *     CiTaskIndexLocate @ 0x1C000D540 (CiTaskIndexLocate.c)
 *     CiThreadSetRelativePriority @ 0x1C000D620 (CiThreadSetRelativePriority.c)
 *     CiAcquireProcessLock @ 0x1C000D6E0 (CiAcquireProcessLock.c)
 *     CiAcquireTaskIndexListLock @ 0x1C000D700 (CiAcquireTaskIndexListLock.c)
 *     CiThreadCreate @ 0x1C000D720 (CiThreadCreate.c)
 *     CiProcessCreate @ 0x1C000DAC0 (CiProcessCreate.c)
 *     CiThreadCleanup @ 0x1C000DF90 (CiThreadCleanup.c)
 *     CiProcessDereference @ 0x1C000E170 (CiProcessDereference.c)
 *     CiProcessRemoveThread @ 0x1C000E260 (CiProcessRemoveThread.c)
 *     CiThreadDecrementScheduledCount @ 0x1C000E2D0 (CiThreadDecrementScheduledCount.c)
 *     CiThreadIncrementScheduledCount @ 0x1C000E330 (CiThreadIncrementScheduledCount.c)
 *     CiDispatchClose @ 0x1C000E390 (CiDispatchClose.c)
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
