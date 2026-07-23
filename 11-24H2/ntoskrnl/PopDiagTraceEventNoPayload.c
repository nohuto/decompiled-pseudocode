/*
 * XREFs of PopDiagTraceEventNoPayload @ 0x1404874D4
 * Callers:
 *     PopScanIdleList @ 0x1404E1E10 (PopScanIdleList.c)
 *     PopThermalStandbyNotify @ 0x1405D14B0 (PopThermalStandbyNotify.c)
 *     PopDiagTracePrepareSleepEnd @ 0x1406F9984 (PopDiagTracePrepareSleepEnd.c)
 *     PopCoalescingNotify @ 0x14074F2C0 (PopCoalescingNotify.c)
 *     PopResumeApps @ 0x140751DDC (PopResumeApps.c)
 *     PopSetSystemAwayMode @ 0x1407520E0 (PopSetSystemAwayMode.c)
 *     PopSuspendApps @ 0x1407521E8 (PopSuspendApps.c)
 *     PopSuspendServices @ 0x14075223C (PopSuspendServices.c)
 *     PopDiagTraceDevicesWakeEnd @ 0x140754214 (PopDiagTraceDevicesWakeEnd.c)
 *     PopDiagTraceSuspendResumeNotification @ 0x140756660 (PopDiagTraceSuspendResumeNotification.c)
 *     PopResumeServices @ 0x1409A0338 (PopResumeServices.c)
 *     PopDiagTraceIoCoalescingOff @ 0x140AA3FB8 (PopDiagTraceIoCoalescingOff.c)
 *     PopDispatchSuperfetchNotification @ 0x140AA72C8 (PopDispatchSuperfetchNotification.c)
 *     PopNotifyCallbacksPreSleep @ 0x140AB5630 (PopNotifyCallbacksPreSleep.c)
 *     PopDiagTracePrepareSleep @ 0x140ABB088 (PopDiagTracePrepareSleep.c)
 *     PopPowerInformationInternal @ 0x140AC2410 (PopPowerInformationInternal.c)
 *     PopDiagTraceFlushSleepStudyLogger @ 0x140B4D3A0 (PopDiagTraceFlushSleepStudyLogger.c)
 *     PopGracefulShutdown @ 0x140B5DAF8 (PopGracefulShutdown.c)
 *     PopDiagTraceGracefulShutdown @ 0x140B61C94 (PopDiagTraceGracefulShutdown.c)
 *     PopDiagTraceZeroHiberFile @ 0x140B61E50 (PopDiagTraceZeroHiberFile.c)
 *     PopDiagTraceZeroHiberFileEnd @ 0x140B61E6C (PopDiagTraceZeroHiberFileEnd.c)
 *     PoBroadcastSystemState @ 0x140B66DA4 (PoBroadcastSystemState.c)
 *     PopTransitionToSleep @ 0x140B67570 (PopTransitionToSleep.c)
 *     PopFlushVolumes @ 0x140B69E80 (PopFlushVolumes.c)
 *     PopBuildDeviceNotifyList @ 0x140B6AED8 (PopBuildDeviceNotifyList.c)
 *     PopDiagTraceFlushSleepStudyLoggerEnd @ 0x140B6F5E8 (PopDiagTraceFlushSleepStudyLoggerEnd.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 */

void __fastcall PopDiagTraceEventNoPayload(PCEVENT_DESCRIPTOR EventDescriptor)
{
  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, EventDescriptor) )
      EtwWriteEx(PopDiagHandle, EventDescriptor, 0LL, 0, 0LL, 0LL, 0, 0LL);
  }
}
