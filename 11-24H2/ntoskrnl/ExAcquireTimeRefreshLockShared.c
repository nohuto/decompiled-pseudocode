/*
 * XREFs of ExAcquireTimeRefreshLockShared @ 0x140A0C1B0
 * Callers:
 *     ExTraceTimerResolution @ 0x1404A3CD8 (ExTraceTimerResolution.c)
 *     ExpSetTimeZoneInformation @ 0x1407B5C94 (ExpSetTimeZoneInformation.c)
 *     PopPolicyTimeChange @ 0x140A0C160 (PopPolicyTimeChange.c)
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 ExAcquireTimeRefreshLockShared()
{
  struct _KTHREAD *CurrentThread; // rax
  char *v1; // rbx
  signed __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = (char *)KeAbPreAcquire((__int64)&ExpTimeRefreshLock, 0LL);
  result = _InterlockedCompareExchange64((volatile signed __int64 *)&ExpTimeRefreshLock, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)&ExpTimeRefreshLock, 0, v1, (__int64)&ExpTimeRefreshLock);
  if ( v1 )
    v1[10] = 1;
  return result;
}
