/*
 * XREFs of PspAcquirePushLockExclusive @ 0x1405E367C
 * Callers:
 *     PsStartSiloMonitor @ 0x140779370 (PsStartSiloMonitor.c)
 *     PsUnregisterSiloMonitor @ 0x1407795B0 (PsUnregisterSiloMonitor.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 */

char *PspAcquirePushLockExclusive()
{
  struct _KTHREAD *CurrentThread; // rax
  char *result; // rax
  char *v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = (char *)KeAbPreAcquire((__int64)&PspSiloMonitorLock, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&PspSiloMonitorLock, 0LL) )
    result = (char *)ExfAcquirePushLockExclusiveEx(&PspSiloMonitorLock, result, (__int64)&PspSiloMonitorLock);
  if ( v2 )
    v2[10] = 1;
  return result;
}
