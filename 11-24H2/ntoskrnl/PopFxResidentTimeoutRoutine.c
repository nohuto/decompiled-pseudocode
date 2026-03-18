/*
 * XREFs of PopFxResidentTimeoutRoutine @ 0x1403B4720
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     RtlGetInterruptTimePrecise @ 0x14033CC90 (RtlGetInterruptTimePrecise.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     PopFxIdleComponent @ 0x1403B4888 (PopFxIdleComponent.c)
 *     PopFxArmResidentTimer @ 0x140483290 (PopFxArmResidentTimer.c)
 */

__int64 PopFxResidentTimeoutRoutine()
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v1; // rbx
  __int64 InterruptTimePrecise; // rax
  ULONG_PTR v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rdx
  unsigned int i; // edi
  __int64 v7; // rcx
  unsigned __int64 v9; // [rsp+70h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((__int64)&PopFxDeviceListLock, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&PopFxDeviceListLock, 0, v1, (__int64)&PopFxDeviceListLock);
  if ( v1 )
    *((_BYTE *)v1 + 10) = 1;
  if ( (ULONG_PTR *)PopFxDeviceList != &PopFxDeviceList )
  {
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&v9);
    v3 = PopFxDeviceList;
    v4 = InterruptTimePrecise;
    while ( (ULONG_PTR *)v3 != &PopFxDeviceList )
    {
      for ( i = 0; i < *(_DWORD *)(v3 + 868); ++i )
      {
        v5 = *(_QWORD *)(*(_QWORD *)(v3 + 872) + 8LL * i);
        if ( *(int *)(v5 + 96) > 0
          && v4 - *(_QWORD *)(v5 + 144) >= (unsigned __int64)(unsigned int)PopFxActiveIdleThreshold )
        {
          _InterlockedAdd((volatile signed __int32 *)(v5 + 96), 0xFFFFFFFF);
          _InterlockedAdd(&PopFxResidentComponentCount, 0xFFFFFFFF);
          PopFxIdleComponent(v3, i);
        }
      }
      v3 = *(_QWORD *)v3;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  KeLeaveCriticalRegion();
  LOBYTE(v7) = 1;
  return PopFxArmResidentTimer(v7);
}
