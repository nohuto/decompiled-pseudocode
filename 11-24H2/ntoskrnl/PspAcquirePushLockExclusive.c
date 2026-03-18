/*
 * XREFs of PspAcquirePushLockExclusive @ 0x1405E607C
 * Callers:
 *     PsStartSiloMonitor @ 0x140779270 (PsStartSiloMonitor.c)
 *     PsUnregisterSiloMonitor @ 0x1407794B0 (PsUnregisterSiloMonitor.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

__int64 PspAcquirePushLockExclusive()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 result; // rax
  __int64 v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = (__int64)KeAbPreAcquire((__int64)&PspSiloMonitorLock, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&PspSiloMonitorLock, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(&PspSiloMonitorLock, result, (__int64)&PspSiloMonitorLock);
  if ( v2 )
    *(_BYTE *)(v2 + 10) = 1;
  return result;
}
