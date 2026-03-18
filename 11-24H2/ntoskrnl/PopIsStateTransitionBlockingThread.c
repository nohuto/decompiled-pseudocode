/*
 * XREFs of PopIsStateTransitionBlockingThread @ 0x140B6A160
 * Callers:
 *     PopPowerAggregatorNotifyCsStateExited @ 0x140902C54 (PopPowerAggregatorNotifyCsStateExited.c)
 *     PopNotifyConsoleUserPresent @ 0x1409BB660 (PopNotifyConsoleUserPresent.c)
 *     PopInvokeWin32Callout @ 0x1409BE358 (PopInvokeWin32Callout.c)
 * Callees:
 *     PopAcquireRwLockShared @ 0x1403B5E64 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 */

bool PopIsStateTransitionBlockingThread()
{
  bool v0; // bl

  v0 = 0;
  PopAcquireRwLockShared((volatile signed __int64 *)&xmmword_140F0CF68);
  if ( dword_140F0CF60 != -1 )
    v0 = KeGetCurrentThread() == *(struct _KTHREAD **)&PopStateTransitonBlameStack[3 * (unsigned int)dword_140F0CF60];
  PopReleaseRwLock((signed __int64 *)&xmmword_140F0CF68);
  return v0;
}
