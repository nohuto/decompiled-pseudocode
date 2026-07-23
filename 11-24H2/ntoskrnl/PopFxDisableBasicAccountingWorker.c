/*
 * XREFs of PopFxDisableBasicAccountingWorker @ 0x1405CE850
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     PopFxReinitializeAccountingInstance @ 0x1403A5DA8 (PopFxReinitializeAccountingInstance.c)
 */

void PopFxDisableBasicAccountingWorker()
{
  struct _KTHREAD *CurrentThread; // rax
  char *v1; // rbx
  ULONG_PTR i; // rbx
  unsigned int j; // esi
  __int64 v4; // rdi
  KIRQL v5; // bp

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = (char *)KeAbPreAcquire((__int64)&PopFxDeviceListLock, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&PopFxDeviceListLock, 0, v1, (__int64)&PopFxDeviceListLock);
  if ( v1 )
    v1[10] = 1;
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
