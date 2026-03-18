/*
 * XREFs of HalpTscFallbackToPlatformSource @ 0x140546CF4
 * Callers:
 *     HalpTimerReportIdleStateUsage @ 0x1404B5400 (HalpTimerReportIdleStateUsage.c)
 *     HalpTimerInitSystem @ 0x1405387F0 (HalpTimerInitSystem.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     KeQueryActiveProcessorCountEx @ 0x1403AE660 (KeQueryActiveProcessorCountEx.c)
 *     KeIpiGenericCall @ 0x1404690A0 (KeIpiGenericCall.c)
 *     HalpTimerSchedulePeriodicQueries @ 0x140538F70 (HalpTimerSchedulePeriodicQueries.c)
 *     HalpTscTraceStatus @ 0x140547348 (HalpTscTraceStatus.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
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
