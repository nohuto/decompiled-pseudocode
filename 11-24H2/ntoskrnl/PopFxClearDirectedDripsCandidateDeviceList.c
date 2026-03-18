/*
 * XREFs of PopFxClearDirectedDripsCandidateDeviceList @ 0x14048CCC0
 * Callers:
 *     PopDirectedDripsEngage @ 0x14048CC5C (PopDirectedDripsEngage.c)
 *     PopDirectedDripsResumeDevices @ 0x140A406D0 (PopDirectedDripsResumeDevices.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

void PopFxClearDirectedDripsCandidateDeviceList()
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v1; // rax
  signed __int8 v2; // cf
  _QWORD *v3; // rdi
  _QWORD *v4; // rax
  _QWORD *v5; // rdi
  ULONG_PTR i; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((__int64)&PopFxBlockingDeviceListLock, 0LL);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)&PopFxBlockingDeviceListLock, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(&PopFxBlockingDeviceListLock, (__int64)v1, (__int64)&PopFxBlockingDeviceListLock);
  if ( v3 )
    *((_BYTE *)v3 + 10) = 1;
  v4 = KeAbPreAcquire((__int64)&PopFxDeviceListLock, 0LL);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)&PopFxDeviceListLock, 0LL);
  v5 = v4;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(&PopFxDeviceListLock, (__int64)v4, (__int64)&PopFxDeviceListLock);
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
  for ( i = PopFxDeviceList; (ULONG_PTR *)i != &PopFxDeviceList; i = *(_QWORD *)i )
    _InterlockedAnd((volatile signed __int32 *)(i + 864), 0xFFFFFFBF);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxBlockingDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopFxBlockingDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxBlockingDeviceListLock);
  KeLeaveCriticalRegion();
}
