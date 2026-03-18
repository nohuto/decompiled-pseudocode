/*
 * XREFs of EtwWriteEx @ 0x140256C60
 * Callers:
 *     PpmEventTraceLatencySensitivityHint @ 0x14020209C (PpmEventTraceLatencySensitivityHint.c)
 *     PpmEventTracePerfCheckStart @ 0x140203744 (PpmEventTracePerfCheckStart.c)
 *     PpmEventTraceMakeupPerfCheck @ 0x140203834 (PpmEventTraceMakeupPerfCheck.c)
 *     PoFxSendSystemLatencyUpdate @ 0x140203AF8 (PoFxSendSystemLatencyUpdate.c)
 *     PpmEventTraceProcessorLatencyLimitChange @ 0x140204410 (PpmEventTraceProcessorLatencyLimitChange.c)
 *     PpmEventTracePerfCheckStop @ 0x140204BEC (PpmEventTracePerfCheckStop.c)
 *     PpmEventMediaBufferingNotify @ 0x140204F40 (PpmEventMediaBufferingNotify.c)
 *     EtwpPsProvTracePriority @ 0x14020E2A4 (EtwpPsProvTracePriority.c)
 *     IopfCompleteRequest @ 0x140251740 (IopfCompleteRequest.c)
 *     PopDiagTraceDeviceAcquireIrp @ 0x140252A98 (PopDiagTraceDeviceAcquireIrp.c)
 *     EtwpLogKernelEvent @ 0x1402561B0 (EtwpLogKernelEvent.c)
 *     EtwWrite @ 0x140257AF0 (EtwWrite.c)
 *     PpmEventPerfSelectProcessorState @ 0x140265B10 (PpmEventPerfSelectProcessorState.c)
 *     PpmEventQosClassPerfSelection @ 0x140265DB4 (PpmEventQosClassPerfSelection.c)
 *     PpmEventDomainPerfStateChange @ 0x140265F88 (PpmEventDomainPerfStateChange.c)
 *     PpmEventHgsHardwareTable @ 0x140268A24 (PpmEventHgsHardwareTable.c)
 *     PopDiagTraceNonAttributedCpuReferences @ 0x140268E30 (PopDiagTraceNonAttributedCpuReferences.c)
 *     PpmEventPlatformVetoRequest @ 0x14026A534 (PpmEventPlatformVetoRequest.c)
 *     PoTraceSystemTimerResolutionUpdate @ 0x140276BA8 (PoTraceSystemTimerResolutionUpdate.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x140276EBC (PoTraceSystemTimerResolutionKernel.c)
 *     PopDiagTraceFxComponentLatency @ 0x1402C10CC (PopDiagTraceFxComponentLatency.c)
 *     EtwTraceThreadWorkOnBehalfUpdate @ 0x140306840 (EtwTraceThreadWorkOnBehalfUpdate.c)
 *     PspRevertContainerImpersonation @ 0x140308400 (PspRevertContainerImpersonation.c)
 *     EtwpTraceMessageVa @ 0x14030B270 (EtwpTraceMessageVa.c)
 *     EtwpLogSystemEventUnsafe @ 0x14030BF40 (EtwpLogSystemEventUnsafe.c)
 *     EtwpTraceFileIo @ 0x140310FF0 (EtwpTraceFileIo.c)
 *     PopFxIdleWorkerTail @ 0x1403492B0 (PopFxIdleWorkerTail.c)
 *     PopFxProcessWork @ 0x14034B940 (PopFxProcessWork.c)
 *     PopDiagTraceFxDefaultPepWorkerStart @ 0x14034D5B8 (PopDiagTraceFxDefaultPepWorkerStart.c)
 *     PopDiagTraceFxDefaultPepWorkerEnd @ 0x14034D694 (PopDiagTraceFxDefaultPepWorkerEnd.c)
 *     PopDiagTraceSetDeepSleepConstraint @ 0x140354E08 (PopDiagTraceSetDeepSleepConstraint.c)
 *     PopDiagTraceClearDeepSleepConstraint @ 0x140355158 (PopDiagTraceClearDeepSleepConstraint.c)
 *     PoTraceForceIdleStateChange @ 0x1403558F4 (PoTraceForceIdleStateChange.c)
 *     PoDeviceReleaseIrp @ 0x140356F94 (PoDeviceReleaseIrp.c)
 *     PopDiagTraceFxDevicePowerState @ 0x140358A38 (PopDiagTraceFxDevicePowerState.c)
 *     PopDiagTraceIrpStart @ 0x140358B14 (PopDiagTraceIrpStart.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x140358F8C (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopDiagTraceIrpFinish @ 0x140359154 (PopDiagTraceIrpFinish.c)
 *     PopDiagTraceFxDevicePowered @ 0x14035956C (PopDiagTraceFxDevicePowered.c)
 *     IoReuseIrp @ 0x140359950 (IoReuseIrp.c)
 *     EtwTraceContFreeEvent @ 0x14038BB9C (EtwTraceContFreeEvent.c)
 *     KiIntSteerLogMask @ 0x1403AF598 (KiIntSteerLogMask.c)
 *     KiIntSteerLogProc @ 0x1403AF60C (KiIntSteerLogProc.c)
 *     PpmPerfSnapDeliveredPerformance @ 0x1403B0220 (PpmPerfSnapDeliveredPerformance.c)
 *     PpmPerfRecordUtility @ 0x1403B10B0 (PpmPerfRecordUtility.c)
 *     PpmEventParkNodeRecordedStats @ 0x1403B1B08 (PpmEventParkNodeRecordedStats.c)
 *     MiLogPeriodicTelemetryForSlabAllocator @ 0x1403BA6DC (MiLogPeriodicTelemetryForSlabAllocator.c)
 *     TlgAggregateAbsorbEvent @ 0x1403BACC0 (TlgAggregateAbsorbEvent.c)
 *     MiLogBadMapper @ 0x1403BB168 (MiLogBadMapper.c)
 *     MiLogSlabEntryAllocateFailure @ 0x1403BC0C0 (MiLogSlabEntryAllocateFailure.c)
 *     EtwpTiVadQueryEventWrite @ 0x1403BD3A4 (EtwpTiVadQueryEventWrite.c)
 *     EtwpLogMemNodeInfo @ 0x1403BDD4C (EtwpLogMemNodeInfo.c)
 *     EtwpLogMemInfo @ 0x1403BDEF0 (EtwpLogMemInfo.c)
 *     SeLogAccessFailure @ 0x1403CF70C (SeLogAccessFailure.c)
 *     EtwpTraceFileName @ 0x1403D6EB0 (EtwpTraceFileName.c)
 *     PpmEventCoreParkingSoftParkedStateChange @ 0x1403E0698 (PpmEventCoreParkingSoftParkedStateChange.c)
 *     PpmEventTraceProcessorIdleAccounting @ 0x1403E7040 (PpmEventTraceProcessorIdleAccounting.c)
 *     PpmEventProcessorPerfStateChange @ 0x1403E9280 (PpmEventProcessorPerfStateChange.c)
 *     PpmEventTraceExpectedUtility @ 0x1403E9604 (PpmEventTraceExpectedUtility.c)
 *     EtwpTraceLostEvent @ 0x1403F86D8 (EtwpTraceLostEvent.c)
 *     PpmEventComputeEnergy @ 0x140401744 (PpmEventComputeEnergy.c)
 *     PpmEventTraceMultiClassHeteroResponse @ 0x140407B74 (PpmEventTraceMultiClassHeteroResponse.c)
 *     PpmEventTraceHeteroResponse @ 0x140409318 (PpmEventTraceHeteroResponse.c)
 *     PpmEventParkingCountSelection @ 0x140409E6C (PpmEventParkingCountSelection.c)
 *     PpmEventHgsCoresUnparkedCount @ 0x140409FC8 (PpmEventHgsCoresUnparkedCount.c)
 *     PpmEventHgsContainmentUnparkedCount @ 0x14040A4EC (PpmEventHgsContainmentUnparkedCount.c)
 *     EtwTraceMdlAllocationEvent @ 0x140415A10 (EtwTraceMdlAllocationEvent.c)
 *     EtwTraceContAllocationEvent @ 0x140416CF0 (EtwTraceContAllocationEvent.c)
 *     EtwWriteTransfer @ 0x14041EDF0 (EtwWriteTransfer.c)
 *     McGenEventWrite_EtwWriteTransfer @ 0x1404250D4 (McGenEventWrite_EtwWriteTransfer.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x14042513C (FsRtlpReleaseIrpsWaitingForRH.c)
 *     PopDiagTraceRegisterSystemState @ 0x1404264FC (PopDiagTraceRegisterSystemState.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PopDiagTraceFxDeviceAccounting @ 0x140426AF4 (PopDiagTraceFxDeviceAccounting.c)
 *     PpmEventTraceHeteroSets @ 0x140427BB0 (PpmEventTraceHeteroSets.c)
 *     PopDiagTraceProcessorThrottlePerfTrack @ 0x14042CB60 (PopDiagTraceProcessorThrottlePerfTrack.c)
 *     PpmEventBiosCapChange @ 0x14042CE9C (PpmEventBiosCapChange.c)
 *     PpmEventThermalCapChange @ 0x14042CF94 (PpmEventThermalCapChange.c)
 *     PopDiagTraceFxComponentLogicalCondition @ 0x14043EB80 (PopDiagTraceFxComponentLogicalCondition.c)
 *     KiIntSteerLogState @ 0x140446E50 (KiIntSteerLogState.c)
 *     EtwTraceDpcProfilingStack @ 0x14044A0C4 (EtwTraceDpcProfilingStack.c)
 *     EtwTraceDpcProfilingStackBegin @ 0x14044A154 (EtwTraceDpcProfilingStackBegin.c)
 *     EtwpNetProvTraceNetwork @ 0x14044B038 (EtwpNetProvTraceNetwork.c)
 *     PopDiagTraceFxComponentIdleState @ 0x14044CC10 (PopDiagTraceFxComponentIdleState.c)
 *     SshpTracingWriteBlockerStateChange @ 0x14044E3EC (SshpTracingWriteBlockerStateChange.c)
 *     PopDiagTraceFxDeviceDirectedTransition @ 0x14044FEE0 (PopDiagTraceFxDeviceDirectedTransition.c)
 *     IopInitActivityIdIrp @ 0x140454288 (IopInitActivityIdIrp.c)
 *     EtwTraceMemoryAcg @ 0x140457B54 (EtwTraceMemoryAcg.c)
 *     EtwpTiFillVadEventWrite @ 0x1404618A0 (EtwpTiFillVadEventWrite.c)
 *     PnpDiagnosticTraceObject @ 0x140463B34 (PnpDiagnosticTraceObject.c)
 *     PnpDiagnosticTrace @ 0x140463F4C (PnpDiagnosticTrace.c)
 *     SetFailureLocation @ 0x140465824 (SetFailureLocation.c)
 *     PopDiagTracePowerRequestChange @ 0x14046DABC (PopDiagTracePowerRequestChange.c)
 *     PopDiagTraceSystemLatencyUpdate @ 0x140470210 (PopDiagTraceSystemLatencyUpdate.c)
 *     PpmEventHeteroFavoredCoreRotationChange @ 0x140470788 (PpmEventHeteroFavoredCoreRotationChange.c)
 *     PpmEventTraceSoftCoreParkingSelection @ 0x14047322C (PpmEventTraceSoftCoreParkingSelection.c)
 *     PopDiagTraceSetSystemState @ 0x1404767A4 (PopDiagTraceSetSystemState.c)
 *     WheapGenerateETWErrorRecord @ 0x1404784DC (WheapGenerateETWErrorRecord.c)
 *     PpmEventHgsActiveWorkloadClass @ 0x140483748 (PpmEventHgsActiveWorkloadClass.c)
 *     PpmEventPlatformVetoRundown @ 0x1404848AC (PpmEventPlatformVetoRundown.c)
 *     PpmEventProcessorVetoRundown @ 0x1404849FC (PpmEventProcessorVetoRundown.c)
 *     PpmEventTracePreVetoAccounting @ 0x140484BFC (PpmEventTracePreVetoAccounting.c)
 *     SshpTracingWriteBlockerStateRundown @ 0x14048704C (SshpTracingWriteBlockerStateRundown.c)
 *     PopDiagTraceEventNoPayload @ 0x140488BD4 (PopDiagTraceEventNoPayload.c)
 *     PopDiagTraceDeviceIdleCheck @ 0x140488C34 (PopDiagTraceDeviceIdleCheck.c)
 *     PpmEventCoreParkingStateChangeEx @ 0x14048B284 (PpmEventCoreParkingStateChangeEx.c)
 *     SshpWriteBlocker @ 0x14048B408 (SshpWriteBlocker.c)
 *     KsepLogEtwMessage @ 0x14048E780 (KsepLogEtwMessage.c)
 *     PpmEventCoreParkingStateChange @ 0x14048E894 (PpmEventCoreParkingStateChange.c)
 *     PsDispatchIumService @ 0x14048F2F0 (PsDispatchIumService.c)
 *     PpmEventSoftParkRankListChanged @ 0x140496D74 (PpmEventSoftParkRankListChanged.c)
 *     PopBatteryTraceSystemBatteryStatus @ 0x140498BCC (PopBatteryTraceSystemBatteryStatus.c)
 *     PopDiagTraceSleepStudyBlocker @ 0x14049A2E8 (PopDiagTraceSleepStudyBlocker.c)
 *     PopDirectedDripsDiagTraceNotifyDevices @ 0x14049D6DC (PopDirectedDripsDiagTraceNotifyDevices.c)
 *     PopDiagTraceIdleResiliencyStart @ 0x14049EC20 (PopDiagTraceIdleResiliencyStart.c)
 *     PopDiagTraceIdleResiliencyEnd @ 0x14049ECE0 (PopDiagTraceIdleResiliencyEnd.c)
 *     PopSqmAddToStream @ 0x1404A0D0C (PopSqmAddToStream.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404A1010 (_tlgWriteEx_EtwWriteEx.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x1404A172C (PnpDiagnosticTraceObjectWithStatus.c)
 *     SSHSupportEtwWrite @ 0x1404A3BCC (SSHSupportEtwWrite.c)
 *     BapdWriteEtwEvents @ 0x1404A4354 (BapdWriteEtwEvents.c)
 *     PopDiagTraceThermalZoneRundown @ 0x1404A4D68 (PopDiagTraceThermalZoneRundown.c)
 *     PpmEventVetoReasonRundown @ 0x1404AB108 (PpmEventVetoReasonRundown.c)
 *     PopDiagTraceSessionDisplayStateChange @ 0x1404ABF8C (PopDiagTraceSessionDisplayStateChange.c)
 *     PoTraceSystemTimerResolutionIgnore @ 0x1404AD974 (PoTraceSystemTimerResolutionIgnore.c)
 *     IoTransferActivityId @ 0x1404B05D0 (IoTransferActivityId.c)
 *     PopDiagTraceDeepSleepConstraintRundown @ 0x1404B1AA4 (PopDiagTraceDeepSleepConstraintRundown.c)
 *     PopDiagTraceDiskIdleCheck @ 0x1404B42C4 (PopDiagTraceDiskIdleCheck.c)
 *     PpmEventTraceFailedPerfCheckStart @ 0x1404B5160 (PpmEventTraceFailedPerfCheckStart.c)
 *     PpmHeteroDispatchHgsInterrupt @ 0x1404B5880 (PpmHeteroDispatchHgsInterrupt.c)
 *     HalpIommuTraceFault @ 0x1404B695C (HalpIommuTraceFault.c)
 *     PopDiagTraceFxPerfRequestComplete @ 0x1404B74EC (PopDiagTraceFxPerfRequestComplete.c)
 *     PopDiagTraceFxPerfRequestProgress @ 0x1404B7810 (PopDiagTraceFxPerfRequestProgress.c)
 *     PopDiagTraceFxPerfRequest @ 0x1404B7970 (PopDiagTraceFxPerfRequest.c)
 *     EtwpTraceLostSystemEvent @ 0x1404BA54C (EtwpTraceLostSystemEvent.c)
 *     PpmEventTraceLPIState @ 0x1404BB970 (PpmEventTraceLPIState.c)
 *     PpmEventHgsHardwareTableResonMapTable @ 0x1404C363C (PpmEventHgsHardwareTableResonMapTable.c)
 *     PpmEventHgsNormalizedTable @ 0x1404C66FC (PpmEventHgsNormalizedTable.c)
 *     PnpDiagnosticTraceElamDecision @ 0x1404C7650 (PnpDiagnosticTraceElamDecision.c)
 *     PpmEventTraceMultiClassHeteroResponseUpdate @ 0x1404CA4D0 (PpmEventTraceMultiClassHeteroResponseUpdate.c)
 *     PpmEventParkNodeRestriction @ 0x1404CBA34 (PpmEventParkNodeRestriction.c)
 *     PpmEventParkNodeClassRecordedStats @ 0x1404CC858 (PpmEventParkNodeClassRecordedStats.c)
 *     PpmEventHgsHardwareTableResonChanged @ 0x1404CD078 (PpmEventHgsHardwareTableResonChanged.c)
 *     PpmEventHgsContainmentHwUpdate @ 0x1404CE158 (PpmEventHgsContainmentHwUpdate.c)
 *     PopDiagTraceRtcWakeInfo @ 0x1404D4FFC (PopDiagTraceRtcWakeInfo.c)
 *     PopDiagTraceIrpPended @ 0x1404D5AD0 (PopDiagTraceIrpPended.c)
 *     PopDiagTraceFxDeviceDirectedCompletion @ 0x1404D6DD8 (PopDiagTraceFxDeviceDirectedCompletion.c)
 *     PoDiagTraceIRTimerSleepStudyRundown @ 0x1404D6ED4 (PoDiagTraceIRTimerSleepStudyRundown.c)
 *     IopDumpTraceLoadCrashDumpDriverFailure @ 0x1404D94EC (IopDumpTraceLoadCrashDumpDriverFailure.c)
 *     PpmEventParkNodeParkHintChanged @ 0x1404D9648 (PpmEventParkNodeParkHintChanged.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1404E1CD0 (FsRtlpOplockBreakByCacheFlags.c)
 *     PpmEventTraceHeteroDistributeUtility @ 0x1404F75CC (PpmEventTraceHeteroDistributeUtility.c)
 *     HalpTscTraceProcessorDelta @ 0x140547164 (HalpTscTraceProcessorDelta.c)
 *     HalpTscTraceProcessorSynchronization @ 0x140547248 (HalpTscTraceProcessorSynchronization.c)
 *     HalpTscTraceStatus @ 0x140547348 (HalpTscTraceStatus.c)
 *     HalpTscTraceSynchronizationSummary @ 0x1405473E4 (HalpTscTraceSynchronizationSummary.c)
 *     HalpIommuLogEarlyFault @ 0x140551900 (HalpIommuLogEarlyFault.c)
 *     DbgkpLkmdSqmIncrementDword @ 0x14057B708 (DbgkpLkmdSqmIncrementDword.c)
 *     HvlpWriteEventLog @ 0x1405880D4 (HvlpWriteEventLog.c)
 *     IopDumpTraceCrashDumpDisabled @ 0x140590544 (IopDumpTraceCrashDumpDisabled.c)
 *     IopDumpTraceCrashDumpReconfiguration @ 0x140590620 (IopDumpTraceCrashDumpReconfiguration.c)
 *     IopDumpTraceDisableCrashDumpFailure @ 0x140590730 (IopDumpTraceDisableCrashDumpFailure.c)
 *     IopDumpTraceFreeDumpStackFailure @ 0x140590840 (IopDumpTraceFreeDumpStackFailure.c)
 *     IopDumpTraceInitializeCrashDumpFailure @ 0x140590950 (IopDumpTraceInitializeCrashDumpFailure.c)
 *     IopDumpTraceInitializeDumpStackFailure @ 0x140590A60 (IopDumpTraceInitializeDumpStackFailure.c)
 *     IopDumpTraceLoadDumpStackFailure @ 0x140590B70 (IopDumpTraceLoadDumpStackFailure.c)
 *     IopLiveDumpTrace @ 0x14059F900 (IopLiveDumpTrace.c)
 *     IopLiveDumpTraceEventGeneric @ 0x14059FA74 (IopLiveDumpTraceEventGeneric.c)
 *     PnpDiagnosticTraceElamStatus @ 0x1405A10AC (PnpDiagnosticTraceElamStatus.c)
 *     KasaniSendReport @ 0x1405A6950 (KasaniSendReport.c)
 *     KasaniSendTelemetryDriver @ 0x1405A73B0 (KasaniSendTelemetryDriver.c)
 *     KcsanReportTelemetry @ 0x1405AA9D0 (KcsanReportTelemetry.c)
 *     KcsaniSendReport @ 0x1405AAFF0 (KcsaniSendReport.c)
 *     KsepEvntLogFlagsApplied @ 0x1405C5F80 (KsepEvntLogFlagsApplied.c)
 *     KsepEvntLogShimsApplied @ 0x1405C6094 (KsepEvntLogShimsApplied.c)
 *     KsepDsEventAddDevice @ 0x1405C6B08 (KsepDsEventAddDevice.c)
 *     KsepDsEventDataIrp @ 0x1405C6C30 (KsepDsEventDataIrp.c)
 *     KsepDsEventDevicePowerCompleted @ 0x1405C6D28 (KsepDsEventDevicePowerCompleted.c)
 *     KsepDsEventDevicePowerIrp @ 0x1405C6E0C (KsepDsEventDevicePowerIrp.c)
 *     KsepDsEventDriverLoad @ 0x1405C6F24 (KsepDsEventDriverLoad.c)
 *     KsepDsEventDriverStartIo @ 0x1405C702C (KsepDsEventDriverStartIo.c)
 *     KsepDsEventDriverUnload @ 0x1405C70F4 (KsepDsEventDriverUnload.c)
 *     KsepDsEventIoCreateDevice @ 0x1405C71B0 (KsepDsEventIoCreateDevice.c)
 *     KsepDsEventPnpIrp @ 0x1405C72C0 (KsepDsEventPnpIrp.c)
 *     KsepDsEventPnpStartDevice @ 0x1405C73B8 (KsepDsEventPnpStartDevice.c)
 *     KsepDsEventPnpStopDevice @ 0x1405C749C (KsepDsEventPnpStopDevice.c)
 *     KsepDsEventPoolAllocate @ 0x1405C7580 (KsepDsEventPoolAllocate.c)
 *     KsepDsEventPoolFree @ 0x1405C767C (KsepDsEventPoolFree.c)
 *     KsepDsEventRequestPowerIrp @ 0x1405C7748 (KsepDsEventRequestPowerIrp.c)
 *     KsepDsEventSystemPowerIrp @ 0x1405C7850 (KsepDsEventSystemPowerIrp.c)
 *     KsepSkipDriverUnloadEventDriverLoad @ 0x1405C7AEC (KsepSkipDriverUnloadEventDriverLoad.c)
 *     KsepSkipDriverUnloadEventDriverUnload @ 0x1405C7BF4 (KsepSkipDriverUnloadEventDriverUnload.c)
 *     PopIrpWatchdogBugcheck @ 0x1405C8BC8 (PopIrpWatchdogBugcheck.c)
 *     PoTraceDynamicTickDisabled @ 0x1405CF8F8 (PoTraceDynamicTickDisabled.c)
 *     PoTraceForceIdleReset @ 0x1405CF99C (PoTraceForceIdleReset.c)
 *     PopDiagTraceAbnormalReset @ 0x1405CFAC4 (PopDiagTraceAbnormalReset.c)
 *     PopDiagTraceCsDeepSleepWatchdog @ 0x1405CFB64 (PopDiagTraceCsDeepSleepWatchdog.c)
 *     PopDiagTraceCsDripsDivergence @ 0x1405CFC80 (PopDiagTraceCsDripsDivergence.c)
 *     PopDiagTraceCsDripsWatchdog @ 0x1405CFD6C (PopDiagTraceCsDripsWatchdog.c)
 *     PopDiagTraceCsDripsWatchdogPerfTrack @ 0x1405CFF5C (PopDiagTraceCsDripsWatchdogPerfTrack.c)
 *     PopDiagTraceCsFanPerfTrack @ 0x1405D00B4 (PopDiagTraceCsFanPerfTrack.c)
 *     PopDiagTraceDebuggerTransitionRequirements @ 0x1405D0170 (PopDiagTraceDebuggerTransitionRequirements.c)
 *     PopDiagTraceDeviceComplianceUpdate @ 0x1405D0250 (PopDiagTraceDeviceComplianceUpdate.c)
 *     PopDiagTraceEsState @ 0x1405D030C (PopDiagTraceEsState.c)
 *     PopDiagTraceFxComponentIdleConstraints @ 0x1405D0428 (PopDiagTraceFxComponentIdleConstraints.c)
 *     PopDiagTraceFxComponentResidency @ 0x1405D0518 (PopDiagTraceFxComponentResidency.c)
 *     PopDiagTraceFxComponentWake @ 0x1405D05FC (PopDiagTraceFxComponentWake.c)
 *     PopDiagTraceFxDeviceIdleConstraints @ 0x1405D06F0 (PopDiagTraceFxDeviceIdleConstraints.c)
 *     PopDiagTraceFxPerfNominalChange @ 0x1405D07D0 (PopDiagTraceFxPerfNominalChange.c)
 *     PopDiagTraceIllegalProcessorThrottle @ 0x1405D0908 (PopDiagTraceIllegalProcessorThrottle.c)
 *     PopDiagTraceIoCoalescingDiskIdle @ 0x1405D0AB4 (PopDiagTraceIoCoalescingDiskIdle.c)
 *     PopDiagTraceProcessorThrottleDurationPerfTrack @ 0x1405D0B54 (PopDiagTraceProcessorThrottleDurationPerfTrack.c)
 *     PopDiagTraceShutdownAction @ 0x1405D0CA4 (PopDiagTraceShutdownAction.c)
 *     PopDiagTraceThermalStateChange @ 0x1405D0DC8 (PopDiagTraceThermalStateChange.c)
 *     PopDiagTraceThermalZoneEnumeration @ 0x1405D0EF0 (PopDiagTraceThermalZoneEnumeration.c)
 *     PopDiagTraceThermalZoneThrottleDurationPerfTrack @ 0x1405D1290 (PopDiagTraceThermalZoneThrottleDurationPerfTrack.c)
 *     PopDiagTraceThermalZoneThrottlePerfTrack @ 0x1405D13C4 (PopDiagTraceThermalZoneThrottlePerfTrack.c)
 *     PopBatteryTraceSystemBatteryStatusV1 @ 0x1405D318C (PopBatteryTraceSystemBatteryStatusV1.c)
 *     PpmEventAffinityMask @ 0x1405D4340 (PpmEventAffinityMask.c)
 *     PpmEventAutonomousModeChange @ 0x1405D44A8 (PpmEventAutonomousModeChange.c)
 *     PpmEventCoreParkingForceParkedStateChange @ 0x1405D4570 (PpmEventCoreParkingForceParkedStateChange.c)
 *     PpmEventHgsContainmentGroupInfo @ 0x1405D4700 (PpmEventHgsContainmentGroupInfo.c)
 *     PpmEventHgsContainmentPolicyChange @ 0x1405D48B8 (PpmEventHgsContainmentPolicyChange.c)
 *     PpmEventHgsContainmentPolicyChangeV1 @ 0x1405D4A3C (PpmEventHgsContainmentPolicyChangeV1.c)
 *     PpmEventHiddenProcessorBiosCapChange @ 0x1405D4BC4 (PpmEventHiddenProcessorBiosCapChange.c)
 *     PpmEventHiddenProcessorThermalCapChange @ 0x1405D4CC4 (PpmEventHiddenProcessorThermalCapChange.c)
 *     PpmEventLPICoreParking @ 0x1405D4DC4 (PpmEventLPICoreParking.c)
 *     PpmEventParkNodeCapChange @ 0x1405D4E84 (PpmEventParkNodeCapChange.c)
 *     PpmEventParkNodePreference @ 0x1405D4F70 (PpmEventParkNodePreference.c)
 *     PpmEventProcessorVetoRequest @ 0x1405D5090 (PpmEventProcessorVetoRequest.c)
 *     PpmEventSoftParkLatencyUpdate @ 0x1405D51A8 (PpmEventSoftParkLatencyUpdate.c)
 *     PpmEventTraceCoreParkingSelection @ 0x1405D528C (PpmEventTraceCoreParkingSelection.c)
 *     PpmEventVpQosChange @ 0x1405D5434 (PpmEventVpQosChange.c)
 *     PopDirectedDripsDiagTraceDfxPowerStateFailure @ 0x1405D7034 (PopDirectedDripsDiagTraceDfxPowerStateFailure.c)
 *     SmEtwLogRegionOp @ 0x140601350 (SmEtwLogRegionOp.c)
 *     SmEtwLogStoreCorruption @ 0x14060141C (SmEtwLogStoreCorruption.c)
 *     SmEtwLogStoreOp @ 0x140601548 (SmEtwLogStoreOp.c)
 *     SmEtwLogStoreStateChange @ 0x140601614 (SmEtwLogStoreStateChange.c)
 *     SmKmStoreTerminateWorker @ 0x140601AF0 (SmKmStoreTerminateWorker.c)
 *     SmKmSqmAddToStream @ 0x140603BAC (SmKmSqmAddToStream.c)
 *     EtwTraceCpuPartitionAffinityViolation @ 0x140641540 (EtwTraceCpuPartitionAffinityViolation.c)
 *     EtwTraceCpuPartitionDpcSchedulingViolation @ 0x1406416E4 (EtwTraceCpuPartitionDpcSchedulingViolation.c)
 *     EtwTraceCpuPartitionGenericDpcViolation @ 0x1406417A0 (EtwTraceCpuPartitionGenericDpcViolation.c)
 *     EtwTraceCumulativeDpcSoftTimeout @ 0x14064183C (EtwTraceCumulativeDpcSoftTimeout.c)
 *     EtwTraceJobServerSiloMonitorCallback @ 0x140641A64 (EtwTraceJobServerSiloMonitorCallback.c)
 *     EtwTraceProcessSetInPrivateMode @ 0x140641D78 (EtwTraceProcessSetInPrivateMode.c)
 *     EtwTraceSingleDpcSoftTimeout @ 0x140642058 (EtwTraceSingleDpcSoftTimeout.c)
 *     SeEtwWriteKMCveEvent @ 0x140642FE0 (SeEtwWriteKMCveEvent.c)
 *     EtwTimLogControlProtectionKernelModeReturnMismatch @ 0x140643A68 (EtwTimLogControlProtectionKernelModeReturnMismatch.c)
 *     KitLogFeatureUsage @ 0x14064DC40 (KitLogFeatureUsage.c)
 *     WheaLogInternalEvent @ 0x1406520E0 (WheaLogInternalEvent.c)
 *     WheapGenerateETWErrorRecordLarge @ 0x140652300 (WheapGenerateETWErrorRecordLarge.c)
 *     WheapLogProcessTerminateEvent @ 0x14065251C (WheapLogProcessTerminateEvent.c)
 *     SmKmEtwLogStoreChange @ 0x14078A600 (SmKmEtwLogStoreChange.c)
 *     SmKmEtwLogStoreStats @ 0x14078A718 (SmKmEtwLogStoreStats.c)
 *     EtwTimLogBlockNonCetBinaries @ 0x14079C0B8 (EtwTimLogBlockNonCetBinaries.c)
 *     EtwTimLogProhibitLowILImageMap @ 0x14079CCF4 (EtwTimLogProhibitLowILImageMap.c)
 *     EtwpTimLogMitigationForProcess @ 0x140904814 (EtwpTimLogMitigationForProcess.c)
 *     PerfLogImageLoad @ 0x14090BDC0 (PerfLogImageLoad.c)
 *     EtwpPsProvTraceImage @ 0x140A03FB4 (EtwpPsProvTraceImage.c)
 *     EtwTimLogProhibitNonMicrosoftBinaries @ 0x140ACEE4C (EtwTimLogProhibitNonMicrosoftBinaries.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x140B4F858 (PopDiagTraceFirmwareS3Stats.c)
 *     KasanInitSystem @ 0x140C15600 (KasanInitSystem.c)
 *     PopDiagTraceAdaptiveBootOverride @ 0x140C1E064 (PopDiagTraceAdaptiveBootOverride.c)
 *     PopDiagTraceDirtyTransition @ 0x140C1E1D4 (PopDiagTraceDirtyTransition.c)
 *     PopTriggerDiagTraceAoAcCapability @ 0x140C1EFB8 (PopTriggerDiagTraceAoAcCapability.c)
 *     EtwpTraceBootSystemTime @ 0x140C2C6E4 (EtwpTraceBootSystemTime.c)
 *     EtwpTraceSystemInitialization @ 0x140C2C93C (EtwpTraceSystemInitialization.c)
 *     BapdpRecordIumStatus @ 0x140C2E644 (BapdpRecordIumStatus.c)
 * Callees:
 *     EtwpLevelKeywordEnabled @ 0x1402576B0 (EtwpLevelKeywordEnabled.c)
 *     EtwpEventWriteFull @ 0x14030D050 (EtwpEventWriteFull.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

NTSTATUS __stdcall EtwWriteEx(
        REGHANDLE RegHandle,
        PCEVENT_DESCRIPTOR EventDescriptor,
        ULONG64 Filter,
        ULONG Flags,
        LPCGUID ActivityId,
        LPCGUID RelatedActivityId,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  int v9; // esi
  NTSTATUS v12; // r9d
  __int64 v13; // rax
  __int64 v14; // r13
  __int64 v15; // r10
  __int64 v16; // rcx
  __int64 v18; // r10
  bool v19; // zf
  __int64 v20; // [rsp+90h] [rbp-78h] BYREF
  __int128 v21; // [rsp+98h] [rbp-70h] BYREF
  __int128 v22; // [rsp+A8h] [rbp-60h]

  v20 = 0LL;
  v9 = Filter;
  v12 = 0;
  v21 = 0LL;
  v22 = 0LL;
  if ( !RegHandle )
    return -1073741816;
  v13 = *(_QWORD *)(RegHandle + 104);
  v14 = v13 + 28;
  if ( !v13 )
    v14 = 0LL;
  if ( *(_BYTE *)(RegHandle + 100)
    && (unsigned __int8)EtwpLevelKeywordEnabled(
                          *(_QWORD *)(RegHandle + 32) + 96LL,
                          EventDescriptor->Level,
                          EventDescriptor->Keyword) )
  {
    v12 = EtwpEventWriteFull(
            *(_QWORD *)(RegHandle + 32),
            *(unsigned __int8 *)(RegHandle + 100),
            v9,
            Flags,
            (__int64)EventDescriptor,
            v15,
            v15,
            (__int64)ActivityId,
            (__int64)RelatedActivityId,
            UserDataCount,
            (__int64)UserData,
            v15,
            (__int64)&v21,
            v15,
            *(_WORD *)(RegHandle + 98),
            v14,
            (__int64)&v20);
  }
  if ( *(_BYTE *)(RegHandle + 101)
    && (unsigned __int8)EtwpLevelKeywordEnabled(
                          *(_QWORD *)(RegHandle + 40) + 96LL,
                          EventDescriptor->Level,
                          EventDescriptor->Keyword) )
  {
    v12 = EtwpEventWriteFull(
            *(_QWORD *)(RegHandle + 32),
            *(unsigned __int8 *)(RegHandle + 101),
            v9,
            Flags,
            (__int64)EventDescriptor,
            v18,
            v18,
            (__int64)ActivityId,
            (__int64)RelatedActivityId,
            UserDataCount,
            (__int64)UserData,
            v18,
            (__int64)&v21,
            *(_QWORD *)(RegHandle + 40),
            *(_WORD *)(RegHandle + 98),
            v14,
            (__int64)&v20);
  }
  v16 = *(_QWORD *)(RegHandle + 32);
  if ( *(_QWORD *)(v16 + 400) )
  {
    v19 = *(_BYTE *)(RegHandle + 102) == 0;
    v21 = 0LL;
    v22 = 0LL;
    if ( !v19
      && (unsigned __int8)EtwpLevelKeywordEnabled(
                            *(_QWORD *)(v16 + 400) + 96LL,
                            EventDescriptor->Level,
                            EventDescriptor->Keyword) )
    {
      v12 = EtwpEventWriteFull(
              *(_QWORD *)(*(_QWORD *)(RegHandle + 32) + 400LL),
              *(unsigned __int8 *)(RegHandle + 102),
              0,
              Flags,
              (__int64)EventDescriptor,
              0,
              0,
              (__int64)ActivityId,
              (__int64)RelatedActivityId,
              UserDataCount,
              (__int64)UserData,
              0LL,
              (__int64)&v21,
              0LL,
              *(_WORD *)(RegHandle + 98),
              v14,
              (__int64)&v20);
    }
    if ( *(_BYTE *)(RegHandle + 103) )
    {
      if ( (unsigned __int8)EtwpLevelKeywordEnabled(
                              *(_QWORD *)(*(_QWORD *)(RegHandle + 40) + 400LL) + 96LL,
                              EventDescriptor->Level,
                              EventDescriptor->Keyword) )
        return EtwpEventWriteFull(
                 *(_QWORD *)(*(_QWORD *)(RegHandle + 32) + 400LL),
                 *(unsigned __int8 *)(RegHandle + 103),
                 0,
                 Flags,
                 (__int64)EventDescriptor,
                 0,
                 0,
                 (__int64)ActivityId,
                 (__int64)RelatedActivityId,
                 UserDataCount,
                 (__int64)UserData,
                 0LL,
                 (__int64)&v21,
                 *(_QWORD *)(*(_QWORD *)(RegHandle + 40) + 400LL),
                 *(_WORD *)(RegHandle + 98),
                 v14,
                 (__int64)&v20);
    }
  }
  return v12;
}
