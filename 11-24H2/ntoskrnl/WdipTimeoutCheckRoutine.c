/*
 * XREFs of WdipTimeoutCheckRoutine @ 0x140A3D620
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ExSetTimer @ 0x1403B0B80 (ExSetTimer.c)
 *     WdipSemSqmLogInflightLimitExceededDataPoints @ 0x140A3D790 (WdipSemSqmLogInflightLimitExceededDataPoints.c)
 *     WdipSemDisableContextProviders @ 0x140A3DAC4 (WdipSemDisableContextProviders.c)
 *     WdipSemDeleteTransitionalInstance @ 0x140A3DB38 (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemMarkNextTimedOutInstanceForDeletion @ 0x140A3DC24 (WdipSemMarkNextTimedOutInstanceForDeletion.c)
 *     WdipSemLogTimeoutInformation @ 0x140A3DD3C (WdipSemLogTimeoutInformation.c)
 */

__int64 WdipTimeoutCheckRoutine()
{
  struct _KTHREAD *CurrentThread; // rax
  char *v1; // rbx
  signed __int64 v2; // rbx
  signed __int64 v3; // rdx
  ULONG_PTR v4; // rtt
  __int64 v6; // rdx
  __int64 TimedOutInstanceForDeletion; // rdi
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = (char *)KeAbPreAcquire((__int64)&WdipSemPushLock, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&WdipSemPushLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&WdipSemPushLock, 0, v1, (__int64)&WdipSemPushLock);
  if ( v1 )
    v1[10] = 1;
  WdipSemSqmLogInflightLimitExceededDataPoints();
  if ( WdipSemTimeoutEnabled )
  {
    TimedOutInstanceForDeletion = WdipSemMarkNextTimedOutInstanceForDeletion(&WdipSemEnabledInstanceTable);
    while ( TimedOutInstanceForDeletion )
    {
      LOBYTE(v6) = 1;
      WdipSemDisableContextProviders(TimedOutInstanceForDeletion, v6);
      v8 = TimedOutInstanceForDeletion;
      v9 = WdipSemMarkNextTimedOutInstanceForDeletion(TimedOutInstanceForDeletion);
      v10 = *(_QWORD *)(TimedOutInstanceForDeletion + 32);
      v11 = TimedOutInstanceForDeletion + 16;
      TimedOutInstanceForDeletion = v9;
      WdipSemLogTimeoutInformation(v10, *(unsigned __int16 *)(v10 + 16), v11);
      WdipSemDeleteTransitionalInstance(v8);
    }
  }
  v2 = WdipSemOneSecond * (WdipSemTimeoutValue / 0xAu);
  _m_prefetchw(&WdipSemPushLock);
  v3 = WdipSemPushLock - 16;
  if ( (WdipSemPushLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v3 = 0LL;
  if ( (WdipSemPushLock & 2) != 0
    || (v4 = WdipSemPushLock,
        v4 != _InterlockedCompareExchange64((volatile signed __int64 *)&WdipSemPushLock, v3, WdipSemPushLock)) )
  {
    ExfReleasePushLock(&WdipSemPushLock);
  }
  KeAbPostRelease((ULONG_PTR)&WdipSemPushLock);
  KeLeaveCriticalRegion();
  return ExSetTimer(WdipTimeoutTimer, v2, 0LL, (ULONG_PTR)&WdipTimeoutTimerParameters);
}
