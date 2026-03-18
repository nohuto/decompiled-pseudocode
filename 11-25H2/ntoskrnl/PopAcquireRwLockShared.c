/*
 * XREFs of PopAcquireRwLockShared @ 0x140204514
 * Callers:
 *     PpmIdleUpdateSystemLatencyLimit @ 0x140203EC4 (PpmIdleUpdateSystemLatencyLimit.c)
 *     PopThermalUpdateTimerPolicy @ 0x140431F0C (PopThermalUpdateTimerPolicy.c)
 *     PoIssueCoalescingNotification @ 0x1404481D4 (PoIssueCoalescingNotification.c)
 *     PpmQueryPlatformStateResidency @ 0x140486BF4 (PpmQueryPlatformStateResidency.c)
 *     PopThermalTraceRundownEvents @ 0x1404A4CD0 (PopThermalTraceRundownEvents.c)
 *     PopFanSxEntry @ 0x1404B4AEC (PopFanSxEntry.c)
 *     PopFanSxExit @ 0x1404D1374 (PopFanSxExit.c)
 *     PopThermalSxEntry @ 0x1404DA77C (PopThermalSxEntry.c)
 *     PopThermalSxExit @ 0x1405CF378 (PopThermalSxExit.c)
 *     PopThermalTelemetryWorker @ 0x1405CF530 (PopThermalTelemetryWorker.c)
 *     PoQueryPowerLimitAttributes @ 0x14073EB50 (PoQueryPowerLimitAttributes.c)
 *     PopCurrentSystemPowerSourceState @ 0x14074EA10 (PopCurrentSystemPowerSourceState.c)
 *     PopEtProcessEnumSnapshotCallback @ 0x1408DFB00 (PopEtProcessEnumSnapshotCallback.c)
 *     PopEtInternerLock @ 0x1409621F0 (PopEtInternerLock.c)
 *     PopEtGetNextEnergyTracker @ 0x1409626E4 (PopEtGetNextEnergyTracker.c)
 *     PpmWmiGetAllData @ 0x1409B6590 (PpmWmiGetAllData.c)
 *     PoThermalCounterSetCallback @ 0x1409FB460 (PoThermalCounterSetCallback.c)
 *     PopProcessorInformation @ 0x140A018FC (PopProcessorInformation.c)
 *     PopCurrentPowerState @ 0x140A22CB0 (PopCurrentPowerState.c)
 *     PopDiagTraceControlCallback @ 0x140A32540 (PopDiagTraceControlCallback.c)
 *     PopAcquirePowerRequestPushLock @ 0x140A4D1E4 (PopAcquirePowerRequestPushLock.c)
 *     PopBatteryDeviceState @ 0x140A5FF68 (PopBatteryDeviceState.c)
 *     PopBootBatteryStatusWorker @ 0x140A6DD60 (PopBootBatteryStatusWorker.c)
 *     PopFanReadFanNoiseInfo @ 0x140A77108 (PopFanReadFanNoiseInfo.c)
 *     PopGetPowerRequestListInfo @ 0x140A7A0E0 (PopGetPowerRequestListInfo.c)
 *     PopTransitionTelemetryOsState @ 0x140A81BA4 (PopTransitionTelemetryOsState.c)
 *     PopMeasureEnergyChange @ 0x140A82094 (PopMeasureEnergyChange.c)
 *     PoQueryProcessEnergyTrackingState @ 0x140A90964 (PoQueryProcessEnergyTrackingState.c)
 *     PopThermalZoneUpdateCoolingPolicy @ 0x140A95A84 (PopThermalZoneUpdateCoolingPolicy.c)
 *     PopGetEnergyCounter @ 0x140A96130 (PopGetEnergyCounter.c)
 *     PopEsStartTelemetry @ 0x140AA85F0 (PopEsStartTelemetry.c)
 *     PopIsDetailedSleepReliabilityDiagEnabled @ 0x140AB1DB4 (PopIsDetailedSleepReliabilityDiagEnabled.c)
 *     PopDirectedDripsUmMarkTestDevices @ 0x140AB2BEC (PopDirectedDripsUmMarkTestDevices.c)
 *     PopEsEnterSleepShutdown @ 0x140AB3EFC (PopEsEnterSleepShutdown.c)
 *     PopSleepstudyCaptureResiliencyStatistics @ 0x140AB922C (PopSleepstudyCaptureResiliencyStatistics.c)
 *     PopBatteryEtwCallback @ 0x140AC2670 (PopBatteryEtwCallback.c)
 *     PopBatteryWorker @ 0x140AC2900 (PopBatteryWorker.c)
 *     PpmEventTraceControlCallback @ 0x140AC4110 (PpmEventTraceControlCallback.c)
 *     PopQueryLastStateTransitionInfo @ 0x140B4F170 (PopQueryLastStateTransitionInfo.c)
 *     PopIsStateTransitionBlockingThread @ 0x140B5A66C (PopIsStateTransitionBlockingThread.c)
 *     PopDiagInitialize @ 0x140C1DDA4 (PopDiagInitialize.c)
 *     PopFanReportBootStartDevices @ 0x140C212E0 (PopFanReportBootStartDevices.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
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
