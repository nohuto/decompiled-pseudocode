/*
 * XREFs of ExTryAcquireTimeRefreshLockExclusive @ 0x1407A6BE0
 * Callers:
 *     KdpTimeSlipWork @ 0x140B68650 (KdpTimeSlipWork.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KeAbPostReleaseEx @ 0x14027D430 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 */

char ExTryAcquireTimeRefreshLockExclusive()
{
  struct _KTHREAD *CurrentThread; // rax
  char v1; // bl
  __int64 *v2; // rax

  CurrentThread = KeGetCurrentThread();
  v1 = 1;
  --CurrentThread->KernelApcDisable;
  v2 = KeAbPreAcquire((__int64)&ExpTimeRefreshLock, 0LL);
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpTimeRefreshLock, 0LL) )
  {
    if ( v2 )
      KeAbPostReleaseEx((ULONG_PTR)&ExpTimeRefreshLock, (ULONG_PTR)v2);
    v1 = 0;
    KeLeaveCriticalRegion();
  }
  else if ( v2 )
  {
    *((_BYTE *)v2 + 10) = 1;
  }
  return v1;
}
