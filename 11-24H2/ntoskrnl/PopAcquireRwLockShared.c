/*
 * XREFs of PopAcquireRwLockShared @ 0x1402AE968
 * Callers:
 *     PpmIdleUpdateSystemLatencyLimit @ 0x1402AEDA4 (PpmIdleUpdateSystemLatencyLimit.c)
 *     PpmQueryPlatformStateResidency @ 0x1402B5BB4 (PpmQueryPlatformStateResidency.c)
 *     PopThermalUpdateTimerPolicy @ 0x14041C60C (PopThermalUpdateTimerPolicy.c)
 *     PoIssueCoalescingNotification @ 0x14043DCBC (PoIssueCoalescingNotification.c)
 *     PopThermalTraceRundownEvents @ 0x14049FF80 (PopThermalTraceRundownEvents.c)
 *     PopFanSxEntry @ 0x1404AEC4C (PopFanSxEntry.c)
 *     PopFanSxExit @ 0x1404CA484 (PopFanSxExit.c)
 *     PopThermalSxEntry @ 0x1404D31A8 (PopThermalSxEntry.c)
 *     PopThermalSxExit @ 0x1405D1508 (PopThermalSxExit.c)
 *     PopThermalTelemetryWorker @ 0x1405D1700 (PopThermalTelemetryWorker.c)
 *     PoQueryPowerLimitAttributes @ 0x140748F50 (PoQueryPowerLimitAttributes.c)
 *     PopPowerAggregatorHandleModernStandbyIntent @ 0x140757B40 (PopPowerAggregatorHandleModernStandbyIntent.c)
 *     PopBatteryEtwCallback @ 0x140759470 (PopBatteryEtwCallback.c)
 *     PopCurrentSystemPowerSourceState @ 0x140759D4C (PopCurrentSystemPowerSourceState.c)
 *     PopEtProcessEnumSnapshotCallback @ 0x140860740 (PopEtProcessEnumSnapshotCallback.c)
 *     PopEtInternerLock @ 0x14099CA10 (PopEtInternerLock.c)
 *     PopEtGetNextEnergyTracker @ 0x14099CED4 (PopEtGetNextEnergyTracker.c)
 *     PpmWmiGetAllData @ 0x1409B38B0 (PpmWmiGetAllData.c)
 *     PoThermalCounterSetCallback @ 0x1409F7180 (PoThermalCounterSetCallback.c)
 *     PopProcessorInformation @ 0x1409F8FB0 (PopProcessorInformation.c)
 *     PopCurrentPowerState @ 0x140A20120 (PopCurrentPowerState.c)
 *     PopDiagTraceControlCallback @ 0x140A2CF10 (PopDiagTraceControlCallback.c)
 *     PopAcquirePowerRequestPushLock @ 0x140A473B0 (PopAcquirePowerRequestPushLock.c)
 *     PopBatteryDeviceState @ 0x140A5A0BC (PopBatteryDeviceState.c)
 *     PopBootBatteryStatusWorker @ 0x140A69400 (PopBootBatteryStatusWorker.c)
 *     PopFanReadFanNoiseInfo @ 0x140A73098 (PopFanReadFanNoiseInfo.c)
 *     PopGetPowerRequestListInfo @ 0x140A76148 (PopGetPowerRequestListInfo.c)
 *     PopTransitionTelemetryOsState @ 0x140A80E74 (PopTransitionTelemetryOsState.c)
 *     PopMeasureEnergyChange @ 0x140A81364 (PopMeasureEnergyChange.c)
 *     PoQueryProcessEnergyTrackingState @ 0x140A91254 (PoQueryProcessEnergyTrackingState.c)
 *     PopThermalZoneUpdateCoolingPolicy @ 0x140A96C04 (PopThermalZoneUpdateCoolingPolicy.c)
 *     PopGetEnergyCounter @ 0x140A97190 (PopGetEnergyCounter.c)
 *     PopEsStartTelemetry @ 0x140AA8B50 (PopEsStartTelemetry.c)
 *     PopIsDetailedSleepReliabilityDiagEnabled @ 0x140AB1098 (PopIsDetailedSleepReliabilityDiagEnabled.c)
 *     PopDirectedDripsUmMarkTestDevices @ 0x140AB1B4C (PopDirectedDripsUmMarkTestDevices.c)
 *     PopEsEnterSleepShutdown @ 0x140AB2788 (PopEsEnterSleepShutdown.c)
 *     PopSleepstudyCaptureResiliencyStatistics @ 0x140AB8394 (PopSleepstudyCaptureResiliencyStatistics.c)
 *     PopBatteryWorker @ 0x140AC5DB0 (PopBatteryWorker.c)
 *     PpmEventTraceControlCallback @ 0x140AC8550 (PpmEventTraceControlCallback.c)
 *     PopQueryLastStateTransitionInfo @ 0x140B61324 (PopQueryLastStateTransitionInfo.c)
 *     PopIsStateTransitionBlockingThread @ 0x140B6B870 (PopIsStateTransitionBlockingThread.c)
 *     PopDiagInitialize @ 0x140C30FC0 (PopDiagInitialize.c)
 *     PopFanReportBootStartDevices @ 0x140C34524 (PopFanReportBootStartDevices.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 */

__int64 __fastcall PopAcquireRwLockShared(volatile signed __int64 *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rbx
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire(a1, 0LL, 0LL);
  result = _InterlockedCompareExchange64(a1, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx(a1, 0LL, v3, a1);
  if ( v3 )
    *(_BYTE *)(v3 + 10) = 1;
  return result;
}
