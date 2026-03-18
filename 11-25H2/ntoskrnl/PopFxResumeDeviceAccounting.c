/*
 * XREFs of PopFxResumeDeviceAccounting @ 0x140355A94
 * Callers:
 *     PopFxStartDeviceAccounting @ 0x14049884C (PopFxStartDeviceAccounting.c)
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
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

void PopFxResumeDeviceAccounting()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rbp
  ULONG_PTR i; // rbx
  KIRQL v5; // si
  unsigned int j; // esi
  __int64 v7; // rdi
  KIRQL v8; // r14

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((__int64)&PopFxDeviceListLock, 0LL);
  v2 = 17LL;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&PopFxDeviceListLock, 0, v1, (unsigned __int64)&PopFxDeviceListLock);
  if ( v1 )
    *((_BYTE *)v1 + 10) = 1;
  v3 = MEMORY[0xFFFFF78000000008];
  for ( i = PopFxDeviceList; (ULONG_PTR *)i != &PopFxDeviceList; i = *(_QWORD *)i )
  {
    if ( *(_QWORD *)(i + 48) )
    {
      v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(i + 640));
      if ( *(_DWORD *)(i + 656) )
      {
        memset_0((void *)(i + 768), 0, 0x60uLL);
        if ( *(_BYTE *)(i + 648) )
          *(_QWORD *)(i + 664) = v3;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(i + 640), v5);
      for ( j = 0; j < *(_DWORD *)(i + 868); ++j )
      {
        v7 = *(_QWORD *)(*(_QWORD *)(i + 872) + 8LL * j) + 200LL;
        v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v7);
        if ( *(_DWORD *)(v7 + 16) )
        {
          memset_0((void *)(v7 + 128), 0, 0x60uLL);
          if ( *(_BYTE *)(v7 + 8) )
            *(_QWORD *)(v7 + 24) = v3;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)v7, v8);
      }
    }
  }
  LOBYTE(v2) = 1;
  PopFxSetGlobalDeviceAccountingEnabled(v2);
  PopFxDeviceAccountingPaused = 0;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  KeLeaveCriticalRegion();
}
