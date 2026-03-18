/*
 * XREFs of KeGetEffectiveIrql @ 0x140257DC0
 * Callers:
 *     EtwpSwitchBuffer @ 0x14024CDA0 (EtwpSwitchBuffer.c)
 *     EtwpRequestFlushTimer @ 0x14024D0B4 (EtwpRequestFlushTimer.c)
 *     EtwpPrepareDirtyBuffer @ 0x14024D154 (EtwpPrepareDirtyBuffer.c)
 *     EtwpLogKernelEvent @ 0x140257180 (EtwpLogKernelEvent.c)
 *     IopCopyCompleteReadIrp @ 0x140268580 (IopCopyCompleteReadIrp.c)
 *     RtlpWalkFrameChain @ 0x14027E270 (RtlpWalkFrameChain.c)
 *     EtwpEventWriteFull @ 0x140328590 (EtwpEventWriteFull.c)
 *     KiRcuFlushCompleted @ 0x14033D510 (KiRcuFlushCompleted.c)
 *     EtwTraceEvent @ 0x140346CD0 (EtwTraceEvent.c)
 *     CmFcManagerNotifyFeatureUsage @ 0x1403A4D48 (CmFcManagerNotifyFeatureUsage.c)
 *     CmFcManagerRecordFeatureUsage @ 0x1403A6974 (CmFcManagerRecordFeatureUsage.c)
 *     CmFcpManagerArmFeatureUsageProviderFlushNotification @ 0x1403A6B5C (CmFcpManagerArmFeatureUsageProviderFlushNotification.c)
 *     RtlQueryFeatureConfiguration @ 0x1403A7E90 (RtlQueryFeatureConfiguration.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x1403ED180 (EtwpGetStackExtendedHeaderItem.c)
 *     RtlpIsFrameInBoundsEx @ 0x14040D770 (RtlpIsFrameInBoundsEx.c)
 *     EtwTelemetryCoverageReport @ 0x140457F60 (EtwTelemetryCoverageReport.c)
 *     PnpIsSafeToExamineUserModeTeb @ 0x14046D660 (PnpIsSafeToExamineUserModeTeb.c)
 *     WheaIsCriticalState @ 0x140478110 (WheaIsCriticalState.c)
 *     EtwpSendTraceEvent @ 0x1404AC8C4 (EtwpSendTraceEvent.c)
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x1404CBF20 (RtlRegisterFeatureConfigurationChangeNotification.c)
 *     KeTryToInsertQueueApc @ 0x1404CD418 (KeTryToInsertQueueApc.c)
 *     EtwpContextRegisterTracingDispatcher @ 0x1404CE964 (EtwpContextRegisterTracingDispatcher.c)
 *     KdPowerTransitionEx @ 0x1404CF5B0 (KdPowerTransitionEx.c)
 *     sub_14050A410 @ 0x14050A410 (sub_14050A410.c)
 *     KeResumeClockTimerSafe @ 0x1405B9F4C (KeResumeClockTimerSafe.c)
 *     KeSuspendClockTimerSafe @ 0x1405B9FAC (KeSuspendClockTimerSafe.c)
 *     KiSrcuFlushCompleted @ 0x1405C0EA4 (KiSrcuFlushCompleted.c)
 *     KiGetRecoveryInformation @ 0x1405C61F4 (KiGetRecoveryInformation.c)
 *     RtlQueryInternalFeatureConfiguration @ 0x1405E9260 (RtlQueryInternalFeatureConfiguration.c)
 *     EtwSendTraceBuffer @ 0x14064F090 (EtwSendTraceBuffer.c)
 *     EtwpDisableCompression @ 0x140651400 (EtwpDisableCompression.c)
 *     EtwpReenableCompression @ 0x14065159C (EtwpReenableCompression.c)
 *     EtwInitialize @ 0x1407A6460 (EtwInitialize.c)
 *     EtwpSynchronizeWithLogger @ 0x14083381C (EtwpSynchronizeWithLogger.c)
 *     EtwpStopLoggerInstance @ 0x1409D9164 (EtwpStopLoggerInstance.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140257E20 (KeAreInterruptsEnabled.c)
 */

unsigned __int8 KeGetEffectiveIrql()
{
  if ( (unsigned __int8)KeAreInterruptsEnabled() )
    return KeGetCurrentIrql();
  else
    return 15;
}
