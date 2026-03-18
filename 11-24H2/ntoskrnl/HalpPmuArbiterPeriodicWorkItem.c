/*
 * XREFs of HalpPmuArbiterPeriodicWorkItem @ 0x1406FE1B0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     HalpReleasePmuAccessRequest @ 0x140546070 (HalpReleasePmuAccessRequest.c)
 *     HalpNotifyActorIfPmuAvailable @ 0x1406FDEA0 (HalpNotifyActorIfPmuAvailable.c)
 *     HalpRequestPmuAccess @ 0x1406FE420 (HalpRequestPmuAccess.c)
 */

void HalpPmuArbiterPeriodicWorkItem()
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v1; // rax
  signed __int8 v2; // cf
  _QWORD *v3; // rbx
  __int64 v4; // rbx
  __int128 v5; // rtt
  LARGE_INTEGER PerformanceFrequency; // [rsp+38h] [rbp+10h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((__int64)&HalpPmuArbiter, 0LL);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)&HalpPmuArbiter, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(&HalpPmuArbiter, (__int64)v1, (__int64)&HalpPmuArbiter);
  if ( v3 )
    *((_BYTE *)v3 + 10) = 1;
  if ( dword_140FC1D90 == 3 && !dword_140FC1D8C )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HalpPmuArbiter, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&HalpPmuArbiter);
    KeAbPostRelease((ULONG_PTR)&HalpPmuArbiter);
    KeLeaveCriticalRegion();
    goto LABEL_17;
  }
  if ( dword_140FC1D90 == 2
    && (unsigned int)dword_140FC1DA8 > 1
    && (v4 = *((_QWORD *)&xmmword_140FC1DF0 + 1),
        v5 = 1000 * (*(_QWORD *)&KeQueryPerformanceCounter(&PerformanceFrequency) - v4),
        (__int64)(v5 / PerformanceFrequency.QuadPart) >= (unsigned int)dword_140FC1E00) )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HalpPmuArbiter, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&HalpPmuArbiter);
    KeAbPostRelease((ULONG_PTR)&HalpPmuArbiter);
    KeLeaveCriticalRegion();
    if ( (int)HalpRequestPmuAccess() >= 0 )
    {
      HalpReleasePmuAccessRequest();
LABEL_17:
      HalpNotifyActorIfPmuAvailable(0LL, 0);
    }
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HalpPmuArbiter, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&HalpPmuArbiter);
    KeAbPostRelease((ULONG_PTR)&HalpPmuArbiter);
    KeLeaveCriticalRegion();
  }
  _InterlockedExchange(&dword_140FC1DD8, 0);
}
