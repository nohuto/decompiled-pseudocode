/*
 * XREFs of HalpTscFallbackToPlatformSource @ 0x140546EA4
 * Callers:
 *     HalpTimerReportIdleStateUsage @ 0x1404AF6A0 (HalpTimerReportIdleStateUsage.c)
 *     HalpTimerInitSystem @ 0x1405387E0 (HalpTimerInitSystem.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeQueryActiveProcessorCountEx @ 0x140339940 (KeQueryActiveProcessorCountEx.c)
 *     KeIpiGenericCall @ 0x14045F290 (KeIpiGenericCall.c)
 *     HalpTimerSchedulePeriodicQueries @ 0x140539000 (HalpTimerSchedulePeriodicQueries.c)
 *     HalpTscTraceStatus @ 0x1405474F8 (HalpTscTraceStatus.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
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
