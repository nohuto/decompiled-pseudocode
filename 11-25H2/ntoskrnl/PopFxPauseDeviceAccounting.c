/*
 * XREFs of PopFxPauseDeviceAccounting @ 0x1403561B8
 * Callers:
 *     PopFxStopDeviceAccounting @ 0x1404266B8 (PopFxStopDeviceAccounting.c)
 *     PdcPoCurrentPdcPhase @ 0x1405D3DC0 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     PopFxSetGlobalDeviceAccountingEnabled @ 0x140355C34 (PopFxSetGlobalDeviceAccountingEnabled.c)
 *     PopFxMergeActiveTimeAccounting @ 0x140356174 (PopFxMergeActiveTimeAccounting.c)
 *     PopFxUpdateAccountingActiveTime @ 0x140356594 (PopFxUpdateAccountingActiveTime.c)
 */

void PopFxPauseDeviceAccounting()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v1; // rbx
  __int64 v2; // rbp
  ULONG_PTR i; // rbx
  KIRQL v4; // r11
  _QWORD *v5; // rcx
  unsigned int j; // esi
  __int64 v7; // rdi
  KIRQL v8; // r11
  _QWORD *v9; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((__int64)&PopFxDeviceListLock, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&PopFxDeviceListLock, 0, v1, (unsigned __int64)&PopFxDeviceListLock);
  if ( v1 )
    *((_BYTE *)v1 + 10) = 1;
  v2 = MEMORY[0xFFFFF78000000008];
  for ( i = PopFxDeviceList; (ULONG_PTR *)i != &PopFxDeviceList; i = *(_QWORD *)i )
  {
    if ( *(_QWORD *)(i + 48) )
    {
      v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(i + 640));
      if ( *(_DWORD *)(i + 656) )
      {
        PopFxUpdateAccountingActiveTime(i + 640, v2, 1200000000LL);
        PopFxMergeActiveTimeAccounting(v5);
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(i + 640), v4);
      for ( j = 0; j < *(_DWORD *)(i + 868); ++j )
      {
        v7 = *(_QWORD *)(*(_QWORD *)(i + 872) + 8LL * j) + 200LL;
        v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v7);
        if ( *(_DWORD *)(v7 + 16) )
        {
          PopFxUpdateAccountingActiveTime(v7, v2, 1200000000LL);
          PopFxMergeActiveTimeAccounting(v9);
        }
        KeReleaseSpinLock((PKSPIN_LOCK)v7, v8);
      }
    }
  }
  PopFxSetGlobalDeviceAccountingEnabled(0);
  PopFxDeviceAccountingPaused = 1;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  KeLeaveCriticalRegion();
}
