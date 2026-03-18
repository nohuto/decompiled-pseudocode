/*
 * XREFs of ExAcquireTimeRefreshLockShared @ 0x140A09550
 * Callers:
 *     ExTraceTimerResolution @ 0x1404A8858 (ExTraceTimerResolution.c)
 *     ExpSetTimeZoneInformation @ 0x1407A63A4 (ExpSetTimeZoneInformation.c)
 *     ExpQuerySystemInformation @ 0x1409DB5B0 (ExpQuerySystemInformation.c)
 *     PopPolicyTimeChange @ 0x140A09500 (PopPolicyTimeChange.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 ExAcquireTimeRefreshLockShared()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v1; // rbx
  signed __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((__int64)&ExpTimeRefreshLock, 0LL);
  result = _InterlockedCompareExchange64((volatile signed __int64 *)&ExpTimeRefreshLock, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx(
               (signed __int64 *)&ExpTimeRefreshLock,
               0,
               v1,
               (unsigned __int64)&ExpTimeRefreshLock);
  if ( v1 )
    *((_BYTE *)v1 + 10) = 1;
  return result;
}
