/*
 * XREFs of HalpTscFallbackToPlatformSource @ 0x1405495E4
 * Callers:
 *     HalpTimerReportIdleStateUsage @ 0x1404B4EA0 (HalpTimerReportIdleStateUsage.c)
 *     HalpTimerInitSystem @ 0x14053AFA0 (HalpTimerInitSystem.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1402105E0 (KeQueryActiveProcessorCountEx.c)
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeIpiGenericCall @ 0x1404677F0 (KeIpiGenericCall.c)
 *     HalpTimerSchedulePeriodicQueries @ 0x14053B720 (HalpTimerSchedulePeriodicQueries.c)
 *     HalpTscTraceStatus @ 0x140549C38 (HalpTscTraceStatus.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 __fastcall HalpTscFallbackToPlatformSource(PCEVENT_DESCRIPTOR EventDescriptor)
{
  KIRQL v2; // bl
  ULONG_PTR Context[2]; // [rsp+20h] [rbp-28h] BYREF

  *(_OWORD *)Context = 0LL;
  HIDWORD(Context[0]) = KeQueryActiveProcessorCountEx(0xFFFFu);
  LODWORD(Context[0]) = HIDWORD(Context[0]);
  v2 = KeAcquireSpinLockRaiseToDpc(&HalpTscFallbackLock);
  KeIpiGenericCall((PKIPI_BROADCAST_WORKER)HalpTscFallback, (ULONG_PTR)Context);
  HalpTimerSchedulePeriodicQueries();
  KeReleaseSpinLock(&HalpTscFallbackLock, v2);
  return HalpTscTraceStatus(EventDescriptor);
}
