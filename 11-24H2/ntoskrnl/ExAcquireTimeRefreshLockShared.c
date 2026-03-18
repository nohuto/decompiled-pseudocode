/*
 * XREFs of ExAcquireTimeRefreshLockShared @ 0x140A13A50
 * Callers:
 *     ExTraceTimerResolution @ 0x1404A9A08 (ExTraceTimerResolution.c)
 *     ExpSetTimeZoneInformation @ 0x1407B5844 (ExpSetTimeZoneInformation.c)
 *     PopPolicyTimeChange @ 0x140A13A00 (PopPolicyTimeChange.c)
 *     ExpQuerySystemInformation @ 0x140ADC240 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 ExAcquireTimeRefreshLockShared()
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v1; // rbx
  signed __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((__int64)&ExpTimeRefreshLock, 0LL);
  result = _InterlockedCompareExchange64((volatile signed __int64 *)&ExpTimeRefreshLock, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)&ExpTimeRefreshLock, 0, v1, (__int64)&ExpTimeRefreshLock);
  if ( v1 )
    *((_BYTE *)v1 + 10) = 1;
  return result;
}
