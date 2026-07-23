/*
 * XREFs of HalpPmuArbiterPeriodicWorkItem @ 0x1406FBDF0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     HalpReleasePmuAccessRequest @ 0x140543930 (HalpReleasePmuAccessRequest.c)
 *     HalpNotifyActorIfPmuAvailable @ 0x1406FBAE0 (HalpNotifyActorIfPmuAvailable.c)
 *     HalpRequestPmuAccess @ 0x1406FC060 (HalpRequestPmuAccess.c)
 */

void HalpPmuArbiterPeriodicWorkItem()
{
  struct _KTHREAD *CurrentThread; // rax
  char *v1; // rax
  signed __int8 v2; // cf
  char *v3; // rbx
  __int64 v4; // rbx
  __int128 v5; // rtt
  LARGE_INTEGER PerformanceFrequency; // [rsp+38h] [rbp+10h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = (char *)KeAbPreAcquire((__int64)&HalpPmuArbiter, 0LL);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)&HalpPmuArbiter, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(&HalpPmuArbiter, v1, (__int64)&HalpPmuArbiter);
  if ( v3 )
    v3[10] = 1;
  if ( dword_140FC1FF0 == 3 && !dword_140FC1FEC )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HalpPmuArbiter, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&HalpPmuArbiter);
    KeAbPostRelease((ULONG_PTR)&HalpPmuArbiter);
    KeLeaveCriticalRegion();
    goto LABEL_17;
  }
  if ( dword_140FC1FF0 == 2
    && (unsigned int)dword_140FC2008 > 1
    && (v4 = *((_QWORD *)&xmmword_140FC2050 + 1),
        v5 = 1000 * (*(_QWORD *)&KeQueryPerformanceCounter(&PerformanceFrequency) - v4),
        (__int64)(v5 / PerformanceFrequency.QuadPart) >= (unsigned int)dword_140FC2060) )
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
  _InterlockedExchange(&dword_140FC2038, 0);
}
