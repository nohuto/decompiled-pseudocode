/*
 * XREFs of ExQueueWorkItem @ 0x1402CE3E0
 * Callers:
 *     CmpWorkItemQueueWork @ 0x14021E9B0 (CmpWorkItemQueueWork.c)
 *     PsDereferencePartition @ 0x14022B3F0 (PsDereferencePartition.c)
 *     PfSnGetFileInformation @ 0x14022B790 (PfSnGetFileInformation.c)
 *     PfSnTraceGetLogEntry @ 0x14022BD20 (PfSnTraceGetLogEntry.c)
 *     ExpWaitForResource @ 0x14022CDD0 (ExpWaitForResource.c)
 *     IopCopyCompleteReadIrp @ 0x14025FA30 (IopCopyCompleteReadIrp.c)
 *     EtwpQueuePerfMemInfoWorkItem @ 0x140262144 (EtwpQueuePerfMemInfoWorkItem.c)
 *     EtwpTiAsyncVadQueryEventWrite @ 0x140262F9C (EtwpTiAsyncVadQueryEventWrite.c)
 *     PopDeepSleepSetDisengageReason @ 0x1402B9DFC (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x1402B9FF0 (PopDeepSleepClearDisengageReason.c)
 *     PopDequeueQuerySetIrp @ 0x1402BA5A0 (PopDequeueQuerySetIrp.c)
 *     IopReleaseFileObjectLock @ 0x1402C60B0 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     NtTraceEvent @ 0x1402CE8A0 (NtTraceEvent.c)
 *     PoNotifyMediaBuffering @ 0x1402E1780 (PoNotifyMediaBuffering.c)
 *     LZNT1DecompressChunkNewThread @ 0x1402E24E4 (LZNT1DecompressChunkNewThread.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x1402E7EB8 (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     PfSnTraceTimerRoutine @ 0x140314FF0 (PfSnTraceTimerRoutine.c)
 *     KiRcuFlushCompleted @ 0x14031C9F0 (KiRcuFlushCompleted.c)
 *     MiFreeCombineBlock @ 0x1403427B8 (MiFreeCombineBlock.c)
 *     MiCheckLogPinDriverAddresses @ 0x140353990 (MiCheckLogPinDriverAddresses.c)
 *     MiWorkingSetManager @ 0x140354FA0 (MiWorkingSetManager.c)
 *     IoFreeAdapterChannelV3 @ 0x14038C4E0 (IoFreeAdapterChannelV3.c)
 *     MiDereferenceIoPages @ 0x14038E760 (MiDereferenceIoPages.c)
 *     MmReportParkedProcessors @ 0x1403A38F0 (MmReportParkedProcessors.c)
 *     PopFxReinitializeAccountingInstance @ 0x1403A5DA8 (PopFxReinitializeAccountingInstance.c)
 *     PopQueueQuerySetIrp @ 0x1403A96B4 (PopQueueQuerySetIrp.c)
 *     ExpHpGCTimerCallback @ 0x1403AE280 (ExpHpGCTimerCallback.c)
 *     PspHardDereferenceSiloWorker @ 0x1403B33A0 (PspHardDereferenceSiloWorker.c)
 *     ObpDeferObjectDeletion @ 0x1403B341C (ObpDeferObjectDeletion.c)
 *     ExpWaitForFastResource @ 0x1403BD4B0 (ExpWaitForFastResource.c)
 *     IoRaiseHardError @ 0x1403C1290 (IoRaiseHardError.c)
 *     ExpCenturyDpcRoutine @ 0x1403C16E0 (ExpCenturyDpcRoutine.c)
 *     SepQueueWorkItem @ 0x1403C35C4 (SepQueueWorkItem.c)
 *     IopCompleteUnloadOrDelete @ 0x1403E62B0 (IopCompleteUnloadOrDelete.c)
 *     PopUserPresentSet @ 0x1403E6990 (PopUserPresentSet.c)
 *     PopCheckForWork @ 0x1403E6AAC (PopCheckForWork.c)
 *     MiIssueSegmentDereferenceWork @ 0x1403ED890 (MiIssueSegmentDereferenceWork.c)
 *     CcInitializeVolumeCacheMap @ 0x14040BF18 (CcInitializeVolumeCacheMap.c)
 *     IoIncrementKeepAliveCount @ 0x14041A9A0 (IoIncrementKeepAliveCount.c)
 *     PopThermalCsEntry @ 0x14041B95C (PopThermalCsEntry.c)
 *     IoWMIWriteEvent @ 0x1404206B0 (IoWMIWriteEvent.c)
 *     WheapWorkQueueAddItem @ 0x14042085C (WheapWorkQueueAddItem.c)
 *     MiAgeAweRegions @ 0x14043DAC0 (MiAgeAweRegions.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x140441A20 (SmKmStoreDeleteWhenEmpty.c)
 *     PoLatencySensitivityHint @ 0x14044BDE0 (PoLatencySensitivityHint.c)
 *     PpmCheckPeriodicStart @ 0x14044C1A0 (PpmCheckPeriodicStart.c)
 *     EtwTelemetryCoverageReport @ 0x14044D270 (EtwTelemetryCoverageReport.c)
 *     CmpArmDelayedCloseTimer @ 0x14044F4B0 (CmpArmDelayedCloseTimer.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x140464570 (IoReportTargetDeviceChangeAsynchronous.c)
 *     PopPowerRequestReferenceAcquire @ 0x140464AF0 (PopPowerRequestReferenceAcquire.c)
 *     PopPowerRequestHandleRequestOverrideQueryResponse @ 0x140464C2C (PopPowerRequestHandleRequestOverrideQueryResponse.c)
 *     PnpRequestDeviceAction @ 0x140467508 (PnpRequestDeviceAction.c)
 *     IoDecrementKeepAliveCount @ 0x140474F30 (IoDecrementKeepAliveCount.c)
 *     SshpWorkItemQueue @ 0x140477ADC (SshpWorkItemQueue.c)
 *     PspRequestDeferredJobNotification @ 0x1404829E8 (PspRequestDeferredJobNotification.c)
 *     ?KiIdealProcessorRebalancerTimerCallback@@YAXPEAU_KTIMER2@@PEAX@Z @ 0x1404841C0 (-KiIdealProcessorRebalancerTimerCallback@@YAXPEAU_KTIMER2@@PEAX@Z.c)
 *     SepAdtDetermineInsertQueue @ 0x140485EE0 (SepAdtDetermineInsertQueue.c)
 *     IopQueueInvalidateBusRelationsRequest @ 0x14048DC2C (IopQueueInvalidateBusRelationsRequest.c)
 *     PopQueueWorkItem @ 0x140491E08 (PopQueueWorkItem.c)
 *     PnpUnlockDeviceActionQueue @ 0x140493744 (PnpUnlockDeviceActionQueue.c)
 *     WheapWorkQueueDpcRoutine @ 0x140496E70 (WheapWorkQueueDpcRoutine.c)
 *     HalpQueueMapBufferWorker @ 0x140497EF8 (HalpQueueMapBufferWorker.c)
 *     PopBatteryQueueWork @ 0x14049F07C (PopBatteryQueueWork.c)
 *     PopThermalIrpComplete @ 0x1404A2A10 (PopThermalIrpComplete.c)
 *     PopBsdHandleRequest @ 0x1404A3364 (PopBsdHandleRequest.c)
 *     SmQueueExWorkItem @ 0x1404A44A4 (SmQueueExWorkItem.c)
 *     PopIdleWakeNotifyModernStandbyExit @ 0x1404A458C (PopIdleWakeNotifyModernStandbyExit.c)
 *     IoWriteErrorLogEntry @ 0x1404A6840 (IoWriteErrorLogEntry.c)
 *     IoRaiseInformationalHardError @ 0x1404A88B0 (IoRaiseInformationalHardError.c)
 *     ExpTimeRefreshDpcRoutine @ 0x1404A93F0 (ExpTimeRefreshDpcRoutine.c)
 *     HalpGenericPolledDpcRoutine @ 0x1404AA370 (HalpGenericPolledDpcRoutine.c)
 *     WdipTimeoutTimerRoutine @ 0x1404AA880 (WdipTimeoutTimerRoutine.c)
 *     PopPowerRequestRevokeRequests @ 0x1404B0D7C (PopPowerRequestRevokeRequests.c)
 *     PopEnsureCoalescingWorkerWillRun @ 0x1404B2150 (PopEnsureCoalescingWorkerWillRun.c)
 *     ?TlgAggregateInternalFlushTimerCallbackKernelMode@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x1404B3FD0 (-TlgAggregateInternalFlushTimerCallbackKernelMode@@YAXPEAU_EX_TIMER@@PEAX@Z.c)
 *     HalpCmcDeferredRoutine @ 0x1404B6100 (HalpCmcDeferredRoutine.c)
 *     PopWakeInfoDereference @ 0x1404B735C (PopWakeInfoDereference.c)
 *     PpmHeteroHgsUpdateDpcRoutine @ 0x1404B9940 (PpmHeteroHgsUpdateDpcRoutine.c)
 *     PopSleepstudyScenarioStopTimerCallback @ 0x1404BCBD0 (PopSleepstudyScenarioStopTimerCallback.c)
 *     CcTelemetryPeriodicTimerDpc @ 0x1404BD5F0 (CcTelemetryPeriodicTimerDpc.c)
 *     PiDrvDbUnloadNodeDpcRoutine @ 0x1404BFF90 (PiDrvDbUnloadNodeDpcRoutine.c)
 *     PopFanIrpComplete @ 0x1404C1AC0 (PopFanIrpComplete.c)
 *     MiWakeFileOnlyReaper @ 0x1404C87B0 (MiWakeFileOnlyReaper.c)
 *     IopLoadDriverImage @ 0x1404DD018 (IopLoadDriverImage.c)
 *     PsDispatchIumService @ 0x1404E66B4 (PsDispatchIumService.c)
 *     KiAvailableCpusSubscriptionQueueWorkItem @ 0x1404F8B4C (KiAvailableCpusSubscriptionQueueWorkItem.c)
 *     CcBcbProfiler @ 0x1405055A0 (CcBcbProfiler.c)
 *     HalpPmuArbiterPeriodicTimerCallback @ 0x1405436D0 (HalpPmuArbiterPeriodicTimerCallback.c)
 *     HalpBlkWdTimerRoutine @ 0x14056A8E0 (HalpBlkWdTimerRoutine.c)
 *     CcSetupWatchForRegistryChanges @ 0x140578B80 (CcSetupWatchForRegistryChanges.c)
 *     CcQueueAsyncGetDeviceGuid @ 0x14057AB54 (CcQueueAsyncGetDeviceGuid.c)
 *     EmpQueueRuleUpdateState @ 0x14057C690 (EmpQueueRuleUpdateState.c)
 *     PfSnTracingStateDpcRoutine @ 0x14057E5B0 (PfSnTracingStateDpcRoutine.c)
 *     HvlpInitializeSvmIommuSupport @ 0x1405881D8 (HvlpInitializeSvmIommuSupport.c)
 *     HvlpIommuPrqDpcRoutine @ 0x1405882D0 (HvlpIommuPrqDpcRoutine.c)
 *     IopErrorLogDpc @ 0x14059F9E0 (IopErrorLogDpc.c)
 *     IoRequestDeviceEjectEx @ 0x1405A1910 (IoRequestDeviceEjectEx.c)
 *     IopDeviceEjectComplete @ 0x1405A6450 (IopDeviceEjectComplete.c)
 *     KeBalanceSetManager @ 0x1405C1BE0 (KeBalanceSetManager.c)
 *     KiScheduleBugcheckRecoveryWorkItem @ 0x1405C3D70 (KiScheduleBugcheckRecoveryWorkItem.c)
 *     KiLogUserCetSetContextIpValidationFailure @ 0x1405C449C (KiLogUserCetSetContextIpValidationFailure.c)
 *     KiAltContextWorkQueueAddItem @ 0x1405C7258 (KiAltContextWorkQueueAddItem.c)
 *     KiAltReturnDpcRoutine @ 0x1405C7340 (KiAltReturnDpcRoutine.c)
 *     ObpProcessRemoveObjectDpcWorker @ 0x1405C9AB0 (ObpProcessRemoveObjectDpcWorker.c)
 *     ObpDeferPushRefDerefInfo @ 0x1405C9AD0 (ObpDeferPushRefDerefInfo.c)
 *     PfpPowerActionDpcRoutine @ 0x1405C9BD0 (PfpPowerActionDpcRoutine.c)
 *     PfSnPowerBoostDpc @ 0x1405CA280 (PfSnPowerBoostDpc.c)
 *     PopPowerActionWatchdog @ 0x1405D10B0 (PopPowerActionWatchdog.c)
 *     PopPowerAggregatorDozeTimerCallback @ 0x1405D4E50 (PopPowerAggregatorDozeTimerCallback.c)
 *     PopPowerAggregatorSessionSwitchTimerCallback @ 0x1405D4FA0 (PopPowerAggregatorSessionSwitchTimerCallback.c)
 *     PopBatteryWakeDpc @ 0x1405D52D0 (PopBatteryWakeDpc.c)
 *     PpmWmiIdleAccountingProcedure @ 0x1405D55B0 (PpmWmiIdleAccountingProcedure.c)
 *     PopIdleAoAcDozeS4TimerCallback @ 0x1405D5640 (PopIdleAoAcDozeS4TimerCallback.c)
 *     PopWatchdogDpc @ 0x1405D5E90 (PopWatchdogDpc.c)
 *     SshpAlpcOpenGracePeriodTimerCallback @ 0x1405E1CC0 (SshpAlpcOpenGracePeriodTimerCallback.c)
 *     TtmpScheduledEvaluationDpc @ 0x1405E1CF0 (TtmpScheduledEvaluationDpc.c)
 *     TtmpTerminalInactivityTimerDpcRoutine @ 0x1405E1D30 (TtmpTerminalInactivityTimerDpcRoutine.c)
 *     SepAuditFailedRaisedIrql @ 0x140607C18 (SepAuditFailedRaisedIrql.c)
 *     ?SmStoreTerminate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_ETW_TERMINATION_REASON@@J@Z @ 0x14060D184 (-SmStoreTerminate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_ST_E.c)
 *     CarWriteLivedump @ 0x1406182D4 (CarWriteLivedump.c)
 *     EtwpContainerStateWnfCallback @ 0x14064AD40 (EtwpContainerStateWnfCallback.c)
 *     EtwpCoverageFlushTimerCallback @ 0x14064DD00 (EtwpCoverageFlushTimerCallback.c)
 *     EtwpCoverageResetTimerCallback @ 0x14064DF90 (EtwpCoverageResetTimerCallback.c)
 *     EtwpCompressionDpc @ 0x14064F860 (EtwpCompressionDpc.c)
 *     ExpNextYearDpcRoutine @ 0x140651D30 (ExpNextYearDpcRoutine.c)
 *     ExpTimeZoneDpcRoutine @ 0x140651EA0 (ExpTimeZoneDpcRoutine.c)
 *     ExInitializeProcessor @ 0x140651FD4 (ExInitializeProcessor.c)
 *     ExpTrackRaiseLimitNotification @ 0x1406539C4 (ExpTrackRaiseLimitNotification.c)
 *     ExpDebuggerDpcRoutine @ 0x140656B50 (ExpDebuggerDpcRoutine.c)
 *     ExpSvmDpcRoutine @ 0x140657EC0 (ExpSvmDpcRoutine.c)
 *     WheapDeferredRecoveryServiceDpcRoutine @ 0x14065C3A0 (WheapDeferredRecoveryServiceDpcRoutine.c)
 *     WheaFlushETWEventsAddWorkRtn @ 0x14065C5A4 (WheaFlushETWEventsAddWorkRtn.c)
 *     WheaFlushETWEventsDpcRoutine @ 0x14065C680 (WheaFlushETWEventsDpcRoutine.c)
 *     CmpFreezeThawDpcRoutine @ 0x1406668E0 (CmpFreezeThawDpcRoutine.c)
 *     CmpLazyCommitDpcRoutine @ 0x140666AD0 (CmpLazyCommitDpcRoutine.c)
 *     CmpDelayFreeRMDpcRoutine @ 0x140666C60 (CmpDelayFreeRMDpcRoutine.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x14066B458 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiNotifyUserOfLostData @ 0x140673608 (MiNotifyUserOfLostData.c)
 *     MiPageNotZero @ 0x14067507C (MiPageNotZero.c)
 *     MiRemovePendingBadPageNode @ 0x1406753AC (MiRemovePendingBadPageNode.c)
 *     MiNoPagesLastChance @ 0x140685ADC (MiNoPagesLastChance.c)
 *     WdtpTimerCallback @ 0x14069D4F0 (WdtpTimerCallback.c)
 *     DbgkQueueUserExceptionReport @ 0x140704FC4 (DbgkQueueUserExceptionReport.c)
 *     DbgkpWerStartDeferredLiveDump @ 0x140706A90 (DbgkpWerStartDeferredLiveDump.c)
 *     EmRemoveBadS3PagesCallback @ 0x140707A70 (EmRemoveBadS3PagesCallback.c)
 *     PipUpdateSetupOobeCompleteWnfCallback @ 0x1407180D0 (PipUpdateSetupOobeCompleteWnfCallback.c)
 *     PnpBootPhaseComplete @ 0x140718154 (PnpBootPhaseComplete.c)
 *     IoReplacePartitionUnit @ 0x14071C6E0 (IoReplacePartitionUnit.c)
 *     PiDqObjectManagerMakeInconsistent @ 0x1407261C8 (PiDqObjectManagerMakeInconsistent.c)
 *     PiProfileUpdateDeviceTree @ 0x14072B2BC (PiProfileUpdateDeviceTree.c)
 *     IopEjectDevice @ 0x140731964 (IopEjectDevice.c)
 *     PopFxNotifySxTransitionState @ 0x14074C4B0 (PopFxNotifySxTransitionState.c)
 *     PopThermalZoneAdd @ 0x140752BE0 (PopThermalZoneAdd.c)
 *     PopPowerAggregatorModernStandbyEnterStateHandler @ 0x140757D70 (PopPowerAggregatorModernStandbyEnterStateHandler.c)
 *     PopBatteryAdd @ 0x140759340 (PopBatteryAdd.c)
 *     PopFanAdd @ 0x14075BD90 (PopFanAdd.c)
 *     PopAdaptiveConsoleSessionOverrideClear @ 0x14075E15C (PopAdaptiveConsoleSessionOverrideClear.c)
 *     PopAdaptiveStandbyHandleBatteryUpdate @ 0x140760484 (PopAdaptiveStandbyHandleBatteryUpdate.c)
 *     PopCadHpmiPnpNotification @ 0x140762BC0 (PopCadHpmiPnpNotification.c)
 *     TtmiScheduleSessionWorker @ 0x14076A144 (TtmiScheduleSessionWorker.c)
 *     PspCompleteServerSiloShutdown @ 0x1407727C8 (PspCompleteServerSiloShutdown.c)
 *     PspQueueDeferredWorkAndWait @ 0x140773108 (PspQueueDeferredWorkAndWait.c)
 *     PsSetVmProcessorHostProcess @ 0x1407768BC (PsSetVmProcessorHostProcess.c)
 *     RtlpCtQueueWorkItem @ 0x140787148 (RtlpCtQueueWorkItem.c)
 *     SepInformFileSystemsOfDeletedLogon @ 0x140793820 (SepInformFileSystemsOfDeletedLogon.c)
 *     VmPrefetchVirtualAddresses @ 0x14079E7D8 (VmPrefetchVirtualAddresses.c)
 *     WdipSemStartTimeoutCheck @ 0x1407A2CF0 (WdipSemStartTimeoutCheck.c)
 *     PeriodicCaptureStateTimerCallback @ 0x1407ADE10 (PeriodicCaptureStateTimerCallback.c)
 *     ExpNodeHotAddProcessorWorker @ 0x1407C0040 (ExpNodeHotAddProcessorWorker.c)
 *     WheaAttemptClearPoison @ 0x1407C76B0 (WheaAttemptClearPoison.c)
 *     WheaAttemptPhysicalPageOffline @ 0x1407C7790 (WheaAttemptPhysicalPageOffline.c)
 *     CmpDoQueueSystemHiveHysteresis @ 0x1407D275C (CmpDoQueueSystemHiveHysteresis.c)
 *     CmpDiskFullWarning @ 0x1407D5EF0 (CmpDiskFullWarning.c)
 *     MiUnmapPfns @ 0x1407EA6E0 (MiUnmapPfns.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x140840AF0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x140841F90 (CmpDereferenceKeyControlBlock.c)
 *     CmpDeleteKeyObject @ 0x140843620 (CmpDeleteKeyObject.c)
 *     CmpSignalDeferredPosts @ 0x14086E9C0 (CmpSignalDeferredPosts.c)
 *     CmpDoQueueLateUnloadWorker @ 0x1408824E8 (CmpDoQueueLateUnloadWorker.c)
 *     CmpClaimGlobalQuota @ 0x140882FDC (CmpClaimGlobalQuota.c)
 *     CmpForceFlushForCoalescing @ 0x14088740C (CmpForceFlushForCoalescing.c)
 *     PnpInsertEventInQueue @ 0x1408B1240 (PnpInsertEventInQueue.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x1408D8CB0 (PspChangeJobMemoryUsageByProcess.c)
 *     ExpWorkQueueManagerThread @ 0x1408F84F0 (ExpWorkQueueManagerThread.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140904190 (ExpWnfNotifyNameSubscribers.c)
 *     PiDrvDbLoadNode @ 0x140928080 (PiDrvDbLoadNode.c)
 *     PfSnPrefetchSections @ 0x140938134 (PfSnPrefetchSections.c)
 *     PfSnPrefetchSectionsCleanup @ 0x1409384F0 (PfSnPrefetchSectionsCleanup.c)
 *     PfSnPrefetchScenario @ 0x14094A830 (PfSnPrefetchScenario.c)
 *     PfSnEndProcessTrace @ 0x14094BF24 (PfSnEndProcessTrace.c)
 *     CmpCanGrowHive @ 0x140969580 (CmpCanGrowHive.c)
 *     PopPowerAggregatorScheduleWorker @ 0x1409A0BFC (PopPowerAggregatorScheduleWorker.c)
 *     PspRundownProcess @ 0x1409E5948 (PspRundownProcess.c)
 *     ExpWnfStartKernelDispatcher @ 0x1409E8BD4 (ExpWnfStartKernelDispatcher.c)
 *     PiUEventNotifyUserMode @ 0x1409ECA04 (PiUEventNotifyUserMode.c)
 *     PiDqObjectManagerHandleObjectEvent @ 0x140A28F80 (PiDqObjectManagerHandleObjectEvent.c)
 *     PopDiagTraceControlCallback @ 0x140A2CF10 (PopDiagTraceControlCallback.c)
 *     PopEsWorkItemSchedule @ 0x140A31484 (PopEsWorkItemSchedule.c)
 *     PsSetProcessWin32Process @ 0x140A414D0 (PsSetProcessWin32Process.c)
 *     PspScheduleEnforcementWorker @ 0x140A41DC0 (PspScheduleEnforcementWorker.c)
 *     WmipQueueRegWork @ 0x140A49FB4 (WmipQueueRegWork.c)
 *     NtNotifyChangeSession @ 0x140A5FDF0 (NtNotifyChangeSession.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x140A601C4 (PiUEventQueueBroadcastEventEntry.c)
 *     EtwpCrimsonProvEnableCallback @ 0x140A624A0 (EtwpCrimsonProvEnableCallback.c)
 *     PoFxSetTargetDripsDevicePowerState @ 0x140A6AD30 (PoFxSetTargetDripsDevicePowerState.c)
 *     WmipLegacyEtwCallback @ 0x140A765F0 (WmipLegacyEtwCallback.c)
 *     PiProcessNewDeviceNodeAsync @ 0x140A767EC (PiProcessNewDeviceNodeAsync.c)
 *     PnpChainDereferenceComplete @ 0x140A83D94 (PnpChainDereferenceComplete.c)
 *     SepScheduleImageVerificationCallbacks @ 0x140A89D00 (SepScheduleImageVerificationCallbacks.c)
 *     WmipQueueLegacyEtwWork @ 0x140A8AB68 (WmipQueueLegacyEtwWork.c)
 *     PerfDiagpRequestState @ 0x140A8BF0C (PerfDiagpRequestState.c)
 *     PiDrvDbUnloadNodeWorkerCallback @ 0x140A92DE0 (PiDrvDbUnloadNodeWorkerCallback.c)
 *     PspPostFreezeOperationWorkEnqueue @ 0x140A94554 (PspPostFreezeOperationWorkEnqueue.c)
 *     IopSendMessageToTrackService @ 0x140AA335C (IopSendMessageToTrackService.c)
 *     IopUnloadDriver @ 0x140AA4068 (IopUnloadDriver.c)
 *     PopPdcRegister @ 0x140ABA068 (PopPdcRegister.c)
 *     PnprInitiateReplaceOperation @ 0x140B55C44 (PnprInitiateReplaceOperation.c)
 *     MiZeroAllPageFiles @ 0x140B6443C (MiZeroAllPageFiles.c)
 *     MmDuplicateMemory @ 0x140B64A68 (MmDuplicateMemory.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B6891C (PopTransitionSystemPowerStateEx.c)
 *     KdpTimeSlipDpcRoutine @ 0x140B7A610 (KdpTimeSlipDpcRoutine.c)
 *     IovpUnloadDriver @ 0x140B84AF8 (IovpUnloadDriver.c)
 *     VfIrpLogRecordEvent @ 0x140B9D684 (VfIrpLogRecordEvent.c)
 *     LogFwReport @ 0x140BB63FC (LogFwReport.c)
 *     sub_140BD80B0 @ 0x140BD80B0 (sub_140BD80B0.c)
 *     sub_140BE196C @ 0x140BE196C (sub_140BE196C.c)
 *     HalpAcpiDetectPiix4 @ 0x140C11300 (HalpAcpiDetectPiix4.c)
 *     HalpAcpiPopulateTableCache @ 0x140C113A8 (HalpAcpiPopulateTableCache.c)
 *     FsRtlInitializeSmssEvent @ 0x140C1AEC0 (FsRtlInitializeSmssEvent.c)
 *     IoInitSystemPreDrivers @ 0x140C1CA4C (IoInitSystemPreDrivers.c)
 *     WmipInitializeRegistration @ 0x140C3E9B8 (WmipInitializeRegistration.c)
 *     MiInitSystem @ 0x140C4FDD0 (MiInitSystem.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KiAcquireKobjectLockSafe @ 0x1402C72D0 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x1402C7330 (KiExitDispatcher.c)
 *     KiWakePriQueueWaiter @ 0x1402CD480 (KiWakePriQueueWaiter.c)
 *     KeIsThreadRunning @ 0x1403AD158 (KeIsThreadRunning.c)
 *     EtwTracePriQEnqueueWork @ 0x1404C3070 (EtwTracePriQEnqueueWork.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     EtwTracePriQEnqueueFailed @ 0x14064C2D0 (EtwTracePriQEnqueueFailed.c)
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
      v11 = *(_DWORD *)(qword_140E2DC10 + 4LL * (v10 * (unsigned __int16)KeNumberNodes + v7));
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  if ( !v5 )
    KeBugCheckEx(0xE4u, 5uLL, (ULONG_PTR)WorkItem, v3, 0xFFFFFFFFFFFFFFFFuLL);
}
