/*
 * XREFs of PopFxStartDeviceAccounting @ 0x1404984AC
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14032DC2C (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     PopFxResumeDeviceAccounting @ 0x14048A6A4 (PopFxResumeDeviceAccounting.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

void PopFxStartDeviceAccounting()
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v1; // rbx
  __int64 v2; // rbp
  ULONG_PTR i; // rbx
  KIRQL v4; // al
  KIRQL v5; // si
  unsigned int j; // esi
  __int64 v7; // rdi
  KIRQL v8; // r14

  if ( PopFxAccountingGroup )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v1 = KeAbPreAcquire((__int64)&PopFxDeviceListLock, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&PopFxDeviceListLock, 0, v1, (__int64)&PopFxDeviceListLock);
    if ( v1 )
      *((_BYTE *)v1 + 10) = 1;
    v2 = MEMORY[0xFFFFF78000000008];
    for ( i = PopFxDeviceList; (ULONG_PTR *)i != &PopFxDeviceList; i = *(_QWORD *)i )
    {
      if ( *(_QWORD *)(i + 48) )
      {
        v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(i + 640));
        if ( *(_DWORD *)(i + 656) )
        {
          memset_0((void *)(i + 672), 0, 0x60uLL);
          memset_0((void *)(i + 768), 0, 0x60uLL);
          if ( *(_BYTE *)(i + 648) )
            *(_QWORD *)(i + 664) = v2;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)(i + 640), v5);
        for ( j = 0; j < *(_DWORD *)(i + 868); ++j )
        {
          v7 = *(_QWORD *)(*(_QWORD *)(i + 872) + 8LL * j) + 200LL;
          v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v7);
          if ( *(_DWORD *)(v7 + 16) )
          {
            memset_0((void *)(v7 + 32), 0, 0x60uLL);
            memset_0((void *)(v7 + 128), 0, 0x60uLL);
            if ( *(_BYTE *)(v7 + 8) )
              *(_QWORD *)(v7 + 24) = v2;
          }
          KeReleaseSpinLock((PKSPIN_LOCK)v7, v8);
        }
      }
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
    KeLeaveCriticalRegion();
    v4 = KeAcquireSpinLockRaiseToDpc(&PopFxGlobalDeviceAccountingLock);
    qword_140F0D7D0 = 0LL;
    qword_140F0D800 = 0LL;
    qword_140F0D828 = 0LL;
    qword_140F0D7D8 = 0LL;
    xmmword_140F0D7E0 = 0LL;
    xmmword_140F0D7F0 = 0LL;
    xmmword_140F0D808 = 0LL;
    xmmword_140F0D818 = 0LL;
    KeReleaseSpinLock(&PopFxGlobalDeviceAccountingLock, v4);
    if ( PopFxAccountingGroup == 1 )
      PopFxResumeDeviceAccounting();
  }
}
