/*
 * XREFs of PopFxDisableBasicAccountingWorker @ 0x1405CC980
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     PopFxReinitializeAccountingInstance @ 0x140355E94 (PopFxReinitializeAccountingInstance.c)
 */

void PopFxDisableBasicAccountingWorker()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v1; // rbx
  ULONG_PTR i; // rbx
  unsigned int j; // esi
  __int64 v4; // rdi
  KIRQL v5; // bp

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((__int64)&PopFxDeviceListLock, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&PopFxDeviceListLock, 0, v1, (unsigned __int64)&PopFxDeviceListLock);
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
