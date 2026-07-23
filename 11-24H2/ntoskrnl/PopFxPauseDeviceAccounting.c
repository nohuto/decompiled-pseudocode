/*
 * XREFs of PopFxPauseDeviceAccounting @ 0x1403A67DC
 * Callers:
 *     PopFxStopDeviceAccounting @ 0x1402B79AC (PopFxStopDeviceAccounting.c)
 *     PdcPoCurrentPdcPhase @ 0x1405D5CC0 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     PopFxUpdateAccountingActiveTime @ 0x1403A7928 (PopFxUpdateAccountingActiveTime.c)
 *     PopFxMergeActiveTimeAccounting @ 0x1403A798C (PopFxMergeActiveTimeAccounting.c)
 *     PopFxSetGlobalDeviceAccountingEnabled @ 0x1404B9468 (PopFxSetGlobalDeviceAccountingEnabled.c)
 */

void PopFxPauseDeviceAccounting()
{
  struct _KTHREAD *CurrentThread; // rax
  char *v1; // rbx
  __int64 v2; // rbp
  ULONG_PTR i; // rbx
  KIRQL v4; // r11
  unsigned int j; // esi
  __int64 v6; // rdi
  KIRQL v7; // r11

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = (char *)KeAbPreAcquire((__int64)&PopFxDeviceListLock, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&PopFxDeviceListLock, 0, v1, (__int64)&PopFxDeviceListLock);
  if ( v1 )
    v1[10] = 1;
  v2 = MEMORY[0xFFFFF78000000008];
  for ( i = PopFxDeviceList; (ULONG_PTR *)i != &PopFxDeviceList; i = *(_QWORD *)i )
  {
    if ( *(_QWORD *)(i + 48) )
    {
      v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(i + 640));
      if ( *(_DWORD *)(i + 656) )
      {
        PopFxUpdateAccountingActiveTime(i + 640, v2, 1200000000LL);
        PopFxMergeActiveTimeAccounting();
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(i + 640), v4);
      for ( j = 0; j < *(_DWORD *)(i + 868); ++j )
      {
        v6 = *(_QWORD *)(*(_QWORD *)(i + 872) + 8LL * j) + 200LL;
        v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v6);
        if ( *(_DWORD *)(v6 + 16) )
        {
          PopFxUpdateAccountingActiveTime(v6, v2, 1200000000LL);
          PopFxMergeActiveTimeAccounting();
        }
        KeReleaseSpinLock((PKSPIN_LOCK)v6, v7);
      }
    }
  }
  PopFxSetGlobalDeviceAccountingEnabled(0LL);
  PopFxDeviceAccountingPaused = 1;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  KeLeaveCriticalRegion();
}
