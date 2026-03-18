/*
 * XREFs of PopFxDisableBasicAccountingWorker @ 0x1405D1130
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     PopFxReinitializeAccountingInstance @ 0x1404A66AC (PopFxReinitializeAccountingInstance.c)
 */

void PopFxDisableBasicAccountingWorker()
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v1; // rbx
  ULONG_PTR i; // rbx
  unsigned int j; // esi
  __int64 v4; // rdi
  KIRQL v5; // bp

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((__int64)&PopFxDeviceListLock, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&PopFxDeviceListLock, 0, v1, (__int64)&PopFxDeviceListLock);
  if ( v1 )
    *((_BYTE *)v1 + 10) = 1;
  for ( i = PopFxDeviceList; (ULONG_PTR *)i != &PopFxDeviceList; i = *(_QWORD *)i )
  {
    for ( j = 0; j < *(_DWORD *)(i + 868); ++j )
    {
      v4 = *(_QWORD *)(*(_QWORD *)(i + 872) + 8LL * j) + 200LL;
      v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v4);
      if ( *(_DWORD *)(v4 + 16) == 1 )
        PopFxReinitializeAccountingInstance(v4, 0);
      KeReleaseSpinLock((PKSPIN_LOCK)v4, v5);
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  KeLeaveCriticalRegion();
}
