/*
 * XREFs of KeGetEffectiveIrql @ 0x1402883D0
 * Callers:
 *     CmFcManagerNotifyFeatureUsage @ 0x14021E1F8 (CmFcManagerNotifyFeatureUsage.c)
 *     RtlpWalkFrameChain @ 0x140233800 (RtlpWalkFrameChain.c)
 *     IopCopyCompleteReadIrp @ 0x14025FA30 (IopCopyCompleteReadIrp.c)
 *     EtwpSwitchBuffer @ 0x14027D3B0 (EtwpSwitchBuffer.c)
 *     EtwpRequestFlushTimer @ 0x14027D6C4 (EtwpRequestFlushTimer.c)
 *     EtwpPrepareDirtyBuffer @ 0x14027D764 (EtwpPrepareDirtyBuffer.c)
 *     EtwpLogKernelEvent @ 0x140287790 (EtwpLogKernelEvent.c)
 *     KiRcuFlushCompleted @ 0x14031C9F0 (KiRcuFlushCompleted.c)
 *     EtwTraceEvent @ 0x140325740 (EtwTraceEvent.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x1403DD150 (EtwpGetStackExtendedHeaderItem.c)
 *     RtlpIsFrameInBoundsEx @ 0x1404059C0 (RtlpIsFrameInBoundsEx.c)
 *     EtwTelemetryCoverageReport @ 0x14044D270 (EtwTelemetryCoverageReport.c)
 *     PnpIsSafeToExamineUserModeTeb @ 0x140468200 (PnpIsSafeToExamineUserModeTeb.c)
 *     WheaIsCriticalState @ 0x140474710 (WheaIsCriticalState.c)
 *     CmFcManagerRecordFeatureUsage @ 0x14048C624 (CmFcManagerRecordFeatureUsage.c)
 *     CmFcpManagerArmFeatureUsageProviderFlushNotification @ 0x14048C7E8 (CmFcpManagerArmFeatureUsageProviderFlushNotification.c)
 *     RtlQueryFeatureConfiguration @ 0x140496030 (RtlQueryFeatureConfiguration.c)
 *     EtwpSendTraceEvent @ 0x1404A70B8 (EtwpSendTraceEvent.c)
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x1404C5390 (RtlRegisterFeatureConfigurationChangeNotification.c)
 *     KeTryToInsertQueueApc @ 0x1404C67E8 (KeTryToInsertQueueApc.c)
 *     EtwpContextRegisterTracingDispatcher @ 0x1404C7B30 (EtwpContextRegisterTracingDispatcher.c)
 *     KdPowerTransitionEx @ 0x1404C8870 (KdPowerTransitionEx.c)
 *     sub_140507CD0 @ 0x140507CD0 (sub_140507CD0.c)
 *     KeResumeClockTimerSafe @ 0x1405B757C (KeResumeClockTimerSafe.c)
 *     KeSuspendClockTimerSafe @ 0x1405B75DC (KeSuspendClockTimerSafe.c)
 *     KiSrcuFlushCompleted @ 0x1405BE474 (KiSrcuFlushCompleted.c)
 *     KiGetRecoveryInformation @ 0x1405C3924 (KiGetRecoveryInformation.c)
 *     RtlQueryInternalFeatureConfiguration @ 0x1405E67B0 (RtlQueryInternalFeatureConfiguration.c)
 *     EtwSendTraceBuffer @ 0x14064D790 (EtwSendTraceBuffer.c)
 *     EtwpDisableCompression @ 0x14064FB00 (EtwpDisableCompression.c)
 *     EtwpReenableCompression @ 0x14064FC9C (EtwpReenableCompression.c)
 *     EtwInitialize @ 0x1407A65A0 (EtwInitialize.c)
 *     EtwpSynchronizeWithLogger @ 0x1409D2650 (EtwpSynchronizeWithLogger.c)
 *     EtwpStopLoggerInstance @ 0x1409D3C74 (EtwpStopLoggerInstance.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140288430 (KeAreInterruptsEnabled.c)
 */

unsigned __int8 __fastcall KeGetEffectiveIrql(__int64 a1, __int64 a2)
{
  if ( (unsigned __int8)KeAreInterruptsEnabled(a1, a2) )
    return KeGetCurrentIrql();
  else
    return 15;
}
