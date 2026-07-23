/*
 * XREFs of ExTryAcquireTimeRefreshLockExclusive @ 0x1407B64D0
 * Callers:
 *     KdpTimeSlipWork @ 0x140B7A650 (KdpTimeSlipWork.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     KeAbPostReleaseEx @ 0x14028D2F0 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 */

char ExTryAcquireTimeRefreshLockExclusive()
{
  struct _KTHREAD *CurrentThread; // rax
  char v1; // bl
  _QWORD *v2; // rax

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
