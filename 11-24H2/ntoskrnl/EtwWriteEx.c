/*
 * XREFs of EtwWriteEx @ 0x140289C90
 * Callers:
 *     EtwpLogMemNodeInfo @ 0x140261E3C (EtwpLogMemNodeInfo.c)
 *     EtwpLogMemInfo @ 0x140261FE0 (EtwpLogMemInfo.c)
 *     EtwpTiVadQueryEventWrite @ 0x140262ED4 (EtwpTiVadQueryEventWrite.c)
 *     TlgAggregateAbsorbEvent @ 0x140274154 (TlgAggregateAbsorbEvent.c)
 *     MiLogBadMapper @ 0x140274724 (MiLogBadMapper.c)
 *     EtwpLogKernelEvent @ 0x140287790 (EtwpLogKernelEvent.c)
 *     PpmEventProcessorPerfStateChange @ 0x1402AD2C8 (PpmEventProcessorPerfStateChange.c)
 *     PoFxSendSystemLatencyUpdate @ 0x1402AD9A8 (PoFxSendSystemLatencyUpdate.c)
 *     PpmEventMediaBufferingNotify @ 0x1402ADAC4 (PpmEventMediaBufferingNotify.c)
 *     PpmEventTracePerfCheckStop @ 0x1402AE07C (PpmEventTracePerfCheckStop.c)
 *     PpmEventTraceProcessorLatencyLimitChange @ 0x1402AECA0 (PpmEventTraceProcessorLatencyLimitChange.c)
 *     PpmPerfSnapDeliveredPerformance @ 0x1402AFD50 (PpmPerfSnapDeliveredPerformance.c)
 *     KiIntSteerLogMask @ 0x1402B1728 (KiIntSteerLogMask.c)
 *     KiIntSteerLogProc @ 0x1402B1848 (KiIntSteerLogProc.c)
 *     PpmEventSoftParkRankListChanged @ 0x1402B2E68 (PpmEventSoftParkRankListChanged.c)
 *     KiIntSteerLogState @ 0x1402B2FE4 (KiIntSteerLogState.c)
 *     PopDiagTraceFxDeviceAccounting @ 0x1402B7DE8 (PopDiagTraceFxDeviceAccounting.c)
 *     McGenEventWrite_EtwWriteTransfer @ 0x1402B8E28 (McGenEventWrite_EtwWriteTransfer.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x1402B8E90 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PopDiagTraceRegisterSystemState @ 0x1402B97DC (PopDiagTraceRegisterSystemState.c)
 *     PopDiagTraceSetDeepSleepConstraint @ 0x1402B9EC0 (PopDiagTraceSetDeepSleepConstraint.c)
 *     PopDiagTraceClearDeepSleepConstraint @ 0x1402BA210 (PopDiagTraceClearDeepSleepConstraint.c)
 *     PopDiagTraceFxDefaultPepWorkerStart @ 0x1402BF438 (PopDiagTraceFxDefaultPepWorkerStart.c)
 *     PopDiagTraceFxComponentLatency @ 0x1402BF72C (PopDiagTraceFxComponentLatency.c)
 *     PopFxProcessWork @ 0x1402BFE70 (PopFxProcessWork.c)
 *     IoReuseIrp @ 0x1402C2EB0 (IoReuseIrp.c)
 *     EtwpTraceMessageVa @ 0x1402CF490 (EtwpTraceMessageVa.c)
 *     EtwpLogSystemEventUnsafe @ 0x1402D0080 (EtwpLogSystemEventUnsafe.c)
 *     EtwTraceThreadWorkOnBehalfUpdate @ 0x1402D11F0 (EtwTraceThreadWorkOnBehalfUpdate.c)
 *     EtwpTraceFileIo @ 0x1402D1360 (EtwpTraceFileIo.c)
 *     PspRevertContainerImpersonation @ 0x1402D21C0 (PspRevertContainerImpersonation.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x1402E6324 (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopDiagTraceIrpFinish @ 0x1402E64EC (PopDiagTraceIrpFinish.c)
 *     PopDiagTraceFxDevicePowered @ 0x1402E6904 (PopDiagTraceFxDevicePowered.c)
 *     PnpDiagnosticTraceObject @ 0x1402F0484 (PnpDiagnosticTraceObject.c)
 *     PnpDiagnosticTrace @ 0x1402F0A44 (PnpDiagnosticTrace.c)
 *     KiSetNextClockTickDueTime @ 0x140317B60 (KiSetNextClockTickDueTime.c)
 *     PpmParkComputeUnparkMask @ 0x140328B7C (PpmParkComputeUnparkMask.c)
 *     PpmEventDomainPerfStateChange @ 0x14032CA00 (PpmEventDomainPerfStateChange.c)
 *     EtwpPsProvTracePriority @ 0x140330FD0 (EtwpPsProvTracePriority.c)
 *     EtwTraceMdlAllocationEvent @ 0x1403948E0 (EtwTraceMdlAllocationEvent.c)
 *     EtwTraceContAllocationEvent @ 0x1403960E8 (EtwTraceContAllocationEvent.c)
 *     EtwTraceContFreeEvent @ 0x140398504 (EtwTraceContFreeEvent.c)
 *     PpmEventPerfSelectProcessorState @ 0x1403A3000 (PpmEventPerfSelectProcessorState.c)
 *     PpmEventQosClassPerfSelection @ 0x1403A32A4 (PpmEventQosClassPerfSelection.c)
 *     PpmEventPlatformVetoRequest @ 0x1403A5434 (PpmEventPlatformVetoRequest.c)
 *     PopDiagTraceFxComponentIdleState @ 0x1403A5978 (PopDiagTraceFxComponentIdleState.c)
 *     EtwpTraceFileName @ 0x1403C2F70 (EtwpTraceFileName.c)
 *     PopDiagTraceDeviceAcquireIrp @ 0x1403CC0B4 (PopDiagTraceDeviceAcquireIrp.c)
 *     PoDeviceReleaseIrp @ 0x1403CC27C (PoDeviceReleaseIrp.c)
 *     IopfCompleteRequest @ 0x1403CCDE0 (IopfCompleteRequest.c)
 *     PpmEventCoreParkingSoftParkedStateChange @ 0x1403D79A8 (PpmEventCoreParkingSoftParkedStateChange.c)
 *     PopDiagTraceSetSystemState @ 0x1403E68D4 (PopDiagTraceSetSystemState.c)
 *     EtwpTraceLostEvent @ 0x1403FAEA8 (EtwpTraceLostEvent.c)
 *     PpmPerfRecordUtility @ 0x140401850 (PpmPerfRecordUtility.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     EtwWriteTransfer @ 0x140410100 (EtwWriteTransfer.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x140410FE0 (PoTraceSystemTimerResolutionKernel.c)
 *     PoTraceSystemTimerResolutionUpdate @ 0x14041141C (PoTraceSystemTimerResolutionUpdate.c)
 *     PpmEventTraceHeteroResponse @ 0x1404176DC (PpmEventTraceHeteroResponse.c)
 *     PpmEventTraceMultiClassHeteroResponse @ 0x1404178DC (PpmEventTraceMultiClassHeteroResponse.c)
 *     PopDiagTraceProcessorThrottlePerfTrack @ 0x140418A80 (PopDiagTraceProcessorThrottlePerfTrack.c)
 *     PpmEventBiosCapChange @ 0x140418DBC (PpmEventBiosCapChange.c)
 *     PpmEventThermalCapChange @ 0x140418EB4 (PpmEventThermalCapChange.c)
 *     PpmEventTraceHeteroSets @ 0x14042BE28 (PpmEventTraceHeteroSets.c)
 *     PopDiagTraceFxComponentLogicalCondition @ 0x140434D90 (PopDiagTraceFxComponentLogicalCondition.c)
 *     PpmEventTraceProcessorIdleAccounting @ 0x140436770 (PpmEventTraceProcessorIdleAccounting.c)
 *     PopDiagTraceFxDefaultPepWorkerEnd @ 0x140438020 (PopDiagTraceFxDefaultPepWorkerEnd.c)
 *     SeLogAccessFailure @ 0x140438750 (SeLogAccessFailure.c)
 *     EtwpNetProvTraceNetwork @ 0x14043F998 (EtwpNetProvTraceNetwork.c)
 *     EtwTraceDpcProfilingStack @ 0x14043FDEC (EtwTraceDpcProfilingStack.c)
 *     EtwTraceDpcProfilingStackBegin @ 0x14043FE7C (EtwTraceDpcProfilingStackBegin.c)
 *     SshpTracingWriteBlockerStateChange @ 0x140444E2C (SshpTracingWriteBlockerStateChange.c)
 *     PpmEventComputeEnergy @ 0x140445570 (PpmEventComputeEnergy.c)
 *     IopInitActivityIdIrp @ 0x140449990 (IopInitActivityIdIrp.c)
 *     PpmEventParkNodeRecordedStats @ 0x14044BBFC (PpmEventParkNodeRecordedStats.c)
 *     PpmEventTraceLatencySensitivityHint @ 0x14044BF2C (PpmEventTraceLatencySensitivityHint.c)
 *     PpmEventTracePerfCheckStart @ 0x14044C314 (PpmEventTracePerfCheckStart.c)
 *     PpmEventTraceFailedPerfCheckStart @ 0x14044C518 (PpmEventTraceFailedPerfCheckStart.c)
 *     EtwTraceMemoryAcg @ 0x14044DA80 (EtwTraceMemoryAcg.c)
 *     EtwpTiFillVadEventWrite @ 0x140455204 (EtwpTiFillVadEventWrite.c)
 *     SetFailureLocation @ 0x14045B110 (SetFailureLocation.c)
 *     PopDiagTracePowerRequestChange @ 0x1404650CC (PopDiagTracePowerRequestChange.c)
 *     PopDiagTraceSystemLatencyUpdate @ 0x140469380 (PopDiagTraceSystemLatencyUpdate.c)
 *     PpmEventHeteroFavoredCoreRotationChange @ 0x1404696E0 (PpmEventHeteroFavoredCoreRotationChange.c)
 *     PpmEventTraceExpectedUtility @ 0x140469D1C (PpmEventTraceExpectedUtility.c)
 *     PopDiagTraceIrpStart @ 0x14046B350 (PopDiagTraceIrpStart.c)
 *     PpmEventTraceSoftCoreParkingSelection @ 0x14046C3EC (PpmEventTraceSoftCoreParkingSelection.c)
 *     PpmEventParkingCountSelection @ 0x1404700AC (PpmEventParkingCountSelection.c)
 *     WheapGenerateETWErrorRecord @ 0x14047489C (WheapGenerateETWErrorRecord.c)
 *     MiLogSlabEntryAllocateFailure @ 0x14047E460 (MiLogSlabEntryAllocateFailure.c)
 *     PpmEventPlatformVetoRundown @ 0x14048073C (PpmEventPlatformVetoRundown.c)
 *     PpmEventProcessorVetoRundown @ 0x14048088C (PpmEventProcessorVetoRundown.c)
 *     PpmEventTracePreVetoAccounting @ 0x140480A8C (PpmEventTracePreVetoAccounting.c)
 *     SshpTracingWriteBlockerStateRundown @ 0x14048173C (SshpTracingWriteBlockerStateRundown.c)
 *     PopDiagTraceFxDevicePowerState @ 0x140483350 (PopDiagTraceFxDevicePowerState.c)
 *     PoTraceForceIdleStateChange @ 0x140484EA0 (PoTraceForceIdleStateChange.c)
 *     PpmEventCoreParkingStateChangeEx @ 0x1404857A4 (PpmEventCoreParkingStateChangeEx.c)
 *     SshpWriteBlocker @ 0x1404859D0 (SshpWriteBlocker.c)
 *     PopDiagTraceEventNoPayload @ 0x1404874D4 (PopDiagTraceEventNoPayload.c)
 *     PpmEventCoreParkingStateChange @ 0x1404886C8 (PpmEventCoreParkingStateChange.c)
 *     KsepLogEtwMessage @ 0x140488B58 (KsepLogEtwMessage.c)
 *     PpmEventTraceMakeupPerfCheck @ 0x14048F5F8 (PpmEventTraceMakeupPerfCheck.c)
 *     PopBatteryTraceSystemBatteryStatus @ 0x14049319C (PopBatteryTraceSystemBatteryStatus.c)
 *     PopDiagTraceSleepStudyBlocker @ 0x140494FCC (PopDiagTraceSleepStudyBlocker.c)
 *     PopDirectedDripsDiagTraceNotifyDevices @ 0x14049736C (PopDirectedDripsDiagTraceNotifyDevices.c)
 *     PopDiagTraceIdleResiliencyStart @ 0x140498B00 (PopDiagTraceIdleResiliencyStart.c)
 *     PopDiagTraceIdleResiliencyEnd @ 0x140498BC0 (PopDiagTraceIdleResiliencyEnd.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x14049AACC (PnpDiagnosticTraceObjectWithStatus.c)
 *     PopSqmAddToStream @ 0x14049ABB8 (PopSqmAddToStream.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x14049AEBC (_tlgWriteEx_EtwWriteEx.c)
 *     PopDiagTraceDeviceIdleCheck @ 0x14049C678 (PopDiagTraceDeviceIdleCheck.c)
 *     SSHSupportEtwWrite @ 0x14049EA8C (SSHSupportEtwWrite.c)
 *     BapdWriteEtwEvents @ 0x14049F614 (BapdWriteEtwEvents.c)
 *     PopDiagTraceThermalZoneRundown @ 0x1404A0018 (PopDiagTraceThermalZoneRundown.c)
 *     MiLogPeriodicTelemetryForSlabAllocator @ 0x1404A55E0 (MiLogPeriodicTelemetryForSlabAllocator.c)
 *     PpmEventVetoReasonRundown @ 0x1404A6928 (PpmEventVetoReasonRundown.c)
 *     PopDiagTraceSessionDisplayStateChange @ 0x1404A7B1C (PopDiagTraceSessionDisplayStateChange.c)
 *     PpmEventHgsHardwareTable @ 0x1404A81D4 (PpmEventHgsHardwareTable.c)
 *     PoTraceSystemTimerResolutionIgnore @ 0x1404A91A8 (PoTraceSystemTimerResolutionIgnore.c)
 *     PpmEventHgsContainmentUnparkedCount @ 0x1404AB660 (PpmEventHgsContainmentUnparkedCount.c)
 *     IoTransferActivityId @ 0x1404ABE60 (IoTransferActivityId.c)
 *     PopDiagTraceDeepSleepConstraintRundown @ 0x1404AD474 (PopDiagTraceDeepSleepConstraintRundown.c)
 *     PpmHeteroDispatchHgsInterrupt @ 0x1404AFB20 (PpmHeteroDispatchHgsInterrupt.c)
 *     PopDiagTraceNonAttributedCpuReferences @ 0x1404AFBA4 (PopDiagTraceNonAttributedCpuReferences.c)
 *     HalpIommuTraceFault @ 0x1404B0C2C (HalpIommuTraceFault.c)
 *     PopDiagTraceFxPerfRequestComplete @ 0x1404B15A0 (PopDiagTraceFxPerfRequestComplete.c)
 *     PopDiagTraceFxPerfRequestProgress @ 0x1404B18C4 (PopDiagTraceFxPerfRequestProgress.c)
 *     PopDiagTraceFxPerfRequest @ 0x1404B1A24 (PopDiagTraceFxPerfRequest.c)
 *     PopDiagTraceFxDeviceDirectedTransition @ 0x1404B3DB0 (PopDiagTraceFxDeviceDirectedTransition.c)
 *     EtwpTraceLostSystemEvent @ 0x1404B434C (EtwpTraceLostSystemEvent.c)
 *     PpmEventTraceLPIState @ 0x1404B5C60 (PpmEventTraceLPIState.c)
 *     PpmEventHgsHardwareTableResonMapTable @ 0x1404BD62C (PpmEventHgsHardwareTableResonMapTable.c)
 *     PpmEventHgsNormalizedTable @ 0x1404C031C (PpmEventHgsNormalizedTable.c)
 *     PnpDiagnosticTraceElamDecision @ 0x1404C19DC (PnpDiagnosticTraceElamDecision.c)
 *     PpmEventParkNodeClassRecordedStats @ 0x1404C5A78 (PpmEventParkNodeClassRecordedStats.c)
 *     PpmEventHgsHardwareTableResonChanged @ 0x1404C6008 (PpmEventHgsHardwareTableResonChanged.c)
 *     PopDiagTraceRtcWakeInfo @ 0x1404CDAB0 (PopDiagTraceRtcWakeInfo.c)
 *     PopDiagTraceIrpPended @ 0x1404CE754 (PopDiagTraceIrpPended.c)
 *     PopDiagTraceFxDeviceDirectedCompletion @ 0x1404CF918 (PopDiagTraceFxDeviceDirectedCompletion.c)
 *     PoDiagTraceIRTimerSleepStudyRundown @ 0x1404CFA14 (PoDiagTraceIRTimerSleepStudyRundown.c)
 *     IopDumpTraceLoadCrashDumpDriverFailure @ 0x1404D19BC (IopDumpTraceLoadCrashDumpDriverFailure.c)
 *     PpmEventParkNodeParkHintChanged @ 0x1404D1B18 (PpmEventParkNodeParkHintChanged.c)
 *     PopScanIdleList @ 0x1404E1E10 (PopScanIdleList.c)
 *     PpmEventHgsActiveWorkloadClass @ 0x1404E4500 (PpmEventHgsActiveWorkloadClass.c)
 *     PpmEventHgsContainmentHwUpdate @ 0x1404E466C (PpmEventHgsContainmentHwUpdate.c)
 *     PpmEventHgsCoresUnparkedCount @ 0x1404E4750 (PpmEventHgsCoresUnparkedCount.c)
 *     PpmEventParkNodeRestriction @ 0x1404E4890 (PpmEventParkNodeRestriction.c)
 *     PpmEventTraceMultiClassHeteroResponseUpdate @ 0x1404E49EC (PpmEventTraceMultiClassHeteroResponseUpdate.c)
 *     PsDispatchIumService @ 0x1404E66B4 (PsDispatchIumService.c)
 *     PopBatteryTraceSystemBatteryStatusV1 @ 0x1404F8784 (PopBatteryTraceSystemBatteryStatusV1.c)
 *     HalpTscTraceProcessorDelta @ 0x140547314 (HalpTscTraceProcessorDelta.c)
 *     HalpTscTraceProcessorSynchronization @ 0x1405473F8 (HalpTscTraceProcessorSynchronization.c)
 *     HalpTscTraceStatus @ 0x1405474F8 (HalpTscTraceStatus.c)
 *     HalpTscTraceSynchronizationSummary @ 0x140547594 (HalpTscTraceSynchronizationSummary.c)
 *     HalpIommuLogEarlyFault @ 0x140551B40 (HalpIommuLogEarlyFault.c)
 *     DbgkpLkmdSqmIncrementDword @ 0x14057BEB8 (DbgkpLkmdSqmIncrementDword.c)
 *     HvlpWriteEventLog @ 0x140588A34 (HvlpWriteEventLog.c)
 *     IopDumpTraceCrashDumpDisabled @ 0x140590D60 (IopDumpTraceCrashDumpDisabled.c)
 *     IopDumpTraceCrashDumpReconfiguration @ 0x140590E3C (IopDumpTraceCrashDumpReconfiguration.c)
 *     IopDumpTraceDisableCrashDumpFailure @ 0x140590F4C (IopDumpTraceDisableCrashDumpFailure.c)
 *     IopDumpTraceFreeDumpStackFailure @ 0x14059105C (IopDumpTraceFreeDumpStackFailure.c)
 *     IopDumpTraceInitializeCrashDumpFailure @ 0x14059116C (IopDumpTraceInitializeCrashDumpFailure.c)
 *     IopDumpTraceInitializeDumpStackFailure @ 0x14059127C (IopDumpTraceInitializeDumpStackFailure.c)
 *     IopDumpTraceLoadDumpStackFailure @ 0x14059138C (IopDumpTraceLoadDumpStackFailure.c)
 *     IopLiveDumpTrace @ 0x14059FFB0 (IopLiveDumpTrace.c)
 *     IopLiveDumpTraceEventGeneric @ 0x1405A0124 (IopLiveDumpTraceEventGeneric.c)
 *     PnpDiagnosticTraceElamStatus @ 0x1405A175C (PnpDiagnosticTraceElamStatus.c)
 *     KasaniSendReport @ 0x1405A7250 (KasaniSendReport.c)
 *     KasaniSendTelemetryDriver @ 0x1405A7CB0 (KasaniSendTelemetryDriver.c)
 *     KcsanReportTelemetry @ 0x1405AB2D0 (KcsanReportTelemetry.c)
 *     KcsaniSendReport @ 0x1405AB8F0 (KcsaniSendReport.c)
 *     KsepEvntLogFlagsApplied @ 0x1405C7CC8 (KsepEvntLogFlagsApplied.c)
 *     KsepEvntLogShimsApplied @ 0x1405C7DDC (KsepEvntLogShimsApplied.c)
 *     KsepDsEventAddDevice @ 0x1405C8848 (KsepDsEventAddDevice.c)
 *     KsepDsEventDataIrp @ 0x1405C8970 (KsepDsEventDataIrp.c)
 *     KsepDsEventDevicePowerCompleted @ 0x1405C8A68 (KsepDsEventDevicePowerCompleted.c)
 *     KsepDsEventDevicePowerIrp @ 0x1405C8B4C (KsepDsEventDevicePowerIrp.c)
 *     KsepDsEventDriverLoad @ 0x1405C8C64 (KsepDsEventDriverLoad.c)
 *     KsepDsEventDriverStartIo @ 0x1405C8D6C (KsepDsEventDriverStartIo.c)
 *     KsepDsEventDriverUnload @ 0x1405C8E34 (KsepDsEventDriverUnload.c)
 *     KsepDsEventIoCreateDevice @ 0x1405C8EF0 (KsepDsEventIoCreateDevice.c)
 *     KsepDsEventPnpIrp @ 0x1405C9000 (KsepDsEventPnpIrp.c)
 *     KsepDsEventPnpStartDevice @ 0x1405C90F8 (KsepDsEventPnpStartDevice.c)
 *     KsepDsEventPnpStopDevice @ 0x1405C91DC (KsepDsEventPnpStopDevice.c)
 *     KsepDsEventPoolAllocate @ 0x1405C92C0 (KsepDsEventPoolAllocate.c)
 *     KsepDsEventPoolFree @ 0x1405C93BC (KsepDsEventPoolFree.c)
 *     KsepDsEventRequestPowerIrp @ 0x1405C9488 (KsepDsEventRequestPowerIrp.c)
 *     KsepDsEventSystemPowerIrp @ 0x1405C9590 (KsepDsEventSystemPowerIrp.c)
 *     KsepSkipDriverUnloadEventDriverLoad @ 0x1405C982C (KsepSkipDriverUnloadEventDriverLoad.c)
 *     KsepSkipDriverUnloadEventDriverUnload @ 0x1405C9934 (KsepSkipDriverUnloadEventDriverUnload.c)
 *     PopIrpWatchdogBugcheck @ 0x1405CA848 (PopIrpWatchdogBugcheck.c)
 *     PoTraceDynamicTickDisabled @ 0x1405D1A74 (PoTraceDynamicTickDisabled.c)
 *     PoTraceForceIdleReset @ 0x1405D1B18 (PoTraceForceIdleReset.c)
 *     PopDiagTraceAbnormalReset @ 0x1405D1C40 (PopDiagTraceAbnormalReset.c)
 *     PopDiagTraceCsDeepSleepWatchdog @ 0x1405D1CE0 (PopDiagTraceCsDeepSleepWatchdog.c)
 *     PopDiagTraceCsDripsDivergence @ 0x1405D1DFC (PopDiagTraceCsDripsDivergence.c)
 *     PopDiagTraceCsDripsWatchdog @ 0x1405D1EE8 (PopDiagTraceCsDripsWatchdog.c)
 *     PopDiagTraceCsDripsWatchdogPerfTrack @ 0x1405D20D8 (PopDiagTraceCsDripsWatchdogPerfTrack.c)
 *     PopDiagTraceCsFanPerfTrack @ 0x1405D2230 (PopDiagTraceCsFanPerfTrack.c)
 *     PopDiagTraceDebuggerTransitionRequirements @ 0x1405D22EC (PopDiagTraceDebuggerTransitionRequirements.c)
 *     PopDiagTraceDeviceComplianceUpdate @ 0x1405D23CC (PopDiagTraceDeviceComplianceUpdate.c)
 *     PopDiagTraceEsState @ 0x1405D2488 (PopDiagTraceEsState.c)
 *     PopDiagTraceFxComponentIdleConstraints @ 0x1405D2548 (PopDiagTraceFxComponentIdleConstraints.c)
 *     PopDiagTraceFxComponentResidency @ 0x1405D2638 (PopDiagTraceFxComponentResidency.c)
 *     PopDiagTraceFxComponentWake @ 0x1405D271C (PopDiagTraceFxComponentWake.c)
 *     PopDiagTraceFxDeviceIdleConstraints @ 0x1405D2810 (PopDiagTraceFxDeviceIdleConstraints.c)
 *     PopDiagTraceFxPerfNominalChange @ 0x1405D28F0 (PopDiagTraceFxPerfNominalChange.c)
 *     PopDiagTraceIoCoalescingDiskIdle @ 0x1405D2A28 (PopDiagTraceIoCoalescingDiskIdle.c)
 *     PopDiagTraceProcessorThrottleDurationPerfTrack @ 0x1405D2AC8 (PopDiagTraceProcessorThrottleDurationPerfTrack.c)
 *     PopDiagTraceShutdownAction @ 0x1405D2C18 (PopDiagTraceShutdownAction.c)
 *     PopDiagTraceThermalStateChange @ 0x1405D2D3C (PopDiagTraceThermalStateChange.c)
 *     PopDiagTraceThermalZoneEnumeration @ 0x1405D2E64 (PopDiagTraceThermalZoneEnumeration.c)
 *     PopDiagTraceThermalZoneThrottleDurationPerfTrack @ 0x1405D3204 (PopDiagTraceThermalZoneThrottleDurationPerfTrack.c)
 *     PopDiagTraceThermalZoneThrottlePerfTrack @ 0x1405D3338 (PopDiagTraceThermalZoneThrottlePerfTrack.c)
 *     PpmEventAffinityMask @ 0x1405D6230 (PpmEventAffinityMask.c)
 *     PpmEventAutonomousModeChange @ 0x1405D63B4 (PpmEventAutonomousModeChange.c)
 *     PpmEventCoreParkingForceParkedStateChange @ 0x1405D647C (PpmEventCoreParkingForceParkedStateChange.c)
 *     PpmEventHgsContainmentGroupInfo @ 0x1405D660C (PpmEventHgsContainmentGroupInfo.c)
 *     PpmEventHgsContainmentPolicyChange @ 0x1405D67C4 (PpmEventHgsContainmentPolicyChange.c)
 *     PpmEventHiddenProcessorBiosCapChange @ 0x1405D694C (PpmEventHiddenProcessorBiosCapChange.c)
 *     PpmEventHiddenProcessorThermalCapChange @ 0x1405D6A4C (PpmEventHiddenProcessorThermalCapChange.c)
 *     PpmEventLPICoreParking @ 0x1405D6B4C (PpmEventLPICoreParking.c)
 *     PpmEventParkNodeCapChange @ 0x1405D6C0C (PpmEventParkNodeCapChange.c)
 *     PpmEventParkNodePreference @ 0x1405D6CF8 (PpmEventParkNodePreference.c)
 *     PpmEventProcessorVetoRequest @ 0x1405D6E18 (PpmEventProcessorVetoRequest.c)
 *     PpmEventSoftParkLatencyUpdate @ 0x1405D6F30 (PpmEventSoftParkLatencyUpdate.c)
 *     PpmEventTraceHeteroDistributeUtility @ 0x1405D7014 (PpmEventTraceHeteroDistributeUtility.c)
 *     PpmEventVpQosChange @ 0x1405D7124 (PpmEventVpQosChange.c)
 *     PopDirectedDripsDiagTraceDfxPowerStateFailure @ 0x1405D90E4 (PopDirectedDripsDiagTraceDfxPowerStateFailure.c)
 *     PpmEventAffinityMaskEx @ 0x1405DA420 (PpmEventAffinityMaskEx.c)
 *     PpmEventHgsActiveWorkloadClassEx @ 0x1405DA510 (PpmEventHgsActiveWorkloadClassEx.c)
 *     PpmEventHgsContainmentUnparkedCountEx @ 0x1405DA6C8 (PpmEventHgsContainmentUnparkedCountEx.c)
 *     PpmEventHgsCoresUnparkedCountEx @ 0x1405DA8F8 (PpmEventHgsCoresUnparkedCountEx.c)
 *     PpmEventParkNodeCapChangeEx @ 0x1405DAA80 (PpmEventParkNodeCapChangeEx.c)
 *     PpmEventParkNodeClassRecordedStatsEx @ 0x1405DAC48 (PpmEventParkNodeClassRecordedStatsEx.c)
 *     PpmEventParkNodeParkHintChangedEx @ 0x1405DADD8 (PpmEventParkNodeParkHintChangedEx.c)
 *     PpmEventParkNodePreferenceEx @ 0x1405DAF00 (PpmEventParkNodePreferenceEx.c)
 *     PpmEventParkNodeRecordedStatsEx @ 0x1405DB128 (PpmEventParkNodeRecordedStatsEx.c)
 *     PpmEventParkNodeRestrictionEx @ 0x1405DB39C (PpmEventParkNodeRestrictionEx.c)
 *     PpmEventParkingCountSelectionEx @ 0x1405DB53C (PpmEventParkingCountSelectionEx.c)
 *     PpmEventTraceCoreParkingSelectionEx @ 0x1405DB6A0 (PpmEventTraceCoreParkingSelectionEx.c)
 *     PpmEventTraceHeteroDistributeUtilityEx @ 0x1405DBA94 (PpmEventTraceHeteroDistributeUtilityEx.c)
 *     PpmEventTraceHeteroResponseEx @ 0x1405DBBC4 (PpmEventTraceHeteroResponseEx.c)
 *     PpmEventTraceHeteroResponseExV1 @ 0x1405DBE40 (PpmEventTraceHeteroResponseExV1.c)
 *     PpmEventTraceMultiClassHeteroResponseEx @ 0x1405DC0EC (PpmEventTraceMultiClassHeteroResponseEx.c)
 *     PpmEventTraceMultiClassHeteroResponseUpdateEx @ 0x1405DC2F4 (PpmEventTraceMultiClassHeteroResponseUpdateEx.c)
 *     PpmEventTraceSoftCoreParkingSelectionEx @ 0x1405DC3F8 (PpmEventTraceSoftCoreParkingSelectionEx.c)
 *     SeReportLearningModeViolation @ 0x1406060D0 (SeReportLearningModeViolation.c)
 *     SmEtwLogRegionOp @ 0x14060B93C (SmEtwLogRegionOp.c)
 *     SmEtwLogStoreCorruption @ 0x14060BA08 (SmEtwLogStoreCorruption.c)
 *     SmEtwLogStoreOp @ 0x14060BB34 (SmEtwLogStoreOp.c)
 *     SmEtwLogStoreStateChange @ 0x14060BC00 (SmEtwLogStoreStateChange.c)
 *     SmKmStoreTerminateWorker @ 0x14060C0E0 (SmKmStoreTerminateWorker.c)
 *     SmKmSqmAddToStream @ 0x14060E12C (SmKmSqmAddToStream.c)
 *     EtwTraceCpuPartitionAffinityViolation @ 0x14064BB1C (EtwTraceCpuPartitionAffinityViolation.c)
 *     EtwTraceCpuPartitionDpcSchedulingViolation @ 0x14064BCC0 (EtwTraceCpuPartitionDpcSchedulingViolation.c)
 *     EtwTraceCpuPartitionGenericDpcViolation @ 0x14064BD7C (EtwTraceCpuPartitionGenericDpcViolation.c)
 *     EtwTraceCumulativeDpcSoftTimeout @ 0x14064BE18 (EtwTraceCumulativeDpcSoftTimeout.c)
 *     EtwTraceJobServerSiloMonitorCallback @ 0x14064C040 (EtwTraceJobServerSiloMonitorCallback.c)
 *     EtwTraceProcessSetInPrivateMode @ 0x14064C354 (EtwTraceProcessSetInPrivateMode.c)
 *     EtwTraceSingleDpcSoftTimeout @ 0x14064C628 (EtwTraceSingleDpcSoftTimeout.c)
 *     SeEtwWriteKMCveEvent @ 0x14064D600 (SeEtwWriteKMCveEvent.c)
 *     EtwTimLogControlProtectionKernelModeReturnMismatch @ 0x14064E0B4 (EtwTimLogControlProtectionKernelModeReturnMismatch.c)
 *     KitLogFeatureUsage @ 0x140658180 (KitLogFeatureUsage.c)
 *     WheaLogInternalEvent @ 0x14065C840 (WheaLogInternalEvent.c)
 *     WheapGenerateETWErrorRecordLarge @ 0x14065CA60 (WheapGenerateETWErrorRecordLarge.c)
 *     WheapLogProcessTerminateEvent @ 0x14065CC7C (WheapLogProcessTerminateEvent.c)
 *     SmKmEtwLogStoreChange @ 0x140799AD8 (SmKmEtwLogStoreChange.c)
 *     SmKmEtwLogStoreStats @ 0x140799BF0 (SmKmEtwLogStoreStats.c)
 *     EtwTimLogBlockNonCetBinaries @ 0x1407AB958 (EtwTimLogBlockNonCetBinaries.c)
 *     EtwTimLogProhibitLowILImageMap @ 0x1407AC594 (EtwTimLogProhibitLowILImageMap.c)
 *     PerfLogImageLoad @ 0x140922600 (PerfLogImageLoad.c)
 *     EtwpPsProvTraceImage @ 0x1409FF944 (EtwpPsProvTraceImage.c)
 *     EtwpTimLogMitigationForProcess @ 0x140A63DF0 (EtwpTimLogMitigationForProcess.c)
 *     EtwTimLogProhibitNonMicrosoftBinaries @ 0x140ADB280 (EtwTimLogProhibitNonMicrosoftBinaries.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x140B61A18 (PopDiagTraceFirmwareS3Stats.c)
 *     KasanInitSystem @ 0x140C286E0 (KasanInitSystem.c)
 *     PopDiagTraceAdaptiveBootOverride @ 0x140C31280 (PopDiagTraceAdaptiveBootOverride.c)
 *     PopDiagTraceDirtyTransition @ 0x140C313F0 (PopDiagTraceDirtyTransition.c)
 *     PopTriggerDiagTraceAoAcCapability @ 0x140C321D4 (PopTriggerDiagTraceAoAcCapability.c)
 *     EtwpTraceBootSystemTime @ 0x140C3FB14 (EtwpTraceBootSystemTime.c)
 *     EtwpTraceSystemInitialization @ 0x140C3FD6C (EtwpTraceSystemInitialization.c)
 *     BapdpRecordIumStatus @ 0x140C41A70 (BapdpRecordIumStatus.c)
 * Callees:
 *     EtwpLevelKeywordEnabled @ 0x1402D1760 (EtwpLevelKeywordEnabled.c)
 *     EtwpEventWriteFull @ 0x140326D30 (EtwpEventWriteFull.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
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
  __int64 v12; // r9
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
  v12 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  if ( !RegHandle )
    return -1073741816;
  v13 = *(_QWORD *)(RegHandle + 112);
  v14 = v13 + 28;
  if ( !v13 )
    v14 = 0LL;
  if ( *(_WORD *)(RegHandle + 100)
    && (unsigned __int8)EtwpLevelKeywordEnabled(
                          *(_QWORD *)(RegHandle + 32) + 96LL,
                          EventDescriptor->Level,
                          EventDescriptor->Keyword,
                          0LL) )
  {
    v12 = (unsigned int)EtwpEventWriteFull(
                          *(_QWORD *)(RegHandle + 32),
                          *(unsigned __int16 *)(RegHandle + 100),
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
  if ( *(_WORD *)(RegHandle + 102)
    && (unsigned __int8)EtwpLevelKeywordEnabled(
                          *(_QWORD *)(RegHandle + 40) + 96LL,
                          EventDescriptor->Level,
                          EventDescriptor->Keyword,
                          v12) )
  {
    v12 = (unsigned int)EtwpEventWriteFull(
                          *(_QWORD *)(RegHandle + 32),
                          *(unsigned __int16 *)(RegHandle + 102),
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
  if ( *(_QWORD *)(v16 + 656) )
  {
    v19 = *(_WORD *)(RegHandle + 104) == 0;
    v21 = 0LL;
    v22 = 0LL;
    if ( !v19
      && (unsigned __int8)EtwpLevelKeywordEnabled(
                            *(_QWORD *)(v16 + 656) + 96LL,
                            EventDescriptor->Level,
                            EventDescriptor->Keyword,
                            v12) )
    {
      v12 = (unsigned int)EtwpEventWriteFull(
                            *(_QWORD *)(*(_QWORD *)(RegHandle + 32) + 656LL),
                            *(unsigned __int16 *)(RegHandle + 104),
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
    if ( *(_WORD *)(RegHandle + 106) )
    {
      if ( (unsigned __int8)EtwpLevelKeywordEnabled(
                              *(_QWORD *)(*(_QWORD *)(RegHandle + 40) + 656LL) + 96LL,
                              EventDescriptor->Level,
                              EventDescriptor->Keyword,
                              v12) )
        LODWORD(v12) = EtwpEventWriteFull(
                         *(_QWORD *)(*(_QWORD *)(RegHandle + 32) + 656LL),
                         *(unsigned __int16 *)(RegHandle + 106),
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
                         *(_QWORD *)(*(_QWORD *)(RegHandle + 40) + 656LL),
                         *(_WORD *)(RegHandle + 98),
                         v14,
                         (__int64)&v20);
    }
  }
  return v12;
}
