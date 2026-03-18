/*
 * XREFs of PspAcquirePushLockExclusive @ 0x1405D9EAC
 * Callers:
 *     PsStartSiloMonitor @ 0x1407695C0 (PsStartSiloMonitor.c)
 *     PsUnregisterSiloMonitor @ 0x140769800 (PsUnregisterSiloMonitor.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 */

__int64 *PspAcquirePushLockExclusive()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *result; // rax
  __int64 *v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = KeAbPreAcquire((__int64)&PspSiloMonitorLock, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&PspSiloMonitorLock, 0LL) )
    result = (__int64 *)ExfAcquirePushLockExclusiveEx(&PspSiloMonitorLock, result, (__int64)&PspSiloMonitorLock);
  if ( v2 )
    *((_BYTE *)v2 + 10) = 1;
  return result;
}
