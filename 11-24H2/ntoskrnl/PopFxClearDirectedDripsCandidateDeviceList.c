/*
 * XREFs of PopFxClearDirectedDripsCandidateDeviceList @ 0x1404879E0
 * Callers:
 *     PopDirectedDripsEngage @ 0x14048797C (PopDirectedDripsEngage.c)
 *     PopDirectedDripsResumeDevices @ 0x140A35FB0 (PopDirectedDripsResumeDevices.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

void PopFxClearDirectedDripsCandidateDeviceList()
{
  struct _KTHREAD *CurrentThread; // rax
  char *v1; // rax
  signed __int8 v2; // cf
  char *v3; // rdi
  char *v4; // rax
  char *v5; // rdi
  ULONG_PTR i; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = (char *)KeAbPreAcquire((__int64)&PopFxBlockingDeviceListLock, 0LL);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)&PopFxBlockingDeviceListLock, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(&PopFxBlockingDeviceListLock, v1, (__int64)&PopFxBlockingDeviceListLock);
  if ( v3 )
    v3[10] = 1;
  v4 = (char *)KeAbPreAcquire((__int64)&PopFxDeviceListLock, 0LL);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)&PopFxDeviceListLock, 0LL);
  v5 = v4;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(&PopFxDeviceListLock, v4, (__int64)&PopFxDeviceListLock);
  if ( v5 )
    v5[10] = 1;
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
