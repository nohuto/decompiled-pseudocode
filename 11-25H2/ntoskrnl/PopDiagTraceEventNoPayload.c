/*
 * XREFs of PopDiagTraceEventNoPayload @ 0x140488BD4
 * Callers:
 *     PopScanIdleList @ 0x14048872C (PopScanIdleList.c)
 *     PopThermalStandbyNotify @ 0x1405CF320 (PopThermalStandbyNotify.c)
 *     PopDiagTracePrepareSleepEnd @ 0x1406EFF5C (PopDiagTracePrepareSleepEnd.c)
 *     PopCoalescingNotify @ 0x140744ED0 (PopCoalescingNotify.c)
 *     PopResumeApps @ 0x1407479CC (PopResumeApps.c)
 *     PopSetSystemAwayMode @ 0x140747CD0 (PopSetSystemAwayMode.c)
 *     PopSuspendApps @ 0x140747DD8 (PopSuspendApps.c)
 *     PopSuspendServices @ 0x140747E2C (PopSuspendServices.c)
 *     PopDiagTraceDevicesWakeEnd @ 0x140749E00 (PopDiagTraceDevicesWakeEnd.c)
 *     PopDiagTraceSuspendResumeNotification @ 0x14074C12C (PopDiagTraceSuspendResumeNotification.c)
 *     PopPowerInformationInternal @ 0x140A1B29C (PopPowerInformationInternal.c)
 *     PopResumeServices @ 0x140A2C744 (PopResumeServices.c)
 *     PopDiagTraceIoCoalescingOff @ 0x140AA3E84 (PopDiagTraceIoCoalescingOff.c)
 *     PopDispatchSuperfetchNotification @ 0x140AA6CD0 (PopDispatchSuperfetchNotification.c)
 *     PopNotifyCallbacksPreSleep @ 0x140AB62D0 (PopNotifyCallbacksPreSleep.c)
 *     PopDiagTracePrepareSleep @ 0x140ABBB78 (PopDiagTracePrepareSleep.c)
 *     PopDiagTraceFlushSleepStudyLogger @ 0x140B3B360 (PopDiagTraceFlushSleepStudyLogger.c)
 *     PopGracefulShutdown @ 0x140B4BB18 (PopGracefulShutdown.c)
 *     PopDiagTraceGracefulShutdown @ 0x140B4FAD4 (PopDiagTraceGracefulShutdown.c)
 *     PopDiagTraceZeroHiberFile @ 0x140B4FC58 (PopDiagTraceZeroHiberFile.c)
 *     PopDiagTraceZeroHiberFileEnd @ 0x140B4FC74 (PopDiagTraceZeroHiberFileEnd.c)
 *     PoBroadcastSystemState @ 0x140B54B5C (PoBroadcastSystemState.c)
 *     PopTransitionToSleep @ 0x140B55320 (PopTransitionToSleep.c)
 *     PopFlushVolumes @ 0x140B57F10 (PopFlushVolumes.c)
 *     PopBuildDeviceNotifyList @ 0x140B59988 (PopBuildDeviceNotifyList.c)
 *     PopDiagTraceFlushSleepStudyLoggerEnd @ 0x140B5EC94 (PopDiagTraceFlushSleepStudyLoggerEnd.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 */

void __fastcall PopDiagTraceEventNoPayload(PCEVENT_DESCRIPTOR EventDescriptor)
{
  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, EventDescriptor) )
      EtwWriteEx(PopDiagHandle, EventDescriptor, 0LL, 0, 0LL, 0LL, 0, 0LL);
  }
}
