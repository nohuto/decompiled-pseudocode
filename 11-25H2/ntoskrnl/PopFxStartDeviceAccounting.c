/*
 * XREFs of PopFxStartDeviceAccounting @ 0x14049884C
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140485908 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     PopFxResumeDeviceAccounting @ 0x140355A94 (PopFxResumeDeviceAccounting.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

void PopFxStartDeviceAccounting()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v1; // rbx
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
      ExfAcquirePushLockSharedEx((signed __int64 *)&PopFxDeviceListLock, 0, v1, (unsigned __int64)&PopFxDeviceListLock);
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
    qword_140F0CE90 = 0LL;
    qword_140F0CEC0 = 0LL;
    qword_140F0CEE8 = 0LL;
    qword_140F0CE98 = 0LL;
    xmmword_140F0CEA0 = 0LL;
    xmmword_140F0CEB0 = 0LL;
    xmmword_140F0CEC8 = 0LL;
    xmmword_140F0CED8 = 0LL;
    KeReleaseSpinLock(&PopFxGlobalDeviceAccountingLock, v4);
    if ( PopFxAccountingGroup == 1 )
      PopFxResumeDeviceAccounting();
  }
}
