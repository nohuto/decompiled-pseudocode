/*
 * XREFs of PopDiagTraceFxRundown @ 0x14032E260
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14032DC2C (PopCaptureSleepStudyStatistics.c)
 *     PopDiagTraceControlCallback @ 0x140A37E50 (PopDiagTraceControlCallback.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     PopDiagTraceDeviceVerboseRundown @ 0x140A44ED4 (PopDiagTraceDeviceVerboseRundown.c)
 *     PopFxTraceDeviceRegistration @ 0x140A58DFC (PopFxTraceDeviceRegistration.c)
 *     PopDiagTraceFxPluginRegistration @ 0x140A95F94 (PopDiagTraceFxPluginRegistration.c)
 */

void __fastcall PopDiagTraceFxRundown(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rdx
  __int64 v4; // rbx
  ULONG_PTR *j; // rbx
  __int64 v6; // rbx
  __int64 v7; // r8
  ULONG_PTR *i; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !a1 )
  {
    v6 = KeAbPreAcquire(&PopFxPluginLock, 0LL, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxPluginLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&PopFxPluginLock, 0LL, v6, &PopFxPluginLock);
    if ( v6 )
      *(_BYTE *)(v6 + 10) = 1;
    for ( i = (ULONG_PTR *)PopFxPluginList; i != &PopFxPluginList; i = (ULONG_PTR *)*i )
    {
      LOBYTE(v7) = 1;
      PopDiagTraceFxPluginRegistration(i, i[3], v7);
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxPluginLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopFxPluginLock);
    KeAbPostRelease((ULONG_PTR)&PopFxPluginLock);
  }
  v4 = KeAbPreAcquire(&PopFxDeviceListLock, 0LL, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&PopFxDeviceListLock, 0LL, v4, &PopFxDeviceListLock);
  if ( v4 )
    *(_BYTE *)(v4 + 10) = 1;
  for ( j = (ULONG_PTR *)PopFxDeviceList; j != &PopFxDeviceList; j = (ULONG_PTR *)*j )
  {
    if ( j[6] )
    {
      if ( !a1 )
      {
        LOBYTE(v3) = 1;
        PopFxTraceDeviceRegistration(j, v3);
      }
      PopDiagTraceDeviceVerboseRundown(j, a1);
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  KeLeaveCriticalRegion();
}
