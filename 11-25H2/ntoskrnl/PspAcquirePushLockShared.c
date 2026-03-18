/*
 * XREFs of PspAcquirePushLockShared @ 0x1404F2B18
 * Callers:
 *     PspCompleteServerSiloShutdownDeferred @ 0x140762C40 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspNotifyServerSiloCreation @ 0x140769A58 (PspNotifyServerSiloCreation.c)
 *     PspBeginServerSiloShutdown @ 0x1408D9BC4 (PspBeginServerSiloShutdown.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 PspAcquirePushLockShared()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v1; // rbx
  signed __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((__int64)&PspSiloMonitorLock, 0LL);
  result = _InterlockedCompareExchange64((volatile signed __int64 *)&PspSiloMonitorLock, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx(
               (signed __int64 *)&PspSiloMonitorLock,
               0,
               v1,
               (unsigned __int64)&PspSiloMonitorLock);
  if ( v1 )
    *((_BYTE *)v1 + 10) = 1;
  return result;
}
