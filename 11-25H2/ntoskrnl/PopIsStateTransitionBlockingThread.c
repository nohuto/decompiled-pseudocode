/*
 * XREFs of PopIsStateTransitionBlockingThread @ 0x140B5A66C
 * Callers:
 *     PopNotifyConsoleUserPresent @ 0x1409638B0 (PopNotifyConsoleUserPresent.c)
 *     PopPowerAggregatorNotifyCsStateExited @ 0x140A2C294 (PopPowerAggregatorNotifyCsStateExited.c)
 *     PopInvokeWin32Callout @ 0x140A2C928 (PopInvokeWin32Callout.c)
 * Callees:
 *     PopAcquireRwLockShared @ 0x140204514 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 */

bool PopIsStateTransitionBlockingThread()
{
  bool v0; // bl

  v0 = 0;
  PopAcquireRwLockShared((volatile signed __int64 *)&xmmword_140F0C928);
  if ( dword_140F0C920 != -1 )
    v0 = KeGetCurrentThread() == *(struct _KTHREAD **)&PopStateTransitonBlameStack[3 * (unsigned int)dword_140F0C920];
  PopReleaseRwLock((signed __int64 *)&xmmword_140F0C928);
  return v0;
}
