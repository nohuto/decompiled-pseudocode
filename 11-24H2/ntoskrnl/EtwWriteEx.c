/*
 * XREFs of EtwWriteEx @ 0x140259680
 * Callers:
 *     PpmParkComputeUnparkMask @ 0x140200488 (PpmParkComputeUnparkMask.c)
 *     PpmEventHgsHardwareTable @ 0x140203014 (PpmEventHgsHardwareTable.c)
 *     PpmEventDomainPerfStateChange @ 0x140205420 (PpmEventDomainPerfStateChange.c)
 *     EtwpPsProvTracePriority @ 0x1402099F0 (EtwpPsProvTracePriority.c)
 *     EtwpLogKernelEvent @ 0x140257180 (EtwpLogKernelEvent.c)
 *     PpmEventProcessorPerfStateChange @ 0x14029E7D8 (PpmEventProcessorPerfStateChange.c)
 *     PpmEventTracePerfCheckStop @ 0x14029FD0C (PpmEventTracePerfCheckStop.c)
 *     KiSetNextClockTickDueTime @ 0x1402A01F0 (KiSetNextClockTickDueTime.c)
 *     PoDeviceReleaseIrp @ 0x1402A1810 (PoDeviceReleaseIrp.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x1402A18F4 (PoTraceSystemTimerResolutionKernel.c)
 *     EtwTraceThreadWorkOnBehalfUpdate @ 0x1402A1AC0 (EtwTraceThreadWorkOnBehalfUpdate.c)
 *     EtwpTraceFileIo @ 0x1402A1C30 (EtwpTraceFileIo.c)
 *     PspRevertContainerImpersonation @ 0x1402A2A90 (PspRevertContainerImpersonation.c)
 *     PopDiagTraceFxDefaultPepWorkerStart @ 0x140316888 (PopDiagTraceFxDefaultPepWorkerStart.c)
 *     PopDiagTraceFxComponentLatency @ 0x140316B7C (PopDiagTraceFxComponentLatency.c)
 *     PopFxProcessWork @ 0x1403172E0 (PopFxProcessWork.c)
 *     IoReuseIrp @ 0x14031A320 (IoReuseIrp.c)
 *     EtwpTraceMessageVa @ 0x140326900 (EtwpTraceMessageVa.c)
 *     EtwpLogSystemEventUnsafe @ 0x1403274F0 (EtwpLogSystemEventUnsafe.c)
 *     EtwpTraceLostEvent @ 0x14032BB34 (EtwpTraceLostEvent.c)
 *     PpmEventTraceProcessorIdleAccounting @ 0x14032C460 (PpmEventTraceProcessorIdleAccounting.c)
 *     PopDiagTraceFxDeviceAccounting @ 0x14032F5A4 (PopDiagTraceFxDeviceAccounting.c)
 *     McGenEventWrite_EtwWriteTransfer @ 0x1403305B0 (McGenEventWrite_EtwWriteTransfer.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x140330618 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PopDiagTraceRegisterSystemState @ 0x140330FEC (PopDiagTraceRegisterSystemState.c)
 *     EtwpTraceFileName @ 0x140349530 (EtwpTraceFileName.c)
 *     PpmPerfSnapDeliveredPerformance @ 0x140351020 (PpmPerfSnapDeliveredPerformance.c)
 *     KiIntSteerLogMask @ 0x140353958 (KiIntSteerLogMask.c)
 *     KiIntSteerLogProc @ 0x140353A78 (KiIntSteerLogProc.c)
 *     PpmEventSoftParkRankListChanged @ 0x140355138 (PpmEventSoftParkRankListChanged.c)
 *     KiIntSteerLogState @ 0x1403552B4 (KiIntSteerLogState.c)
 *     SeLogAccessFailure @ 0x14035F070 (SeLogAccessFailure.c)
 *     PopDiagTraceFxDevicePowerState @ 0x1403768BC (PopDiagTraceFxDevicePowerState.c)
 *     PopDiagTraceIrpStart @ 0x14037712C (PopDiagTraceIrpStart.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x140377C48 (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopDiagTraceIrpFinish @ 0x140377E10 (PopDiagTraceIrpFinish.c)
 *     PopDiagTraceFxDevicePowered @ 0x140378228 (PopDiagTraceFxDevicePowered.c)
 *     EtwTraceContFreeEvent @ 0x1403A9874 (EtwTraceContFreeEvent.c)
 *     PoFxSendSystemLatencyUpdate @ 0x1403B5638 (PoFxSendSystemLatencyUpdate.c)
 *     PpmEventTraceProcessorLatencyLimitChange @ 0x1403B5D60 (PpmEventTraceProcessorLatencyLimitChange.c)
 *     PpmEventMediaBufferingNotify @ 0x1403B6618 (PpmEventMediaBufferingNotify.c)
 *     PpmEventTraceLatencySensitivityHint @ 0x1403B7BDC (PpmEventTraceLatencySensitivityHint.c)
 *     PpmEventPlatformVetoRequest @ 0x1403CA864 (PpmEventPlatformVetoRequest.c)
 *     PopDiagTraceSetDeepSleepConstraint @ 0x1403CB3A8 (PopDiagTraceSetDeepSleepConstraint.c)
 *     PopDiagTraceClearDeepSleepConstraint @ 0x1403CB6F8 (PopDiagTraceClearDeepSleepConstraint.c)
 *     PoTraceForceIdleStateChange @ 0x1403CBA60 (PoTraceForceIdleStateChange.c)
 *     PopDiagTraceNonAttributedCpuReferences @ 0x1403CBBC4 (PopDiagTraceNonAttributedCpuReferences.c)
 *     TlgAggregateAbsorbEvent @ 0x1403D078C (TlgAggregateAbsorbEvent.c)
 *     MiLogBadMapper @ 0x1403D0C38 (MiLogBadMapper.c)
 *     MiLogPeriodicTelemetryForSlabAllocator @ 0x1403D1F60 (MiLogPeriodicTelemetryForSlabAllocator.c)
 *     MiLogSlabEntryAllocateFailure @ 0x1403D2660 (MiLogSlabEntryAllocateFailure.c)
 *     EtwpTiVadQueryEventWrite @ 0x1403D3680 (EtwpTiVadQueryEventWrite.c)
 *     EtwpLogMemNodeInfo @ 0x1403D3EBC (EtwpLogMemNodeInfo.c)
 *     EtwpLogMemInfo @ 0x1403D4060 (EtwpLogMemInfo.c)
 *     PopDiagTraceDeviceAcquireIrp @ 0x1403D9D34 (PopDiagTraceDeviceAcquireIrp.c)
 *     IopfCompleteRequest @ 0x1403DBB10 (IopfCompleteRequest.c)
 *     PpmEventCoreParkingSoftParkedStateChange @ 0x1403E9D08 (PpmEventCoreParkingSoftParkedStateChange.c)
 *     PopDiagTraceSetSystemState @ 0x1403F2BB4 (PopDiagTraceSetSystemState.c)
 *     PpmPerfRecordUtility @ 0x140409370 (PpmPerfRecordUtility.c)
 *     EtwTraceContAllocationEvent @ 0x14041138C (EtwTraceContAllocationEvent.c)
 *     EtwTraceMdlAllocationEvent @ 0x1404124A0 (EtwTraceMdlAllocationEvent.c)
 *     EtwWrite @ 0x14041C1B0 (EtwWrite.c)
 *     EtwWriteTransfer @ 0x14041C2C0 (EtwWriteTransfer.c)
 *     PoTraceSystemTimerResolutionUpdate @ 0x14041D72C (PoTraceSystemTimerResolutionUpdate.c)
 *     PpmEventTraceHeteroResponse @ 0x14042382C (PpmEventTraceHeteroResponse.c)
 *     PpmEventTraceMultiClassHeteroResponse @ 0x140423A2C (PpmEventTraceMultiClassHeteroResponse.c)
 *     PopDiagTraceProcessorThrottlePerfTrack @ 0x140424BD0 (PopDiagTraceProcessorThrottlePerfTrack.c)
 *     PpmEventBiosCapChange @ 0x140424F0C (PpmEventBiosCapChange.c)
 *     PpmEventThermalCapChange @ 0x140425004 (PpmEventThermalCapChange.c)
 *     PpmEventPerfSelectProcessorState @ 0x14042AAD0 (PpmEventPerfSelectProcessorState.c)
 *     PpmEventTraceHeteroSets @ 0x140439268 (PpmEventTraceHeteroSets.c)
 *     PnpDiagnosticTraceObject @ 0x14043B204 (PnpDiagnosticTraceObject.c)
 *     PnpDiagnosticTrace @ 0x14043B7C4 (PnpDiagnosticTrace.c)
 *     PopDiagTraceFxComponentLogicalCondition @ 0x14043F1E0 (PopDiagTraceFxComponentLogicalCondition.c)
 *     PopDiagTraceFxDefaultPepWorkerEnd @ 0x1404416E0 (PopDiagTraceFxDefaultPepWorkerEnd.c)
 *     EtwpNetProvTraceNetwork @ 0x1404471C8 (EtwpNetProvTraceNetwork.c)
 *     EtwTraceDpcProfilingStack @ 0x1404476CC (EtwTraceDpcProfilingStack.c)
 *     EtwTraceDpcProfilingStackBegin @ 0x14044775C (EtwTraceDpcProfilingStackBegin.c)
 *     PopDiagTraceFxComponentIdleState @ 0x14044C130 (PopDiagTraceFxComponentIdleState.c)
 *     SshpTracingWriteBlockerStateChange @ 0x14044DF2C (SshpTracingWriteBlockerStateChange.c)
 *     PpmEventComputeEnergy @ 0x140450300 (PpmEventComputeEnergy.c)
 *     PopDiagTraceFxDeviceDirectedTransition @ 0x1404517B0 (PopDiagTraceFxDeviceDirectedTransition.c)
 *     IopInitActivityIdIrp @ 0x140454AF0 (IopInitActivityIdIrp.c)
 *     PpmEventParkNodeRecordedStats @ 0x140456C2C (PpmEventParkNodeRecordedStats.c)
 *     PpmEventTracePerfCheckStart @ 0x140457864 (PpmEventTracePerfCheckStart.c)
 *     PpmEventTraceFailedPerfCheckStart @ 0x140457B6C (PpmEventTraceFailedPerfCheckStart.c)
 *     EtwTraceMemoryAcg @ 0x1404585D0 (EtwTraceMemoryAcg.c)
 *     EtwpTiFillVadEventWrite @ 0x140460324 (EtwpTiFillVadEventWrite.c)
 *     SetFailureLocation @ 0x1404649E0 (SetFailureLocation.c)
 *     PopDiagTracePowerRequestChange @ 0x14046C44C (PopDiagTracePowerRequestChange.c)
 *     PopDiagTraceSystemLatencyUpdate @ 0x14046EC6C (PopDiagTraceSystemLatencyUpdate.c)
 *     PpmEventHeteroFavoredCoreRotationChange @ 0x14046EFD0 (PpmEventHeteroFavoredCoreRotationChange.c)
 *     PpmEventTraceExpectedUtility @ 0x14046F540 (PpmEventTraceExpectedUtility.c)
 *     PpmEventTraceSoftCoreParkingSelection @ 0x140471C0C (PpmEventTraceSoftCoreParkingSelection.c)
 *     PpmEventParkingCountSelection @ 0x1404732C0 (PpmEventParkingCountSelection.c)
 *     WheapGenerateETWErrorRecord @ 0x14047829C (WheapGenerateETWErrorRecord.c)
 *     PpmEventPlatformVetoRundown @ 0x140485158 (PpmEventPlatformVetoRundown.c)
 *     PpmEventProcessorVetoRundown @ 0x1404852A8 (PpmEventProcessorVetoRundown.c)
 *     PpmEventTracePreVetoAccounting @ 0x1404854A8 (PpmEventTracePreVetoAccounting.c)
 *     SshpTracingWriteBlockerStateRundown @ 0x14048614C (SshpTracingWriteBlockerStateRundown.c)
 *     PpmEventCoreParkingStateChangeEx @ 0x14048A97C (PpmEventCoreParkingStateChangeEx.c)
 *     SshpWriteBlocker @ 0x14048ABA0 (SshpWriteBlocker.c)
 *     PopDiagTraceEventNoPayload @ 0x14048C7B4 (PopDiagTraceEventNoPayload.c)
 *     PsDispatchIumService @ 0x14048D020 (PsDispatchIumService.c)
 *     PpmEventCoreParkingStateChange @ 0x14048E1F8 (PpmEventCoreParkingStateChange.c)
 *     KsepLogEtwMessage @ 0x14048E728 (KsepLogEtwMessage.c)
 *     PpmEventTraceMakeupPerfCheck @ 0x140494B68 (PpmEventTraceMakeupPerfCheck.c)
 *     PpmEventQosClassPerfSelection @ 0x140494BCC (PpmEventQosClassPerfSelection.c)
 *     PopBatteryTraceSystemBatteryStatus @ 0x14049883C (PopBatteryTraceSystemBatteryStatus.c)
 *     PopDiagTraceSleepStudyBlocker @ 0x14049A5A8 (PopDiagTraceSleepStudyBlocker.c)
 *     PopDirectedDripsDiagTraceNotifyDevices @ 0x14049C73C (PopDirectedDripsDiagTraceNotifyDevices.c)
 *     PopDiagTraceIdleResiliencyStart @ 0x14049DD00 (PopDiagTraceIdleResiliencyStart.c)
 *     PopDiagTraceIdleResiliencyEnd @ 0x14049DDC0 (PopDiagTraceIdleResiliencyEnd.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x1404A044C (PnpDiagnosticTraceObjectWithStatus.c)
 *     PopSqmAddToStream @ 0x1404A0538 (PopSqmAddToStream.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404A083C (_tlgWriteEx_EtwWriteEx.c)
 *     PopDiagTraceDeviceIdleCheck @ 0x1404A16EC (PopDiagTraceDeviceIdleCheck.c)
 *     SSHSupportEtwWrite @ 0x1404A3E6C (SSHSupportEtwWrite.c)
 *     BapdWriteEtwEvents @ 0x1404A4884 (BapdWriteEtwEvents.c)
 *     PopDiagTraceThermalZoneRundown @ 0x1404A5288 (PopDiagTraceThermalZoneRundown.c)
 *     PpmEventVetoReasonRundown @ 0x1404AC4C8 (PpmEventVetoReasonRundown.c)
 *     PopDiagTraceSessionDisplayStateChange @ 0x1404AD43C (PopDiagTraceSessionDisplayStateChange.c)
 *     PoTraceSystemTimerResolutionIgnore @ 0x1404AE898 (PoTraceSystemTimerResolutionIgnore.c)
 *     PpmEventHgsContainmentUnparkedCount @ 0x1404B0DD0 (PpmEventHgsContainmentUnparkedCount.c)
 *     IoTransferActivityId @ 0x1404B15D0 (IoTransferActivityId.c)
 *     PopDiagTraceDeepSleepConstraintRundown @ 0x1404B2C6C (PopDiagTraceDeepSleepConstraintRundown.c)
 *     PpmHeteroDispatchHgsInterrupt @ 0x1404B5320 (PpmHeteroDispatchHgsInterrupt.c)
 *     HalpIommuTraceFault @ 0x1404B644C (HalpIommuTraceFault.c)
 *     PopDiagTraceFxPerfRequestComplete @ 0x1404B6DC0 (PopDiagTraceFxPerfRequestComplete.c)
 *     PopDiagTraceFxPerfRequestProgress @ 0x1404B70E4 (PopDiagTraceFxPerfRequestProgress.c)
 *     PopDiagTraceFxPerfRequest @ 0x1404B7244 (PopDiagTraceFxPerfRequest.c)
 *     EtwpTraceLostSystemEvent @ 0x1404B94AC (EtwpTraceLostSystemEvent.c)
 *     PpmEventTraceLPIState @ 0x1404BADC0 (PpmEventTraceLPIState.c)
 *     PpmEventHgsHardwareTableResonMapTable @ 0x1404C203C (PpmEventHgsHardwareTableResonMapTable.c)
 *     PpmEventHgsNormalizedTable @ 0x1404C6EBC (PpmEventHgsNormalizedTable.c)
 *     PnpDiagnosticTraceElamDecision @ 0x1404C82A8 (PnpDiagnosticTraceElamDecision.c)
 *     PpmEventParkNodeClassRecordedStats @ 0x1404CC608 (PpmEventParkNodeClassRecordedStats.c)
 *     PpmEventHgsHardwareTableResonChanged @ 0x1404CCC34 (PpmEventHgsHardwareTableResonChanged.c)
 *     PpmEventHgsContainmentHwUpdate @ 0x1404CDF38 (PpmEventHgsContainmentHwUpdate.c)
 *     PopDiagTraceRtcWakeInfo @ 0x1404D48D4 (PopDiagTraceRtcWakeInfo.c)
 *     PopDiagTraceIrpPended @ 0x1404D547C (PopDiagTraceIrpPended.c)
 *     PopDiagTraceFxDeviceDirectedCompletion @ 0x1404D64C8 (PopDiagTraceFxDeviceDirectedCompletion.c)
 *     PoDiagTraceIRTimerSleepStudyRundown @ 0x1404D65C4 (PoDiagTraceIRTimerSleepStudyRundown.c)
 *     IopDumpTraceLoadCrashDumpDriverFailure @ 0x1404D856C (IopDumpTraceLoadCrashDumpDriverFailure.c)
 *     PpmEventParkNodeParkHintChanged @ 0x1404D86C8 (PpmEventParkNodeParkHintChanged.c)
 *     PopScanIdleList @ 0x1404EAE90 (PopScanIdleList.c)
 *     PpmEventHgsActiveWorkloadClass @ 0x1404ECDC0 (PpmEventHgsActiveWorkloadClass.c)
 *     PpmEventHgsCoresUnparkedCount @ 0x1404ECF2C (PpmEventHgsCoresUnparkedCount.c)
 *     PpmEventParkNodeRestriction @ 0x1404ED06C (PpmEventParkNodeRestriction.c)
 *     PpmEventTraceMultiClassHeteroResponseUpdate @ 0x1404ED1C8 (PpmEventTraceMultiClassHeteroResponseUpdate.c)
 *     PopBatteryTraceSystemBatteryStatusV1 @ 0x1404FAEA4 (PopBatteryTraceSystemBatteryStatusV1.c)
 *     HalpTscTraceProcessorDelta @ 0x140549A54 (HalpTscTraceProcessorDelta.c)
 *     HalpTscTraceProcessorSynchronization @ 0x140549B38 (HalpTscTraceProcessorSynchronization.c)
 *     HalpTscTraceStatus @ 0x140549C38 (HalpTscTraceStatus.c)
 *     HalpTscTraceSynchronizationSummary @ 0x140549CD4 (HalpTscTraceSynchronizationSummary.c)
 *     HalpIommuLogEarlyFault @ 0x140554200 (HalpIommuLogEarlyFault.c)
 *     DbgkpLkmdSqmIncrementDword @ 0x14057EA28 (DbgkpLkmdSqmIncrementDword.c)
 *     HvlpWriteEventLog @ 0x14058B744 (HvlpWriteEventLog.c)
 *     IopDumpTraceCrashDumpDisabled @ 0x140593D3C (IopDumpTraceCrashDumpDisabled.c)
 *     IopDumpTraceCrashDumpReconfiguration @ 0x140593E18 (IopDumpTraceCrashDumpReconfiguration.c)
 *     IopDumpTraceDisableCrashDumpFailure @ 0x140593F28 (IopDumpTraceDisableCrashDumpFailure.c)
 *     IopDumpTraceFreeDumpStackFailure @ 0x140594038 (IopDumpTraceFreeDumpStackFailure.c)
 *     IopDumpTraceInitializeCrashDumpFailure @ 0x140594148 (IopDumpTraceInitializeCrashDumpFailure.c)
 *     IopDumpTraceInitializeDumpStackFailure @ 0x140594258 (IopDumpTraceInitializeDumpStackFailure.c)
 *     IopDumpTraceLoadDumpStackFailure @ 0x140594368 (IopDumpTraceLoadDumpStackFailure.c)
 *     IopLiveDumpTrace @ 0x1405A3070 (IopLiveDumpTrace.c)
 *     IopLiveDumpTraceEventGeneric @ 0x1405A31E4 (IopLiveDumpTraceEventGeneric.c)
 *     PnpDiagnosticTraceElamStatus @ 0x1405A481C (PnpDiagnosticTraceElamStatus.c)
 *     KasaniSendReport @ 0x1405AA2E0 (KasaniSendReport.c)
 *     KasaniSendTelemetryDriver @ 0x1405AAD40 (KasaniSendTelemetryDriver.c)
 *     KcsanReportTelemetry @ 0x1405AE360 (KcsanReportTelemetry.c)
 *     KcsaniSendReport @ 0x1405AE980 (KcsaniSendReport.c)
 *     KsepEvntLogFlagsApplied @ 0x1405CA5A0 (KsepEvntLogFlagsApplied.c)
 *     KsepEvntLogShimsApplied @ 0x1405CA6B4 (KsepEvntLogShimsApplied.c)
 *     KsepDsEventAddDevice @ 0x1405CB128 (KsepDsEventAddDevice.c)
 *     KsepDsEventDataIrp @ 0x1405CB250 (KsepDsEventDataIrp.c)
 *     KsepDsEventDevicePowerCompleted @ 0x1405CB348 (KsepDsEventDevicePowerCompleted.c)
 *     KsepDsEventDevicePowerIrp @ 0x1405CB42C (KsepDsEventDevicePowerIrp.c)
 *     KsepDsEventDriverLoad @ 0x1405CB544 (KsepDsEventDriverLoad.c)
 *     KsepDsEventDriverStartIo @ 0x1405CB64C (KsepDsEventDriverStartIo.c)
 *     KsepDsEventDriverUnload @ 0x1405CB714 (KsepDsEventDriverUnload.c)
 *     KsepDsEventIoCreateDevice @ 0x1405CB7D0 (KsepDsEventIoCreateDevice.c)
 *     KsepDsEventPnpIrp @ 0x1405CB8E0 (KsepDsEventPnpIrp.c)
 *     KsepDsEventPnpStartDevice @ 0x1405CB9D8 (KsepDsEventPnpStartDevice.c)
 *     KsepDsEventPnpStopDevice @ 0x1405CBABC (KsepDsEventPnpStopDevice.c)
 *     KsepDsEventPoolAllocate @ 0x1405CBBA0 (KsepDsEventPoolAllocate.c)
 *     KsepDsEventPoolFree @ 0x1405CBC9C (KsepDsEventPoolFree.c)
 *     KsepDsEventRequestPowerIrp @ 0x1405CBD68 (KsepDsEventRequestPowerIrp.c)
 *     KsepDsEventSystemPowerIrp @ 0x1405CBE70 (KsepDsEventSystemPowerIrp.c)
 *     KsepSkipDriverUnloadEventDriverLoad @ 0x1405CC10C (KsepSkipDriverUnloadEventDriverLoad.c)
 *     KsepSkipDriverUnloadEventDriverUnload @ 0x1405CC214 (KsepSkipDriverUnloadEventDriverUnload.c)
 *     PopIrpWatchdogBugcheck @ 0x1405CD0D8 (PopIrpWatchdogBugcheck.c)
 *     PoTraceDynamicTickDisabled @ 0x1405D42B4 (PoTraceDynamicTickDisabled.c)
 *     PoTraceForceIdleReset @ 0x1405D4358 (PoTraceForceIdleReset.c)
 *     PopDiagTraceAbnormalReset @ 0x1405D4480 (PopDiagTraceAbnormalReset.c)
 *     PopDiagTraceCsDeepSleepWatchdog @ 0x1405D4520 (PopDiagTraceCsDeepSleepWatchdog.c)
 *     PopDiagTraceCsDripsDivergence @ 0x1405D463C (PopDiagTraceCsDripsDivergence.c)
 *     PopDiagTraceCsDripsWatchdog @ 0x1405D4728 (PopDiagTraceCsDripsWatchdog.c)
 *     PopDiagTraceCsDripsWatchdogPerfTrack @ 0x1405D4918 (PopDiagTraceCsDripsWatchdogPerfTrack.c)
 *     PopDiagTraceCsFanPerfTrack @ 0x1405D4A70 (PopDiagTraceCsFanPerfTrack.c)
 *     PopDiagTraceDebuggerTransitionRequirements @ 0x1405D4B2C (PopDiagTraceDebuggerTransitionRequirements.c)
 *     PopDiagTraceDeviceComplianceUpdate @ 0x1405D4C0C (PopDiagTraceDeviceComplianceUpdate.c)
 *     PopDiagTraceEsState @ 0x1405D4CC8 (PopDiagTraceEsState.c)
 *     PopDiagTraceFxComponentIdleConstraints @ 0x1405D4D88 (PopDiagTraceFxComponentIdleConstraints.c)
 *     PopDiagTraceFxComponentResidency @ 0x1405D4E78 (PopDiagTraceFxComponentResidency.c)
 *     PopDiagTraceFxComponentWake @ 0x1405D4F5C (PopDiagTraceFxComponentWake.c)
 *     PopDiagTraceFxDeviceIdleConstraints @ 0x1405D5050 (PopDiagTraceFxDeviceIdleConstraints.c)
 *     PopDiagTraceFxPerfNominalChange @ 0x1405D5130 (PopDiagTraceFxPerfNominalChange.c)
 *     PopDiagTraceIllegalProcessorThrottle @ 0x1405D5268 (PopDiagTraceIllegalProcessorThrottle.c)
 *     PopDiagTraceIoCoalescingDiskIdle @ 0x1405D5414 (PopDiagTraceIoCoalescingDiskIdle.c)
 *     PopDiagTraceProcessorThrottleDurationPerfTrack @ 0x1405D54B4 (PopDiagTraceProcessorThrottleDurationPerfTrack.c)
 *     PopDiagTraceShutdownAction @ 0x1405D5604 (PopDiagTraceShutdownAction.c)
 *     PopDiagTraceThermalStateChange @ 0x1405D5728 (PopDiagTraceThermalStateChange.c)
 *     PopDiagTraceThermalZoneEnumeration @ 0x1405D5850 (PopDiagTraceThermalZoneEnumeration.c)
 *     PopDiagTraceThermalZoneThrottleDurationPerfTrack @ 0x1405D5BF0 (PopDiagTraceThermalZoneThrottleDurationPerfTrack.c)
 *     PopDiagTraceThermalZoneThrottlePerfTrack @ 0x1405D5D24 (PopDiagTraceThermalZoneThrottlePerfTrack.c)
 *     PpmEventAffinityMask @ 0x1405D8D90 (PpmEventAffinityMask.c)
 *     PpmEventAutonomousModeChange @ 0x1405D8F14 (PpmEventAutonomousModeChange.c)
 *     PpmEventCoreParkingForceParkedStateChange @ 0x1405D8FDC (PpmEventCoreParkingForceParkedStateChange.c)
 *     PpmEventHgsContainmentGroupInfo @ 0x1405D916C (PpmEventHgsContainmentGroupInfo.c)
 *     PpmEventHgsContainmentPolicyChange @ 0x1405D9324 (PpmEventHgsContainmentPolicyChange.c)
 *     PpmEventHgsContainmentPolicyChangeV1 @ 0x1405D94A8 (PpmEventHgsContainmentPolicyChangeV1.c)
 *     PpmEventHiddenProcessorBiosCapChange @ 0x1405D9630 (PpmEventHiddenProcessorBiosCapChange.c)
 *     PpmEventHiddenProcessorThermalCapChange @ 0x1405D9730 (PpmEventHiddenProcessorThermalCapChange.c)
 *     PpmEventLPICoreParking @ 0x1405D9830 (PpmEventLPICoreParking.c)
 *     PpmEventParkNodeCapChange @ 0x1405D98F0 (PpmEventParkNodeCapChange.c)
 *     PpmEventParkNodePreference @ 0x1405D99DC (PpmEventParkNodePreference.c)
 *     PpmEventProcessorVetoRequest @ 0x1405D9AFC (PpmEventProcessorVetoRequest.c)
 *     PpmEventSoftParkLatencyUpdate @ 0x1405D9C14 (PpmEventSoftParkLatencyUpdate.c)
 *     PpmEventTraceHeteroDistributeUtility @ 0x1405D9CF8 (PpmEventTraceHeteroDistributeUtility.c)
 *     PpmEventVpQosChange @ 0x1405D9E08 (PpmEventVpQosChange.c)
 *     PopDirectedDripsDiagTraceDfxPowerStateFailure @ 0x1405DC214 (PopDirectedDripsDiagTraceDfxPowerStateFailure.c)
 *     PpmEventAffinityMaskEx @ 0x1405DD5A0 (PpmEventAffinityMaskEx.c)
 *     PpmEventHgsActiveWorkloadClassEx @ 0x1405DD690 (PpmEventHgsActiveWorkloadClassEx.c)
 *     PpmEventHgsContainmentUnparkedCountEx @ 0x1405DD848 (PpmEventHgsContainmentUnparkedCountEx.c)
 *     PpmEventHgsCoresUnparkedCountEx @ 0x1405DDA78 (PpmEventHgsCoresUnparkedCountEx.c)
 *     PpmEventParkNodeCapChangeEx @ 0x1405DDC00 (PpmEventParkNodeCapChangeEx.c)
 *     PpmEventParkNodeClassRecordedStatsEx @ 0x1405DDDC8 (PpmEventParkNodeClassRecordedStatsEx.c)
 *     PpmEventParkNodeParkHintChangedEx @ 0x1405DDF58 (PpmEventParkNodeParkHintChangedEx.c)
 *     PpmEventParkNodePreferenceEx @ 0x1405DE080 (PpmEventParkNodePreferenceEx.c)
 *     PpmEventParkNodeRecordedStatsEx @ 0x1405DE2A8 (PpmEventParkNodeRecordedStatsEx.c)
 *     PpmEventParkNodeRestrictionEx @ 0x1405DE51C (PpmEventParkNodeRestrictionEx.c)
 *     PpmEventParkingCountSelectionEx @ 0x1405DE6BC (PpmEventParkingCountSelectionEx.c)
 *     PpmEventTraceCoreParkingSelectionEx @ 0x1405DE820 (PpmEventTraceCoreParkingSelectionEx.c)
 *     PpmEventTraceHeteroDistributeUtilityEx @ 0x1405DEC14 (PpmEventTraceHeteroDistributeUtilityEx.c)
 *     PpmEventTraceHeteroResponseEx @ 0x1405DED44 (PpmEventTraceHeteroResponseEx.c)
 *     PpmEventTraceMultiClassHeteroResponseEx @ 0x1405DEFC0 (PpmEventTraceMultiClassHeteroResponseEx.c)
 *     PpmEventTraceMultiClassHeteroResponseUpdateEx @ 0x1405DF1C8 (PpmEventTraceMultiClassHeteroResponseUpdateEx.c)
 *     PpmEventTraceSoftCoreParkingSelectionEx @ 0x1405DF2CC (PpmEventTraceSoftCoreParkingSelectionEx.c)
 *     SmEtwLogRegionOp @ 0x14060D37C (SmEtwLogRegionOp.c)
 *     SmEtwLogStoreCorruption @ 0x14060D448 (SmEtwLogStoreCorruption.c)
 *     SmEtwLogStoreOp @ 0x14060D574 (SmEtwLogStoreOp.c)
 *     SmEtwLogStoreStateChange @ 0x14060D640 (SmEtwLogStoreStateChange.c)
 *     SmKmStoreTerminateWorker @ 0x14060DB20 (SmKmStoreTerminateWorker.c)
 *     SmKmSqmAddToStream @ 0x14060FB6C (SmKmSqmAddToStream.c)
 *     EtwTraceCpuPartitionAffinityViolation @ 0x14064D50C (EtwTraceCpuPartitionAffinityViolation.c)
 *     EtwTraceCpuPartitionDpcSchedulingViolation @ 0x14064D6B0 (EtwTraceCpuPartitionDpcSchedulingViolation.c)
 *     EtwTraceCpuPartitionGenericDpcViolation @ 0x14064D76C (EtwTraceCpuPartitionGenericDpcViolation.c)
 *     EtwTraceCumulativeDpcSoftTimeout @ 0x14064D808 (EtwTraceCumulativeDpcSoftTimeout.c)
 *     EtwTraceJobServerSiloMonitorCallback @ 0x14064DA30 (EtwTraceJobServerSiloMonitorCallback.c)
 *     EtwTraceProcessSetInPrivateMode @ 0x14064DD44 (EtwTraceProcessSetInPrivateMode.c)
 *     EtwTraceSingleDpcSoftTimeout @ 0x14064E018 (EtwTraceSingleDpcSoftTimeout.c)
 *     SeEtwWriteKMCveEvent @ 0x14064EFA0 (SeEtwWriteKMCveEvent.c)
 *     EtwTimLogControlProtectionKernelModeReturnMismatch @ 0x14064FA08 (EtwTimLogControlProtectionKernelModeReturnMismatch.c)
 *     KitLogFeatureUsage @ 0x140659AE0 (KitLogFeatureUsage.c)
 *     WheaLogInternalEvent @ 0x14065E070 (WheaLogInternalEvent.c)
 *     WheapGenerateETWErrorRecordLarge @ 0x14065E290 (WheapGenerateETWErrorRecordLarge.c)
 *     WheapLogProcessTerminateEvent @ 0x14065E4AC (WheapLogProcessTerminateEvent.c)
 *     SmKmEtwLogStoreChange @ 0x1407999C8 (SmKmEtwLogStoreChange.c)
 *     SmKmEtwLogStoreStats @ 0x140799AE0 (SmKmEtwLogStoreStats.c)
 *     EtwTimLogBlockNonCetBinaries @ 0x1407AB488 (EtwTimLogBlockNonCetBinaries.c)
 *     EtwTimLogProhibitLowILImageMap @ 0x1407AC0C4 (EtwTimLogProhibitLowILImageMap.c)
 *     PerfLogImageLoad @ 0x1408FFD20 (PerfLogImageLoad.c)
 *     EtwpPsProvTraceImage @ 0x140A033D8 (EtwpPsProvTraceImage.c)
 *     EtwpTimLogMitigationForProcess @ 0x140A6DB4C (EtwpTimLogMitigationForProcess.c)
 *     EtwTimLogProhibitNonMicrosoftBinaries @ 0x140AD9A3C (EtwTimLogProhibitNonMicrosoftBinaries.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x140B5F998 (PopDiagTraceFirmwareS3Stats.c)
 *     KasanInitSystem @ 0x140C26690 (KasanInitSystem.c)
 *     PopDiagTraceAdaptiveBootOverride @ 0x140C2F160 (PopDiagTraceAdaptiveBootOverride.c)
 *     PopDiagTraceDirtyTransition @ 0x140C2F2D0 (PopDiagTraceDirtyTransition.c)
 *     PopTriggerDiagTraceAoAcCapability @ 0x140C300B4 (PopTriggerDiagTraceAoAcCapability.c)
 *     EtwpTraceBootSystemTime @ 0x140C3D9C4 (EtwpTraceBootSystemTime.c)
 *     EtwpTraceSystemInitialization @ 0x140C3DC1C (EtwpTraceSystemInitialization.c)
 *     BapdpRecordIumStatus @ 0x140C3F920 (BapdpRecordIumStatus.c)
 * Callees:
 *     EtwpLevelKeywordEnabled @ 0x1402A2030 (EtwpLevelKeywordEnabled.c)
 *     EtwpEventWriteFull @ 0x140328590 (EtwpEventWriteFull.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
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
