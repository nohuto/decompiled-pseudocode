/*
 * XREFs of PopIsStateTransitionBlockingThread @ 0x140B6B870
 * Callers:
 *     PopNotifyConsoleUserPresent @ 0x1409A1CB0 (PopNotifyConsoleUserPresent.c)
 *     PopInvokeWin32Callout @ 0x1409A49A8 (PopInvokeWin32Callout.c)
 *     PopPowerAggregatorNotifyCsStateExited @ 0x140A6E534 (PopPowerAggregatorNotifyCsStateExited.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x1402AE968 (PopAcquireRwLockShared.c)
 */

bool PopIsStateTransitionBlockingThread()
{
  bool v0; // bl

  v0 = 0;
  PopAcquireRwLockShared((volatile signed __int64 *)&xmmword_140F0D288);
  if ( dword_140F0D280 != -1 )
    v0 = KeGetCurrentThread() == *(struct _KTHREAD **)&PopStateTransitonBlameStack[3 * (unsigned int)dword_140F0D280];
  PopReleaseRwLock((signed __int64 *)&xmmword_140F0D288);
  return v0;
}
