/*
 * XREFs of PopAcquireAwaymodeLock @ 0x140B6C554
 * Callers:
 *     PopIssueActionRequest @ 0x140A87C34 (PopIssueActionRequest.c)
 *     PopPowerRequestCallbackAwayModeRequired @ 0x140A94BD0 (PopPowerRequestCallbackAwayModeRequired.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

struct _KTHREAD *PopAcquireAwaymodeLock()
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v1; // rax
  _QWORD *v2; // rbx
  struct _KTHREAD *result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((__int64)&PopAwaymodeLock, 0LL);
  v2 = v1;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&PopAwaymodeLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&PopAwaymodeLock, (__int64)v1, (__int64)&PopAwaymodeLock);
  if ( v2 )
    *((_BYTE *)v2 + 10) = 1;
  result = KeGetCurrentThread();
  PopAwaymodeLockExclusiveThread = (__int64)result;
  return result;
}
