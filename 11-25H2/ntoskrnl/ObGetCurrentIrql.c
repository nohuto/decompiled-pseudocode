/*
 * XREFs of ObGetCurrentIrql @ 0x140256C10
 * Callers:
 *     IopfCompleteRequest @ 0x140251740 (IopfCompleteRequest.c)
 *     EtwpLogKernelEvent @ 0x1402561B0 (EtwpLogKernelEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     RtlpWalkFrameChain @ 0x140257BE0 (RtlpWalkFrameChain.c)
 *     KiDispatchException @ 0x14025DD90 (KiDispatchException.c)
 *     IopReleaseFileObjectLock @ 0x140285FF0 (IopReleaseFileObjectLock.c)
 *     ObpPushStackInfo @ 0x14029C310 (ObpPushStackInfo.c)
 *     IopCopyCompleteReadIrp @ 0x1402D3280 (IopCopyCompleteReadIrp.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     NtTraceEvent @ 0x14030A680 (NtTraceEvent.c)
 *     EtwpEventWriteFull @ 0x14030D050 (EtwpEventWriteFull.c)
 *     EtwTraceEvent @ 0x14030FA90 (EtwTraceEvent.c)
 *     ObpDeferObjectDeletion @ 0x14036FDD8 (ObpDeferObjectDeletion.c)
 *     CmFcManagerNotifyFeatureUsage @ 0x1403B8968 (CmFcManagerNotifyFeatureUsage.c)
 *     CmFcManagerRecordFeatureUsage @ 0x1403B8E68 (CmFcManagerRecordFeatureUsage.c)
 *     CmFcpManagerArmFeatureUsageProviderFlushNotification @ 0x1403B9F84 (CmFcpManagerArmFeatureUsageProviderFlushNotification.c)
 *     RtlQueryFeatureConfiguration @ 0x1403BA040 (RtlQueryFeatureConfiguration.c)
 *     EtwpSwitchBuffer @ 0x1403E45C0 (EtwpSwitchBuffer.c)
 *     EtwpRequestFlushTimer @ 0x1403E4890 (EtwpRequestFlushTimer.c)
 *     EtwpPrepareDirtyBuffer @ 0x1403E4930 (EtwpPrepareDirtyBuffer.c)
 *     RtlpIsFrameInBoundsEx @ 0x140429A30 (RtlpIsFrameInBoundsEx.c)
 *     EtwTelemetryCoverageReport @ 0x1404575C0 (EtwTelemetryCoverageReport.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x14045839C (EtwpGetStackExtendedHeaderItem.c)
 *     PnpIsSafeToExamineUserModeTeb @ 0x14046EE30 (PnpIsSafeToExamineUserModeTeb.c)
 *     WheaIsCriticalState @ 0x140478350 (WheaIsCriticalState.c)
 *     EtwpSendTraceEvent @ 0x1404AB404 (EtwpSendTraceEvent.c)
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x1404CC0F0 (RtlRegisterFeatureConfigurationChangeNotification.c)
 *     KeTryToInsertQueueApc @ 0x1404CD804 (KeTryToInsertQueueApc.c)
 *     EtwpContextRegisterTracingDispatcher @ 0x1404CEB00 (EtwpContextRegisterTracingDispatcher.c)
 *     KdPowerTransitionEx @ 0x1404CF5D0 (KdPowerTransitionEx.c)
 *     KiRcuFlushCompleted @ 0x1404F7CEC (KiRcuFlushCompleted.c)
 *     sub_140507C90 @ 0x140507C90 (sub_140507C90.c)
 *     KeResumeClockTimerSafe @ 0x1405B6128 (KeResumeClockTimerSafe.c)
 *     KeSuspendClockTimerSafe @ 0x1405B6188 (KeSuspendClockTimerSafe.c)
 *     KiSrcuFlushCompleted @ 0x1405BCE34 (KiSrcuFlushCompleted.c)
 *     KiGetRecoveryInformation @ 0x1405C1E54 (KiGetRecoveryInformation.c)
 *     RtlQueryInternalFeatureConfiguration @ 0x1405DD110 (RtlQueryInternalFeatureConfiguration.c)
 *     EtwSendTraceBuffer @ 0x1406430F0 (EtwSendTraceBuffer.c)
 *     EtwpDisableCompression @ 0x140645400 (EtwpDisableCompression.c)
 *     EtwpReenableCompression @ 0x14064559C (EtwpReenableCompression.c)
 *     EtwInitialize @ 0x140797090 (EtwInitialize.c)
 *     EtwpSynchronizeWithLogger @ 0x1408942B8 (EtwpSynchronizeWithLogger.c)
 *     EtwpStopLoggerInstance @ 0x1409902C0 (EtwpStopLoggerInstance.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140256C40 (KeAreInterruptsEnabled.c)
 */

unsigned __int8 ObGetCurrentIrql()
{
  if ( (unsigned __int8)KeAreInterruptsEnabled() )
    return KeGetCurrentIrql();
  else
    return 15;
}
