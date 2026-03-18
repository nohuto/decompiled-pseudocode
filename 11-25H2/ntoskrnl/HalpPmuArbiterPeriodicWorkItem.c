/*
 * XREFs of HalpPmuArbiterPeriodicWorkItem @ 0x1406F23C0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     HalpReleasePmuAccessRequest @ 0x140543780 (HalpReleasePmuAccessRequest.c)
 *     HalpNotifyActorIfPmuAvailable @ 0x1406F20B0 (HalpNotifyActorIfPmuAvailable.c)
 *     HalpRequestPmuAccess @ 0x1406F2630 (HalpRequestPmuAccess.c)
 */

void HalpPmuArbiterPeriodicWorkItem()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v1; // rax
  signed __int8 v2; // cf
  __int64 *v3; // rbx
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
    ExfAcquirePushLockExclusiveEx(&HalpPmuArbiter, v1, (__int64)&HalpPmuArbiter);
  if ( v3 )
    *((_BYTE *)v3 + 10) = 1;
  if ( dword_140FC15F0 == 3 && !dword_140FC15EC )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HalpPmuArbiter, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&HalpPmuArbiter);
    KeAbPostRelease((ULONG_PTR)&HalpPmuArbiter);
    KeLeaveCriticalRegion();
    goto LABEL_17;
  }
  if ( dword_140FC15F0 == 2
    && (unsigned int)dword_140FC1608 > 1
    && (v4 = *((_QWORD *)&xmmword_140FC1650 + 1),
        v5 = 1000 * (*(_QWORD *)&KeQueryPerformanceCounter(&PerformanceFrequency) - v4),
        (__int64)(v5 / PerformanceFrequency.QuadPart) >= (unsigned int)dword_140FC1660) )
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
  _InterlockedExchange(&dword_140FC1638, 0);
}
