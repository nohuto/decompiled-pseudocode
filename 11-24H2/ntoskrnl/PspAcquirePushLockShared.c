/*
 * XREFs of PspAcquirePushLockShared @ 0x1404F2D1C
 * Callers:
 *     PspCompleteServerSiloShutdownDeferred @ 0x140772820 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspNotifyServerSiloCreation @ 0x140779808 (PspNotifyServerSiloCreation.c)
 *     PspBeginServerSiloShutdown @ 0x14085A824 (PspBeginServerSiloShutdown.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 PspAcquirePushLockShared()
{
  struct _KTHREAD *CurrentThread; // rax
  char *v1; // rbx
  signed __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = (char *)KeAbPreAcquire((__int64)&PspSiloMonitorLock, 0LL);
  result = _InterlockedCompareExchange64((volatile signed __int64 *)&PspSiloMonitorLock, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)&PspSiloMonitorLock, 0, v1, (__int64)&PspSiloMonitorLock);
  if ( v1 )
    v1[10] = 1;
  return result;
}
