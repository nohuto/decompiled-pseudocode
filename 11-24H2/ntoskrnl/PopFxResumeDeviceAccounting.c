/*
 * XREFs of PopFxResumeDeviceAccounting @ 0x1404854CC
 * Callers:
 *     PopFxStartDeviceAccounting @ 0x140492E8C (PopFxStartDeviceAccounting.c)
 *     PdcPoCurrentPdcPhase @ 0x1405D5CC0 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     PopFxSetGlobalDeviceAccountingEnabled @ 0x1404B9468 (PopFxSetGlobalDeviceAccountingEnabled.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void PopFxResumeDeviceAccounting()
{
  struct _KTHREAD *CurrentThread; // rax
  char *v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rbp
  ULONG_PTR i; // rbx
  KIRQL v5; // si
  unsigned int j; // esi
  __int64 v7; // rdi
  KIRQL v8; // r14

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = (char *)KeAbPreAcquire((__int64)&PopFxDeviceListLock, 0LL);
  v2 = 17LL;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&PopFxDeviceListLock, 0, v1, (__int64)&PopFxDeviceListLock);
  if ( v1 )
    v1[10] = 1;
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
