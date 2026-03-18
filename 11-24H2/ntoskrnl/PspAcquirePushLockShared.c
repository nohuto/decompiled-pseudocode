/*
 * XREFs of PspAcquirePushLockShared @ 0x1404F541C
 * Callers:
 *     PspCompleteServerSiloShutdownDeferred @ 0x140772600 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspNotifyServerSiloCreation @ 0x140779708 (PspNotifyServerSiloCreation.c)
 *     PspBeginServerSiloShutdown @ 0x1408E8FFC (PspBeginServerSiloShutdown.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 PspAcquirePushLockShared()
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v1; // rbx
  signed __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((__int64)&PspSiloMonitorLock, 0LL);
  result = _InterlockedCompareExchange64((volatile signed __int64 *)&PspSiloMonitorLock, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)&PspSiloMonitorLock, 0, v1, (__int64)&PspSiloMonitorLock);
  if ( v1 )
    *((_BYTE *)v1 + 10) = 1;
  return result;
}
