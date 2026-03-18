/*
 * XREFs of ExQueueWorkItem @ 0x140325850
 * Callers:
 *     LZNT1DecompressChunkNewThread @ 0x1402482A4 (LZNT1DecompressChunkNewThread.c)
 *     IopCopyCompleteReadIrp @ 0x140268580 (IopCopyCompleteReadIrp.c)
 *     PsDereferencePartition @ 0x140275E60 (PsDereferencePartition.c)
 *     PfSnGetFileInformation @ 0x140276200 (PfSnGetFileInformation.c)
 *     PfSnTraceGetLogEntry @ 0x140276790 (PfSnTraceGetLogEntry.c)
 *     ExpWaitForResource @ 0x140277840 (ExpWaitForResource.c)
 *     CcInitializeVolumeCacheMap @ 0x1402CDF18 (CcInitializeVolumeCacheMap.c)
 *     MiCheckLogPinDriverAddresses @ 0x1402D2718 (MiCheckLogPinDriverAddresses.c)
 *     MiWorkingSetManager @ 0x1402D3D20 (MiWorkingSetManager.c)
 *     MiFreeCombineBlock @ 0x1402FA048 (MiFreeCombineBlock.c)
 *     IopReleaseFileObjectLock @ 0x14031D520 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     NtTraceEvent @ 0x140325D10 (NtTraceEvent.c)
 *     KiRcuFlushCompleted @ 0x14033D510 (KiRcuFlushCompleted.c)
 *     SepQueueWorkItem @ 0x140349B84 (SepQueueWorkItem.c)
 *     ExpCenturyDpcRoutine @ 0x14034A450 (ExpCenturyDpcRoutine.c)
 *     PopDequeueQuerySetIrp @ 0x140375DBC (PopDequeueQuerySetIrp.c)
 *     PopQueueQuerySetIrp @ 0x140376E74 (PopQueueQuerySetIrp.c)
 *     MiAgeAweRegions @ 0x1403797D0 (MiAgeAweRegions.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14037AE38 (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     IoFreeAdapterChannelV3 @ 0x140392BB0 (IoFreeAdapterChannelV3.c)
 *     CmpWorkItemQueueWork @ 0x1403A68B0 (CmpWorkItemQueueWork.c)
 *     PoLatencySensitivityHint @ 0x1403B7A90 (PoLatencySensitivityHint.c)
 *     ExpHpGCTimerCallback @ 0x1403BF6C0 (ExpHpGCTimerCallback.c)
 *     PspHardDereferenceSiloWorker @ 0x1403C47E0 (PspHardDereferenceSiloWorker.c)
 *     ObpDeferObjectDeletion @ 0x1403C485C (ObpDeferObjectDeletion.c)
 *     MmReportParkedProcessors @ 0x1403C8D50 (MmReportParkedProcessors.c)
 *     PopDeepSleepSetDisengageReason @ 0x1403CB2E4 (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x1403CB4D8 (PopDeepSleepClearDisengageReason.c)
 *     MiDereferenceIoPages @ 0x1403CE8E0 (MiDereferenceIoPages.c)
 *     EtwpTiAsyncVadQueryEventWrite @ 0x1403D3748 (EtwpTiAsyncVadQueryEventWrite.c)
 *     EtwpQueuePerfMemInfoWorkItem @ 0x1403D41C4 (EtwpQueuePerfMemInfoWorkItem.c)
 *     IoRaiseHardError @ 0x1403D5B40 (IoRaiseHardError.c)
 *     ExpWaitForFastResource @ 0x1403DD7C0 (ExpWaitForFastResource.c)
 *     IopCompleteUnloadOrDelete @ 0x1403F2590 (IopCompleteUnloadOrDelete.c)
 *     PopUserPresentSet @ 0x1403F2C70 (PopUserPresentSet.c)
 *     PopCheckForWork @ 0x1403F2D8C (PopCheckForWork.c)
 *     MiIssueSegmentDereferenceWork @ 0x1403F7920 (MiIssueSegmentDereferenceWork.c)
 *     IoIncrementKeepAliveCount @ 0x140426B20 (IoIncrementKeepAliveCount.c)
 *     PopThermalCsEntry @ 0x1404277CC (PopThermalCsEntry.c)
 *     IoWMIWriteEvent @ 0x14042E980 (IoWMIWriteEvent.c)
 *     WheapWorkQueueAddItem @ 0x14042EB2C (WheapWorkQueueAddItem.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x1404492D0 (SmKmStoreDeleteWhenEmpty.c)
 *     PpmCheckPeriodicStart @ 0x1404576F0 (PpmCheckPeriodicStart.c)
 *     EtwTelemetryCoverageReport @ 0x140457F60 (EtwTelemetryCoverageReport.c)
 *     CmpArmDelayedCloseTimer @ 0x14045A060 (CmpArmDelayedCloseTimer.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x14046B8F0 (IoReportTargetDeviceChangeAsynchronous.c)
 *     PopPowerRequestReferenceAcquire @ 0x14046BE70 (PopPowerRequestReferenceAcquire.c)
 *     PopPowerRequestHandleRequestOverrideQueryResponse @ 0x14046BFAC (PopPowerRequestHandleRequestOverrideQueryResponse.c)
 *     PnpRequestDeviceAction @ 0x14046C968 (PnpRequestDeviceAction.c)
 *     PoNotifyMediaBuffering @ 0x140476430 (PoNotifyMediaBuffering.c)
 *     IoDecrementKeepAliveCount @ 0x1404796A0 (IoDecrementKeepAliveCount.c)
 *     SshpWorkItemQueue @ 0x14047C8CC (SshpWorkItemQueue.c)
 *     PfSnTraceTimerRoutine @ 0x14047FAD0 (PfSnTraceTimerRoutine.c)
 *     PspRequestDeferredJobNotification @ 0x140487978 (PspRequestDeferredJobNotification.c)
 *     ?KiIdealProcessorRebalancerTimerCallback@@YAXPEAU_KTIMER2@@PEAX@Z @ 0x140489200 (-KiIdealProcessorRebalancerTimerCallback@@YAXPEAU_KTIMER2@@PEAX@Z.c)
 *     SepAdtDetermineInsertQueue @ 0x14048B0B0 (SepAdtDetermineInsertQueue.c)
 *     PsDispatchIumService @ 0x14048D020 (PsDispatchIumService.c)
 *     IopQueueInvalidateBusRelationsRequest @ 0x1404932FC (IopQueueInvalidateBusRelationsRequest.c)
 *     PopQueueWorkItem @ 0x140497478 (PopQueueWorkItem.c)
 *     PnpUnlockDeviceActionQueue @ 0x140498E64 (PnpUnlockDeviceActionQueue.c)
 *     WheapWorkQueueDpcRoutine @ 0x14049C240 (WheapWorkQueueDpcRoutine.c)
 *     HalpQueueMapBufferWorker @ 0x14049D1A8 (HalpQueueMapBufferWorker.c)
 *     PopBatteryQueueWork @ 0x1404A42EC (PopBatteryQueueWork.c)
 *     PopFxReinitializeAccountingInstance @ 0x1404A66AC (PopFxReinitializeAccountingInstance.c)
 *     PopThermalIrpComplete @ 0x1404A7FC0 (PopThermalIrpComplete.c)
 *     PopBsdHandleRequest @ 0x1404A8F44 (PopBsdHandleRequest.c)
 *     SmQueueExWorkItem @ 0x1404AA2A8 (SmQueueExWorkItem.c)
 *     PopIdleWakeNotifyModernStandbyExit @ 0x1404AA390 (PopIdleWakeNotifyModernStandbyExit.c)
 *     IoWriteErrorLogEntry @ 0x1404AC3E0 (IoWriteErrorLogEntry.c)
 *     IoRaiseInformationalHardError @ 0x1404ADFA0 (IoRaiseInformationalHardError.c)
 *     ExpTimeRefreshDpcRoutine @ 0x1404AEAE0 (ExpTimeRefreshDpcRoutine.c)
 *     HalpGenericPolledDpcRoutine @ 0x1404AF980 (HalpGenericPolledDpcRoutine.c)
 *     WdipTimeoutTimerRoutine @ 0x1404AFFF0 (WdipTimeoutTimerRoutine.c)
 *     PopPowerRequestRevokeRequests @ 0x1404B659C (PopPowerRequestRevokeRequests.c)
 *     PopEnsureCoalescingWorkerWillRun @ 0x1404B7970 (PopEnsureCoalescingWorkerWillRun.c)
 *     ?TlgAggregateInternalFlushTimerCallbackKernelMode@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x1404B9130 (-TlgAggregateInternalFlushTimerCallbackKernelMode@@YAXPEAU_EX_TIMER@@PEAX@Z.c)
 *     HalpCmcDeferredRoutine @ 0x1404BB290 (HalpCmcDeferredRoutine.c)
 *     PopWakeInfoDereference @ 0x1404BC44C (PopWakeInfoDereference.c)
 *     PpmHeteroHgsUpdateDpcRoutine @ 0x1404BE780 (PpmHeteroHgsUpdateDpcRoutine.c)
 *     PopSleepstudyScenarioStopTimerCallback @ 0x1404C15E0 (PopSleepstudyScenarioStopTimerCallback.c)
 *     CcTelemetryPeriodicTimerDpc @ 0x1404C2000 (CcTelemetryPeriodicTimerDpc.c)
 *     PiDrvDbUnloadNodeDpcRoutine @ 0x1404C6B30 (PiDrvDbUnloadNodeDpcRoutine.c)
 *     PopFanIrpComplete @ 0x1404C8380 (PopFanIrpComplete.c)
 *     MiWakeFileOnlyReaper @ 0x1404CF4E8 (MiWakeFileOnlyReaper.c)
 *     IopLoadDriverImage @ 0x1404E691C (IopLoadDriverImage.c)
 *     KiAvailableCpusSubscriptionQueueWorkItem @ 0x1404FB26C (KiAvailableCpusSubscriptionQueueWorkItem.c)
 *     CcBcbProfiler @ 0x140507CE0 (CcBcbProfiler.c)
 *     HalpPmuArbiterPeriodicTimerCallback @ 0x140545E10 (HalpPmuArbiterPeriodicTimerCallback.c)
 *     HalpBlkWdTimerRoutine @ 0x14056D450 (HalpBlkWdTimerRoutine.c)
 *     CcSetupWatchForRegistryChanges @ 0x14057B6F0 (CcSetupWatchForRegistryChanges.c)
 *     CcQueueAsyncGetDeviceGuid @ 0x14057D6C4 (CcQueueAsyncGetDeviceGuid.c)
 *     EmpQueueRuleUpdateState @ 0x14057F200 (EmpQueueRuleUpdateState.c)
 *     PfSnTracingStateDpcRoutine @ 0x1405811F0 (PfSnTracingStateDpcRoutine.c)
 *     HvlpInitializeSvmIommuSupport @ 0x14058AEE8 (HvlpInitializeSvmIommuSupport.c)
 *     HvlpIommuPrqDpcRoutine @ 0x14058AFE0 (HvlpIommuPrqDpcRoutine.c)
 *     IopErrorLogDpc @ 0x1405A2AA0 (IopErrorLogDpc.c)
 *     IoRequestDeviceEjectEx @ 0x1405A49D0 (IoRequestDeviceEjectEx.c)
 *     IopDeviceEjectComplete @ 0x1405A94E0 (IopDeviceEjectComplete.c)
 *     KeBalanceSetManager @ 0x1405C45C0 (KeBalanceSetManager.c)
 *     KiScheduleBugcheckRecoveryWorkItem @ 0x1405C6640 (KiScheduleBugcheckRecoveryWorkItem.c)
 *     KiLogUserCetSetContextIpValidationFailure @ 0x1405C6D6C (KiLogUserCetSetContextIpValidationFailure.c)
 *     KiAltContextWorkQueueAddItem @ 0x1405C9B28 (KiAltContextWorkQueueAddItem.c)
 *     KiAltReturnDpcRoutine @ 0x1405C9C10 (KiAltReturnDpcRoutine.c)
 *     ObpProcessRemoveObjectDpcWorker @ 0x1405CC340 (ObpProcessRemoveObjectDpcWorker.c)
 *     ObpDeferPushRefDerefInfo @ 0x1405CC360 (ObpDeferPushRefDerefInfo.c)
 *     PfpPowerActionDpcRoutine @ 0x1405CC460 (PfpPowerActionDpcRoutine.c)
 *     PfSnPowerBoostDpc @ 0x1405CCB10 (PfSnPowerBoostDpc.c)
 *     PopPowerActionWatchdog @ 0x1405D3990 (PopPowerActionWatchdog.c)
 *     PopPowerAggregatorDozeTimerCallback @ 0x1405D7930 (PopPowerAggregatorDozeTimerCallback.c)
 *     PopPowerAggregatorSessionSwitchTimerCallback @ 0x1405D7A80 (PopPowerAggregatorSessionSwitchTimerCallback.c)
 *     PopBatteryWakeDpc @ 0x1405D7D50 (PopBatteryWakeDpc.c)
 *     PpmWmiIdleAccountingProcedure @ 0x1405D8030 (PpmWmiIdleAccountingProcedure.c)
 *     PopIdleAoAcDozeS4TimerCallback @ 0x1405D80C0 (PopIdleAoAcDozeS4TimerCallback.c)
 *     PopWatchdogDpc @ 0x1405D89F0 (PopWatchdogDpc.c)
 *     SshpAlpcOpenGracePeriodTimerCallback @ 0x1405E47A0 (SshpAlpcOpenGracePeriodTimerCallback.c)
 *     TtmpScheduledEvaluationDpc @ 0x1405E47D0 (TtmpScheduledEvaluationDpc.c)
 *     TtmpTerminalInactivityTimerDpcRoutine @ 0x1405E4810 (TtmpTerminalInactivityTimerDpcRoutine.c)
 *     SepAuditFailedRaisedIrql @ 0x140609660 (SepAuditFailedRaisedIrql.c)
 *     ?SmStoreTerminate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_ETW_TERMINATION_REASON@@J@Z @ 0x14060EBC4 (-SmStoreTerminate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_ST_E.c)
 *     CarWriteLivedump @ 0x140619D14 (CarWriteLivedump.c)
 *     EtwpContainerStateWnfCallback @ 0x14064C730 (EtwpContainerStateWnfCallback.c)
 *     EtwpCoverageFlushTimerCallback @ 0x14064F600 (EtwpCoverageFlushTimerCallback.c)
 *     EtwpCoverageResetTimerCallback @ 0x14064F890 (EtwpCoverageResetTimerCallback.c)
 *     EtwpCompressionDpc @ 0x140651160 (EtwpCompressionDpc.c)
 *     ExpNextYearDpcRoutine @ 0x1406535D0 (ExpNextYearDpcRoutine.c)
 *     ExpTimeZoneDpcRoutine @ 0x140653740 (ExpTimeZoneDpcRoutine.c)
 *     ExInitializeProcessor @ 0x140653874 (ExInitializeProcessor.c)
 *     ExpTrackRaiseLimitNotification @ 0x1406552C4 (ExpTrackRaiseLimitNotification.c)
 *     ExpDebuggerDpcRoutine @ 0x140658450 (ExpDebuggerDpcRoutine.c)
 *     ExpSvmDpcRoutine @ 0x140659820 (ExpSvmDpcRoutine.c)
 *     WheapDeferredRecoveryServiceDpcRoutine @ 0x14065DC80 (WheapDeferredRecoveryServiceDpcRoutine.c)
 *     WheaFlushETWEventsAddWorkRtn @ 0x14065DDDC (WheaFlushETWEventsAddWorkRtn.c)
 *     WheaFlushETWEventsDpcRoutine @ 0x14065DEB0 (WheaFlushETWEventsDpcRoutine.c)
 *     CmpFreezeThawDpcRoutine @ 0x140667FF0 (CmpFreezeThawDpcRoutine.c)
 *     CmpLazyCommitDpcRoutine @ 0x1406681E0 (CmpLazyCommitDpcRoutine.c)
 *     CmpDelayFreeRMDpcRoutine @ 0x140668370 (CmpDelayFreeRMDpcRoutine.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x14066A288 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiNotifyUserOfLostData @ 0x140672438 (MiNotifyUserOfLostData.c)
 *     MiPageNotZero @ 0x140673EAC (MiPageNotZero.c)
 *     MiRemovePendingBadPageNode @ 0x1406741DC (MiRemovePendingBadPageNode.c)
 *     MiNoPagesLastChance @ 0x1406849B0 (MiNoPagesLastChance.c)
 *     WdtpTimerCallback @ 0x14069C470 (WdtpTimerCallback.c)
 *     DbgkQueueUserExceptionReport @ 0x140707404 (DbgkQueueUserExceptionReport.c)
 *     DbgkpWerStartDeferredLiveDump @ 0x140708ED0 (DbgkpWerStartDeferredLiveDump.c)
 *     EmRemoveBadS3PagesCallback @ 0x140709EB0 (EmRemoveBadS3PagesCallback.c)
 *     PipUpdateSetupOobeCompleteWnfCallback @ 0x14071A540 (PipUpdateSetupOobeCompleteWnfCallback.c)
 *     PnpBootPhaseComplete @ 0x14071A5C4 (PnpBootPhaseComplete.c)
 *     IoReplacePartitionUnit @ 0x14071EB50 (IoReplacePartitionUnit.c)
 *     PiDqObjectManagerMakeInconsistent @ 0x140728638 (PiDqObjectManagerMakeInconsistent.c)
 *     PiProfileUpdateDeviceTree @ 0x14072D2A8 (PiProfileUpdateDeviceTree.c)
 *     IopEjectDevice @ 0x140733A30 (IopEjectDevice.c)
 *     PopFxNotifySxTransitionState @ 0x14074E180 (PopFxNotifySxTransitionState.c)
 *     PopThermalZoneAdd @ 0x1407548C0 (PopThermalZoneAdd.c)
 *     PopPowerAggregatorModernStandbyEnterStateHandler @ 0x1407598D0 (PopPowerAggregatorModernStandbyEnterStateHandler.c)
 *     PopBatteryAdd @ 0x14075AC50 (PopBatteryAdd.c)
 *     PopFanAdd @ 0x14075CDF0 (PopFanAdd.c)
 *     PopAdaptiveConsoleSessionOverrideClear @ 0x14075F1BC (PopAdaptiveConsoleSessionOverrideClear.c)
 *     PopAdaptiveStandbyHandleBatteryUpdate @ 0x140761118 (PopAdaptiveStandbyHandleBatteryUpdate.c)
 *     PopCadHpmiPnpNotification @ 0x1407631F0 (PopCadHpmiPnpNotification.c)
 *     TtmiScheduleSessionWorker @ 0x140769F24 (TtmiScheduleSessionWorker.c)
 *     PspCompleteServerSiloShutdown @ 0x1407725A8 (PspCompleteServerSiloShutdown.c)
 *     PspQueueDeferredWorkAndWait @ 0x140772EE8 (PspQueueDeferredWorkAndWait.c)
 *     PsSetVmProcessorHostProcess @ 0x14077669C (PsSetVmProcessorHostProcess.c)
 *     RtlpCtQueueWorkItem @ 0x140787218 (RtlpCtQueueWorkItem.c)
 *     SepInformFileSystemsOfDeletedLogon @ 0x140793780 (SepInformFileSystemsOfDeletedLogon.c)
 *     VmPrefetchVirtualAddresses @ 0x14079E6C8 (VmPrefetchVirtualAddresses.c)
 *     WdipSemStartTimeoutCheck @ 0x1407A2BE0 (WdipSemStartTimeoutCheck.c)
 *     PeriodicCaptureStateTimerCallback @ 0x1407AD9C0 (PeriodicCaptureStateTimerCallback.c)
 *     ExpNodeHotAddProcessorWorker @ 0x1407BFBF0 (ExpNodeHotAddProcessorWorker.c)
 *     WheaAttemptClearPoison @ 0x1407C7210 (WheaAttemptClearPoison.c)
 *     WheaAttemptPhysicalPageOffline @ 0x1407C72F0 (WheaAttemptPhysicalPageOffline.c)
 *     CmpDoQueueSystemHiveHysteresis @ 0x1407D226C (CmpDoQueueSystemHiveHysteresis.c)
 *     CmpDiskFullWarning @ 0x1407D5A00 (CmpDiskFullWarning.c)
 *     MiUnmapPfns @ 0x1407EA110 (MiUnmapPfns.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x140844830 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x140845CD0 (CmpDereferenceKeyControlBlock.c)
 *     CmpDeleteKeyObject @ 0x140847360 (CmpDeleteKeyObject.c)
 *     CmpSignalDeferredPosts @ 0x14086A690 (CmpSignalDeferredPosts.c)
 *     CmpDoQueueLateUnloadWorker @ 0x14087E638 (CmpDoQueueLateUnloadWorker.c)
 *     CmpClaimGlobalQuota @ 0x14087F12C (CmpClaimGlobalQuota.c)
 *     CmpForceFlushForCoalescing @ 0x14088355C (CmpForceFlushForCoalescing.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1408ADF30 (ExpWnfNotifyNameSubscribers.c)
 *     PnpInsertEventInQueue @ 0x1408B3950 (PnpInsertEventInQueue.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x1408E84D0 (PspChangeJobMemoryUsageByProcess.c)
 *     PiDrvDbLoadNode @ 0x140925F40 (PiDrvDbLoadNode.c)
 *     PfSnEndProcessTrace @ 0x140939A40 (PfSnEndProcessTrace.c)
 *     PfSnPrefetchSections @ 0x140954784 (PfSnPrefetchSections.c)
 *     PfSnPrefetchSectionsCleanup @ 0x140954B40 (PfSnPrefetchSectionsCleanup.c)
 *     PfSnPrefetchScenario @ 0x140962D70 (PfSnPrefetchScenario.c)
 *     CmpCanGrowHive @ 0x140980D70 (CmpCanGrowHive.c)
 *     PopPowerAggregatorScheduleWorker @ 0x1409BA5AC (PopPowerAggregatorScheduleWorker.c)
 *     WmipQueueRegWork @ 0x1409D0968 (WmipQueueRegWork.c)
 *     WmipQueueLegacyEtwWork @ 0x1409D101C (WmipQueueLegacyEtwWork.c)
 *     PspRundownProcess @ 0x1409EB058 (PspRundownProcess.c)
 *     PiUEventNotifyUserMode @ 0x1409EEFC4 (PiUEventNotifyUserMode.c)
 *     ExpWnfStartKernelDispatcher @ 0x1409F4874 (ExpWnfStartKernelDispatcher.c)
 *     ExpWorkQueueManagerThread @ 0x140A21D40 (ExpWorkQueueManagerThread.c)
 *     PiDqObjectManagerHandleObjectEvent @ 0x140A34F70 (PiDqObjectManagerHandleObjectEvent.c)
 *     PopDiagTraceControlCallback @ 0x140A37E50 (PopDiagTraceControlCallback.c)
 *     PopEsWorkItemSchedule @ 0x140A3BCA4 (PopEsWorkItemSchedule.c)
 *     PsSetProcessWin32Process @ 0x140A4A7B0 (PsSetProcessWin32Process.c)
 *     PspScheduleEnforcementWorker @ 0x140A4B140 (PspScheduleEnforcementWorker.c)
 *     NtNotifyChangeSession @ 0x140A67010 (NtNotifyChangeSession.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x140A673E4 (PiUEventQueueBroadcastEventEntry.c)
 *     EtwpCrimsonProvEnableCallback @ 0x140A690F0 (EtwpCrimsonProvEnableCallback.c)
 *     PoFxSetTargetDripsDevicePowerState @ 0x140A71950 (PoFxSetTargetDripsDevicePowerState.c)
 *     WmipLegacyEtwCallback @ 0x140A7C2F0 (WmipLegacyEtwCallback.c)
 *     PiProcessNewDeviceNodeAsync @ 0x140A7C4EC (PiProcessNewDeviceNodeAsync.c)
 *     PnpChainDereferenceComplete @ 0x140A878A4 (PnpChainDereferenceComplete.c)
 *     SepScheduleImageVerificationCallbacks @ 0x140A8D72C (SepScheduleImageVerificationCallbacks.c)
 *     PerfDiagpRequestState @ 0x140A8F8CC (PerfDiagpRequestState.c)
 *     PiDrvDbUnloadNodeWorkerCallback @ 0x140A965B0 (PiDrvDbUnloadNodeWorkerCallback.c)
 *     PspPostFreezeOperationWorkEnqueue @ 0x140A97D04 (PspPostFreezeOperationWorkEnqueue.c)
 *     IopSendMessageToTrackService @ 0x140AA825C (IopSendMessageToTrackService.c)
 *     IopUnloadDriver @ 0x140AA8FB8 (IopUnloadDriver.c)
 *     PopPdcRegister @ 0x140ABEFF8 (PopPdcRegister.c)
 *     PnprInitiateReplaceOperation @ 0x140B53BF4 (PnprInitiateReplaceOperation.c)
 *     MiZeroAllPageFiles @ 0x140B6236C (MiZeroAllPageFiles.c)
 *     MmDuplicateMemory @ 0x140B62998 (MmDuplicateMemory.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B667DC (PopTransitionSystemPowerStateEx.c)
 *     KdpTimeSlipDpcRoutine @ 0x140B78610 (KdpTimeSlipDpcRoutine.c)
 *     IovpUnloadDriver @ 0x140B82AF8 (IovpUnloadDriver.c)
 *     VfIrpLogRecordEvent @ 0x140B9B684 (VfIrpLogRecordEvent.c)
 *     LogFwReport @ 0x140BB43FC (LogFwReport.c)
 *     sub_140BD60B0 @ 0x140BD60B0 (sub_140BD60B0.c)
 *     sub_140BDF96C @ 0x140BDF96C (sub_140BDF96C.c)
 *     HalpAcpiDetectPiix4 @ 0x140C0F300 (HalpAcpiDetectPiix4.c)
 *     HalpAcpiPopulateTableCache @ 0x140C0F3A8 (HalpAcpiPopulateTableCache.c)
 *     FsRtlInitializeSmssEvent @ 0x140C18ECC (FsRtlInitializeSmssEvent.c)
 *     IoInitSystemPreDrivers @ 0x140C1AA0C (IoInitSystemPreDrivers.c)
 *     WmipInitializeRegistration @ 0x140C3C860 (WmipInitializeRegistration.c)
 *     MiInitSystem @ 0x140C4DC40 (MiInitSystem.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KiAcquireKobjectLockSafe @ 0x14031E740 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x14031E7A0 (KiExitDispatcher.c)
 *     KiWakePriQueueWaiter @ 0x1403248F0 (KiWakePriQueueWaiter.c)
 *     KeIsThreadRunning @ 0x1403BE4C8 (KeIsThreadRunning.c)
 *     EtwTracePriQEnqueueWork @ 0x1404C9BC0 (EtwTracePriQEnqueueWork.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     EtwTracePriQEnqueueFailed @ 0x14064DCC0 (EtwTracePriQEnqueueFailed.c)
 */

void __stdcall ExQueueWorkItem(PWORK_QUEUE_ITEM WorkItem, WORK_QUEUE_TYPE QueueType)
{
  ULONG_PTR v3; // rsi
  void (__fastcall *WorkerRoutine)(void *); // r9
  char v5; // di
  unsigned int v6; // ebx
  int v7; // ebp
  __int64 v8; // r9
  unsigned __int8 CurrentIrql; // r14
  unsigned int v10; // r8d
  unsigned int v11; // ecx
  unsigned __int16 *v12; // r12
  __int64 v13; // rdi
  _QWORD *v14; // rbp
  unsigned __int8 v15; // al
  struct _KPRCB *CurrentPrcb; // r14
  _KTHREAD *CurrentThread; // r13
  int v18; // r10d
  __int64 v19; // rdx
  __int64 v20; // rax
  int v21; // ecx
  unsigned int v22; // ecx
  char v23; // cl
  char v24; // dl
  int v25; // ecx
  struct _LIST_ENTRY *v26; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  __int64 v28; // rdx
  __int64 v29; // rdx
  int v30; // ecx
  unsigned __int8 IsThreadRunning; // al
  unsigned __int8 v32; // [rsp+30h] [rbp-48h]
  unsigned __int8 v33; // [rsp+38h] [rbp-40h]
  char v34; // [rsp+80h] [rbp+8h]
  int v35; // [rsp+90h] [rbp+18h]
  __int64 v36; // [rsp+98h] [rbp+20h]

  v3 = QueueType;
  if ( WorkItem->List.Flink )
    KeBugCheckEx(0xE4u, 1uLL, (ULONG_PTR)WorkItem, QueueType, 0LL);
  if ( (unsigned int)(QueueType - 7) <= 0x18 || QueueType >= 64 )
    KeBugCheckEx(0xE4u, 6uLL, (ULONG_PTR)WorkItem, QueueType, 0LL);
  WorkerRoutine = WorkItem->WorkerRoutine;
  if ( (unsigned __int64)WorkerRoutine < 0xFFFF800000000000uLL )
    KeBugCheckEx(0xE4u, 7uLL, (ULONG_PTR)WorkItem, (ULONG_PTR)WorkerRoutine, 0LL);
  if ( (unsigned int)QueueType >= MaximumWorkQueue )
  {
    v35 = QueueType - 32;
  }
  else
  {
    _mm_lfence();
    v35 = ExpBuiltinPriorities[QueueType];
  }
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = *((_QWORD *)PspSystemPartition + 2);
  v36 = v8;
  CurrentIrql = KeGetCurrentIrql();
  v33 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    v8 = v36;
  }
  v10 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
  v11 = v10;
  while ( v11 < (unsigned __int16)KeNumberNodes )
  {
    v12 = (unsigned __int16 *)KeNodeBlock[(unsigned __int16)v11];
    if ( v12 != (unsigned __int16 *)((char *)&KiNodeInit + 824 * (unsigned __int16)v11) )
    {
      if ( v12 )
      {
        v28 = 8LL * *v12;
        if ( *(_QWORD *)(*(_QWORD *)(v28 + *(_QWORD *)(v8 + 16)) + 264LL) >= 2uLL )
        {
          v29 = **(_QWORD **)(v28 + *(_QWORD *)(v8 + 8));
          if ( (v29 & 1) == 0 )
          {
            if ( v29 )
            {
              v30 = *(_DWORD *)(v29 + 712) & 0x3FFF;
              if ( (*(_DWORD *)(v29 + 712) & 0x4000) != 0 )
                --v30;
              if ( v30 >= (2 * *(_DWORD *)(v29 + 716)) >> 1 )
              {
                v34 = 0;
                v13 = **(_QWORD **)(*(_QWORD *)(v8 + 8) + 8LL * *v12);
                if ( (v13 & 1) != 0 )
                  v13 = 0LL;
                v14 = (_QWORD *)(v13 + 8);
                v15 = KeGetCurrentIrql();
                v32 = v15;
                __writecr8(2uLL);
                if ( KiIrqlFlags )
                {
                  LOBYTE(v29) = 2;
                  KiRaiseIrqlProcessIrqlFlags(v15, v29);
                }
                CurrentPrcb = KeGetCurrentPrcb();
                CurrentThread = CurrentPrcb->CurrentThread;
                if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
                {
                  IsThreadRunning = KeIsThreadRunning(CurrentPrcb->CurrentThread);
                  EtwTracePriQEnqueueWork(CurrentThread, WorkItem, (unsigned int)v35, IsThreadRunning);
                }
                KiAcquireKobjectLockSafe((volatile signed __int32 *)v13);
                if ( (_QWORD *)*v14 == v14
                  || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v13 && CurrentThread->WaitReason == 15 )
                {
LABEL_45:
                  v18 = v35;
                }
                else
                {
                  v18 = v35;
                  v19 = v13 + 664;
                  v20 = 32LL;
                  while ( 1 )
                  {
                    v21 = *(_DWORD *)(v19 - 4);
                    v19 -= 4LL;
                    v6 += v21;
                    --v20;
                    v22 = *(_DWORD *)(v13 + 664);
                    if ( v6 >= v22 )
                      break;
                    if ( v20 <= v35 )
                    {
                      if ( v6 >= v22 )
                        break;
                      v34 = KiWakePriQueueWaiter((__int64)CurrentPrcb, v13, (__int64)WorkItem, v35);
                      v23 = v34;
                      if ( v34 )
                      {
                        v24 = 0;
                        goto LABEL_38;
                      }
                      goto LABEL_45;
                    }
                  }
                }
                ++*(_DWORD *)(v13 + 4);
                v26 = (struct _LIST_ENTRY *)(v13 + 16LL * v18 + 24);
                Blink = v26->Blink;
                if ( Blink->Flink != v26 )
                  __fastfail(3u);
                WorkItem->List.Flink = v26;
                WorkItem->List.Blink = Blink;
                Blink->Flink = &WorkItem->List;
                v23 = v34;
                v26->Blink = &WorkItem->List;
                v24 = 1;
LABEL_38:
                _InterlockedAnd((volatile signed __int32 *)v13, 0xFFFFFF7F);
                if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 && !v23 && !v24 )
                  EtwTracePriQEnqueueFailed(CurrentThread, WorkItem);
                KiExitDispatcher((unsigned __int64)CurrentPrcb, 0LL, 1u, 0, v32);
                v25 = *(_DWORD *)(v13 + 712);
                if ( v25 < (2 * *(_DWORD *)(v13 + 716)) >> 1
                  || v25 < *(_DWORD *)(v13 + 720)
                  && (_QWORD *)*v14 == v14
                  && (*(_DWORD *)(v13 + 4) || *(int *)(v13 + 716) < 0) )
                {
                  KeSetEvent((PRKEVENT)(*(_QWORD *)(*(_QWORD *)(v36 + 16) + 8LL * *v12) + 16LL), 0, 0);
                }
                CurrentIrql = v33;
                v5 = 1;
                break;
              }
            }
          }
        }
      }
    }
    if ( ++v7 == (unsigned __int16)KeNumberNodes )
      v11 = -1;
    else
      v11 = *(_DWORD *)(qword_140E2DAD0 + 4LL * (v10 * (unsigned __int16)KeNumberNodes + v7));
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  if ( !v5 )
    KeBugCheckEx(0xE4u, 5uLL, (ULONG_PTR)WorkItem, v3, 0xFFFFFFFFFFFFFFFFuLL);
}
