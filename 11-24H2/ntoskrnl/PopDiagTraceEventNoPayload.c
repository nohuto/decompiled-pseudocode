/*
 * XREFs of PopDiagTraceEventNoPayload @ 0x14048C7B4
 * Callers:
 *     PopScanIdleList @ 0x1404EAE90 (PopScanIdleList.c)
 *     PopThermalStandbyNotify @ 0x1405D3D30 (PopThermalStandbyNotify.c)
 *     PopDiagTracePrepareSleepEnd @ 0x1406FBD44 (PopDiagTracePrepareSleepEnd.c)
 *     PopCoalescingNotify @ 0x140750FA0 (PopCoalescingNotify.c)
 *     PopResumeApps @ 0x140753ABC (PopResumeApps.c)
 *     PopSetSystemAwayMode @ 0x140753DC0 (PopSetSystemAwayMode.c)
 *     PopSuspendApps @ 0x140753EC8 (PopSuspendApps.c)
 *     PopSuspendServices @ 0x140753F1C (PopSuspendServices.c)
 *     PopDiagTraceDevicesWakeEnd @ 0x140755EB4 (PopDiagTraceDevicesWakeEnd.c)
 *     PopDiagTraceSuspendResumeNotification @ 0x1407581E0 (PopDiagTraceSuspendResumeNotification.c)
 *     PopResumeServices @ 0x1409B9CE8 (PopResumeServices.c)
 *     PopDiagTraceIoCoalescingOff @ 0x140AA8F0C (PopDiagTraceIoCoalescingOff.c)
 *     PopDispatchSuperfetchNotification @ 0x140AAC290 (PopDispatchSuperfetchNotification.c)
 *     PopNotifyCallbacksPreSleep @ 0x140ABA610 (PopNotifyCallbacksPreSleep.c)
 *     PopDiagTracePrepareSleep @ 0x140ABFFA8 (PopDiagTracePrepareSleep.c)
 *     PopPowerInformationInternal @ 0x140AC4A30 (PopPowerInformationInternal.c)
 *     PopDiagTraceFlushSleepStudyLogger @ 0x140B4B360 (PopDiagTraceFlushSleepStudyLogger.c)
 *     PopGracefulShutdown @ 0x140B5BA88 (PopGracefulShutdown.c)
 *     PopDiagTraceGracefulShutdown @ 0x140B5FC14 (PopDiagTraceGracefulShutdown.c)
 *     PopDiagTraceZeroHiberFile @ 0x140B5FD84 (PopDiagTraceZeroHiberFile.c)
 *     PopDiagTraceZeroHiberFileEnd @ 0x140B5FDA0 (PopDiagTraceZeroHiberFileEnd.c)
 *     PoBroadcastSystemState @ 0x140B64C6C (PoBroadcastSystemState.c)
 *     PopTransitionToSleep @ 0x140B65430 (PopTransitionToSleep.c)
 *     PopFlushVolumes @ 0x140B67D40 (PopFlushVolumes.c)
 *     PopBuildDeviceNotifyList @ 0x140B697C8 (PopBuildDeviceNotifyList.c)
 *     PopDiagTraceFlushSleepStudyLoggerEnd @ 0x140B6DD48 (PopDiagTraceFlushSleepStudyLoggerEnd.c)
 * Callees:
 *     EtwWriteEx @ 0x140259680 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 */

void __fastcall PopDiagTraceEventNoPayload(PCEVENT_DESCRIPTOR EventDescriptor)
{
  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, EventDescriptor) )
      EtwWriteEx(PopDiagHandle, EventDescriptor, 0LL, 0, 0LL, 0LL, 0, 0LL);
  }
}
