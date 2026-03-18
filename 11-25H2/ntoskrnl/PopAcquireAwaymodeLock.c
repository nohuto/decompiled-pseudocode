/*
 * XREFs of PopAcquireAwaymodeLock @ 0x140B5D474
 * Callers:
 *     PopIssueActionRequest @ 0x140A83104 (PopIssueActionRequest.c)
 *     PopPowerRequestCallbackAwayModeRequired @ 0x140A90A90 (PopPowerRequestCallbackAwayModeRequired.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 */

struct _KTHREAD *PopAcquireAwaymodeLock()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v1; // rax
  __int64 *v2; // rbx
  struct _KTHREAD *result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((__int64)&PopAwaymodeLock, 0LL);
  v2 = v1;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&PopAwaymodeLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&PopAwaymodeLock, v1, (__int64)&PopAwaymodeLock);
  if ( v2 )
    *((_BYTE *)v2 + 10) = 1;
  result = KeGetCurrentThread();
  PopAwaymodeLockExclusiveThread = (__int64)result;
  return result;
}
