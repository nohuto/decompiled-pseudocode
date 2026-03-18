/*
 * XREFs of ExQueueWorkItem @ 0x140309660
 * Callers:
 *     PoLatencySensitivityHint @ 0x140201F50 (PoLatencySensitivityHint.c)
 *     PpmCheckPeriodicStart @ 0x1402035D0 (PpmCheckPeriodicStart.c)
 *     MiFreeCombineBlock @ 0x14023A47C (MiFreeCombineBlock.c)
 *     IopfCompleteRequest @ 0x140251740 (IopfCompleteRequest.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     MmReportParkedProcessors @ 0x14026BF50 (MmReportParkedProcessors.c)
 *     IopReleaseFileObjectLock @ 0x140285FF0 (IopReleaseFileObjectLock.c)
 *     ExpWaitForFastResource @ 0x140293C60 (ExpWaitForFastResource.c)
 *     IopCopyCompleteReadIrp @ 0x1402D3280 (IopCopyCompleteReadIrp.c)
 *     IopCompleteUnloadOrDelete @ 0x1402FEF84 (IopCompleteUnloadOrDelete.c)
 *     PsDereferencePartition @ 0x140302710 (PsDereferencePartition.c)
 *     PfSnGetFileInformation @ 0x140302AF0 (PfSnGetFileInformation.c)
 *     PfSnTraceGetLogEntry @ 0x140303020 (PfSnTraceGetLogEntry.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     NtTraceEvent @ 0x14030A680 (NtTraceEvent.c)
 *     IoFreeAdapterChannelV3 @ 0x140331E60 (IoFreeAdapterChannelV3.c)
 *     PopQueueQuerySetIrp @ 0x14034DCB8 (PopQueueQuerySetIrp.c)
 *     IoWMIWriteEvent @ 0x1403543B0 (IoWMIWriteEvent.c)
 *     WheapWorkQueueAddItem @ 0x14035455C (WheapWorkQueueAddItem.c)
 *     PopDeepSleepSetDisengageReason @ 0x140354D44 (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x140354F38 (PopDeepSleepClearDisengageReason.c)
 *     PopFxReinitializeAccountingInstance @ 0x140355E94 (PopFxReinitializeAccountingInstance.c)
 *     PopDequeueQuerySetIrp @ 0x14035836C (PopDequeueQuerySetIrp.c)
 *     ExpHpGCTimerCallback @ 0x14036F4D0 (ExpHpGCTimerCallback.c)
 *     ObpDeferObjectDeletion @ 0x14036FDD8 (ObpDeferObjectDeletion.c)
 *     LZNT1DecompressChunkNewThread @ 0x140375408 (LZNT1DecompressChunkNewThread.c)
 *     PspHardDereferenceSiloWorker @ 0x140375830 (PspHardDereferenceSiloWorker.c)
 *     PoNotifyMediaBuffering @ 0x140375ED0 (PoNotifyMediaBuffering.c)
 *     MiDereferenceIoPages @ 0x140391A60 (MiDereferenceIoPages.c)
 *     CcInitializeVolumeCacheMap @ 0x1403A5574 (CcInitializeVolumeCacheMap.c)
 *     MiWorkingSetManager @ 0x1403B36E0 (MiWorkingSetManager.c)
 *     CmpWorkItemQueueWork @ 0x1403B8E30 (CmpWorkItemQueueWork.c)
 *     EtwpTiAsyncVadQueryEventWrite @ 0x1403BD46C (EtwpTiAsyncVadQueryEventWrite.c)
 *     EtwpQueuePerfMemInfoWorkItem @ 0x1403BDCFC (EtwpQueuePerfMemInfoWorkItem.c)
 *     MiAgeAweRegions @ 0x1403C3618 (MiAgeAweRegions.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x1403D4BC4 (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     SepQueueWorkItem @ 0x1403D74A8 (SepQueueWorkItem.c)
 *     ExpWaitForResource @ 0x14041F0A0 (ExpWaitForResource.c)
 *     IoIncrementKeepAliveCount @ 0x14042EEB0 (IoIncrementKeepAliveCount.c)
 *     PopThermalCsEntry @ 0x14043125C (PopThermalCsEntry.c)
 *     IoRaiseHardError @ 0x1404339B0 (IoRaiseHardError.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x14044B4F0 (SmKmStoreDeleteWhenEmpty.c)
 *     EtwTelemetryCoverageReport @ 0x1404575C0 (EtwTelemetryCoverageReport.c)
 *     MiIssueSegmentDereferenceWork @ 0x140458FA0 (MiIssueSegmentDereferenceWork.c)
 *     CmpArmDelayedCloseTimer @ 0x14045AC7C (CmpArmDelayedCloseTimer.c)
 *     MiCheckLogPinDriverAddresses @ 0x14045F5E8 (MiCheckLogPinDriverAddresses.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x14046CF60 (IoReportTargetDeviceChangeAsynchronous.c)
 *     PopPowerRequestReferenceAcquire @ 0x14046D4E0 (PopPowerRequestReferenceAcquire.c)
 *     PopPowerRequestHandleRequestOverrideQueryResponse @ 0x14046D61C (PopPowerRequestHandleRequestOverrideQueryResponse.c)
 *     PnpRequestDeviceAction @ 0x14046E128 (PnpRequestDeviceAction.c)
 *     PopUserPresentSet @ 0x140476860 (PopUserPresentSet.c)
 *     PopCheckForWork @ 0x14047697C (PopCheckForWork.c)
 *     SshpWorkItemQueue @ 0x14047CD9C (SshpWorkItemQueue.c)
 *     IoDecrementKeepAliveCount @ 0x14047CFB0 (IoDecrementKeepAliveCount.c)
 *     PfSnTraceTimerRoutine @ 0x14047EF80 (PfSnTraceTimerRoutine.c)
 *     PspRequestDeferredJobNotification @ 0x140487F94 (PspRequestDeferredJobNotification.c)
 *     ?KiIdealProcessorRebalancerTimerCallback@@YAXPEAU_KTIMER2@@PEAX@Z @ 0x1404899F0 (-KiIdealProcessorRebalancerTimerCallback@@YAXPEAU_KTIMER2@@PEAX@Z.c)
 *     SepAdtDetermineInsertQueue @ 0x14048B850 (SepAdtDetermineInsertQueue.c)
 *     PsDispatchIumService @ 0x14048F2F0 (PsDispatchIumService.c)
 *     IopQueueInvalidateBusRelationsRequest @ 0x14049451C (IopQueueInvalidateBusRelationsRequest.c)
 *     PopQueueWorkItem @ 0x140497BA0 (PopQueueWorkItem.c)
 *     PnpUnlockDeviceActionQueue @ 0x140499000 (PnpUnlockDeviceActionQueue.c)
 *     WheapWorkQueueDpcRoutine @ 0x14049D070 (WheapWorkQueueDpcRoutine.c)
 *     HalpQueueMapBufferWorker @ 0x14049E010 (HalpQueueMapBufferWorker.c)
 *     PopBatteryQueueWork @ 0x1404A406C (PopBatteryQueueWork.c)
 *     PopThermalIrpComplete @ 0x1404A7630 (PopThermalIrpComplete.c)
 *     PopBsdHandleRequest @ 0x1404A7FA0 (PopBsdHandleRequest.c)
 *     SmQueueExWorkItem @ 0x1404A92DC (SmQueueExWorkItem.c)
 *     PopIdleWakeNotifyModernStandbyExit @ 0x1404A969C (PopIdleWakeNotifyModernStandbyExit.c)
 *     IoWriteErrorLogEntry @ 0x1404AB020 (IoWriteErrorLogEntry.c)
 *     IoRaiseInformationalHardError @ 0x1404AD170 (IoRaiseInformationalHardError.c)
 *     ExpTimeRefreshDpcRoutine @ 0x1404ADBC0 (ExpTimeRefreshDpcRoutine.c)
 *     HalpGenericPolledDpcRoutine @ 0x1404AEAE0 (HalpGenericPolledDpcRoutine.c)
 *     WdipTimeoutTimerRoutine @ 0x1404AF2E0 (WdipTimeoutTimerRoutine.c)
 *     PopPowerRequestRevokeRequests @ 0x1404B6AAC (PopPowerRequestRevokeRequests.c)
 *     PopEnsureCoalescingWorkerWillRun @ 0x1404B810C (PopEnsureCoalescingWorkerWillRun.c)
 *     ?TlgAggregateInternalFlushTimerCallbackKernelMode@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x1404BA1A0 (-TlgAggregateInternalFlushTimerCallbackKernelMode@@YAXPEAU_EX_TIMER@@PEAX@Z.c)
 *     ExpCenturyDpcRoutine @ 0x1404BBC60 (ExpCenturyDpcRoutine.c)
 *     HalpCmcDeferredRoutine @ 0x1404BC090 (HalpCmcDeferredRoutine.c)
 *     PopWakeInfoDereference @ 0x1404BD2EC (PopWakeInfoDereference.c)
 *     PpmHeteroHgsUpdateDpcRoutine @ 0x1404BFE50 (PpmHeteroHgsUpdateDpcRoutine.c)
 *     PopSleepstudyScenarioStopTimerCallback @ 0x1404C2DF0 (PopSleepstudyScenarioStopTimerCallback.c)
 *     CcTelemetryPeriodicTimerDpc @ 0x1404C3600 (CcTelemetryPeriodicTimerDpc.c)
 *     PiDrvDbUnloadNodeDpcRoutine @ 0x1404C6370 (PiDrvDbUnloadNodeDpcRoutine.c)
 *     PopFanIrpComplete @ 0x1404C7730 (PopFanIrpComplete.c)
 *     MiWakeFileOnlyReaper @ 0x1404DAD18 (MiWakeFileOnlyReaper.c)
 *     IopLoadDriverImage @ 0x1404E6A70 (IopLoadDriverImage.c)
 *     KiRcuFlushCompleted @ 0x1404F7CEC (KiRcuFlushCompleted.c)
 *     KiAvailableCpusSubscriptionQueueWorkItem @ 0x1404F8BEC (KiAvailableCpusSubscriptionQueueWorkItem.c)
 *     CcBcbProfiler @ 0x140505560 (CcBcbProfiler.c)
 *     HalpPmuArbiterPeriodicTimerCallback @ 0x140543520 (HalpPmuArbiterPeriodicTimerCallback.c)
 *     HalpBlkWdTimerRoutine @ 0x14056A150 (HalpBlkWdTimerRoutine.c)
 *     CcSetupWatchForRegistryChanges @ 0x1405783E0 (CcSetupWatchForRegistryChanges.c)
 *     CcQueueAsyncGetDeviceGuid @ 0x14057A3A4 (CcQueueAsyncGetDeviceGuid.c)
 *     EmpQueueRuleUpdateState @ 0x14057BEE0 (EmpQueueRuleUpdateState.c)
 *     PfSnTracingStateDpcRoutine @ 0x14057DDD0 (PfSnTracingStateDpcRoutine.c)
 *     HvlpInitializeSvmIommuSupport @ 0x140587878 (HvlpInitializeSvmIommuSupport.c)
 *     HvlpIommuPrqDpcRoutine @ 0x140587970 (HvlpIommuPrqDpcRoutine.c)
 *     IopErrorLogDpc @ 0x14059F2C0 (IopErrorLogDpc.c)
 *     IoRequestDeviceEjectEx @ 0x1405A1260 (IoRequestDeviceEjectEx.c)
 *     IopDeviceEjectComplete @ 0x1405A5B50 (IopDeviceEjectComplete.c)
 *     KeBalanceSetManager @ 0x1405C0270 (KeBalanceSetManager.c)
 *     KiScheduleBugcheckRecoveryWorkItem @ 0x1405C22A0 (KiScheduleBugcheckRecoveryWorkItem.c)
 *     KiLogUserCetSetContextIpValidationFailure @ 0x1405C29CC (KiLogUserCetSetContextIpValidationFailure.c)
 *     KiAltContextWorkQueueAddItem @ 0x1405C5508 (KiAltContextWorkQueueAddItem.c)
 *     KiAltReturnDpcRoutine @ 0x1405C55F0 (KiAltReturnDpcRoutine.c)
 *     ObpProcessRemoveObjectDpcWorker @ 0x1405C7D70 (ObpProcessRemoveObjectDpcWorker.c)
 *     ObpDeferPushRefDerefInfo @ 0x1405C7D90 (ObpDeferPushRefDerefInfo.c)
 *     PfpPowerActionDpcRoutine @ 0x1405C7E90 (PfpPowerActionDpcRoutine.c)
 *     PfSnPowerBoostDpc @ 0x1405C8540 (PfSnPowerBoostDpc.c)
 *     PopPowerActionWatchdog @ 0x1405CEF30 (PopPowerActionWatchdog.c)
 *     PopPowerAggregatorDozeTimerCallback @ 0x1405D2E10 (PopPowerAggregatorDozeTimerCallback.c)
 *     PopPowerAggregatorSessionSwitchTimerCallback @ 0x1405D2F60 (PopPowerAggregatorSessionSwitchTimerCallback.c)
 *     PopBatteryWakeDpc @ 0x1405D33F0 (PopBatteryWakeDpc.c)
 *     PpmWmiIdleAccountingProcedure @ 0x1405D36D0 (PpmWmiIdleAccountingProcedure.c)
 *     PopIdleAoAcDozeS4TimerCallback @ 0x1405D3760 (PopIdleAoAcDozeS4TimerCallback.c)
 *     PopWatchdogDpc @ 0x1405D3FA0 (PopWatchdogDpc.c)
 *     SshpAlpcOpenGracePeriodTimerCallback @ 0x1405D8850 (SshpAlpcOpenGracePeriodTimerCallback.c)
 *     TtmpScheduledEvaluationDpc @ 0x1405D8880 (TtmpScheduledEvaluationDpc.c)
 *     TtmpTerminalInactivityTimerDpcRoutine @ 0x1405D88C0 (TtmpTerminalInactivityTimerDpcRoutine.c)
 *     SepAuditFailedRaisedIrql @ 0x1405FD170 (SepAuditFailedRaisedIrql.c)
 *     ?SmStoreTerminate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_ETW_TERMINATION_REASON@@J@Z @ 0x140602C04 (-SmStoreTerminate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_ST_E.c)
 *     CarWriteLivedump @ 0x14060DD54 (CarWriteLivedump.c)
 *     EtwpContainerStateWnfCallback @ 0x140640710 (EtwpContainerStateWnfCallback.c)
 *     EtwpCoverageFlushTimerCallback @ 0x140643660 (EtwpCoverageFlushTimerCallback.c)
 *     EtwpCoverageResetTimerCallback @ 0x1406438F0 (EtwpCoverageResetTimerCallback.c)
 *     EtwpCompressionDpc @ 0x140645160 (EtwpCompressionDpc.c)
 *     ExpNextYearDpcRoutine @ 0x1406476D0 (ExpNextYearDpcRoutine.c)
 *     ExpTimeZoneDpcRoutine @ 0x140647840 (ExpTimeZoneDpcRoutine.c)
 *     ExInitializeProcessor @ 0x140647974 (ExInitializeProcessor.c)
 *     ExpTrackRaiseLimitNotification @ 0x1406493C4 (ExpTrackRaiseLimitNotification.c)
 *     ExpDebuggerDpcRoutine @ 0x14064C4F0 (ExpDebuggerDpcRoutine.c)
 *     ExpSvmDpcRoutine @ 0x14064D980 (ExpSvmDpcRoutine.c)
 *     WheapDeferredRecoveryServiceDpcRoutine @ 0x140651CF0 (WheapDeferredRecoveryServiceDpcRoutine.c)
 *     WheaFlushETWEventsAddWorkRtn @ 0x140651E4C (WheaFlushETWEventsAddWorkRtn.c)
 *     WheaFlushETWEventsDpcRoutine @ 0x140651F20 (WheaFlushETWEventsDpcRoutine.c)
 *     CmpFreezeThawDpcRoutine @ 0x14065C600 (CmpFreezeThawDpcRoutine.c)
 *     CmpLazyCommitDpcRoutine @ 0x14065C760 (CmpLazyCommitDpcRoutine.c)
 *     CmpDelayFreeRMDpcRoutine @ 0x14065C8A0 (CmpDelayFreeRMDpcRoutine.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x14065E768 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiNotifyUserOfLostData @ 0x140666988 (MiNotifyUserOfLostData.c)
 *     MiPageNotZero @ 0x14066844C (MiPageNotZero.c)
 *     MiRemovePendingBadPageNode @ 0x14066877C (MiRemovePendingBadPageNode.c)
 *     MiNoPagesLastChance @ 0x140679124 (MiNoPagesLastChance.c)
 *     WdtpTimerCallback @ 0x1406910D0 (WdtpTimerCallback.c)
 *     PspPostFreezeOperationWorkEnqueue @ 0x1406EBF50 (PspPostFreezeOperationWorkEnqueue.c)
 *     DbgkQueueUserExceptionReport @ 0x1406FB524 (DbgkQueueUserExceptionReport.c)
 *     DbgkpWerStartDeferredLiveDump @ 0x1406FCFF0 (DbgkpWerStartDeferredLiveDump.c)
 *     EmRemoveBadS3PagesCallback @ 0x1406FDFD0 (EmRemoveBadS3PagesCallback.c)
 *     PipUpdateSetupOobeCompleteWnfCallback @ 0x14070E440 (PipUpdateSetupOobeCompleteWnfCallback.c)
 *     PnpBootPhaseComplete @ 0x14070E4C4 (PnpBootPhaseComplete.c)
 *     IoReplacePartitionUnit @ 0x140712A50 (IoReplacePartitionUnit.c)
 *     PiDqObjectManagerMakeInconsistent @ 0x14071C6B8 (PiDqObjectManagerMakeInconsistent.c)
 *     PiProfileUpdateDeviceTree @ 0x140721328 (PiProfileUpdateDeviceTree.c)
 *     IopEjectDevice @ 0x140727798 (IopEjectDevice.c)
 *     PopFxNotifySxTransitionState @ 0x1407420B0 (PopFxNotifySxTransitionState.c)
 *     PopThermalZoneAdd @ 0x1407487F0 (PopThermalZoneAdd.c)
 *     PopPowerAggregatorModernStandbyEnterStateHandler @ 0x14074D5F0 (PopPowerAggregatorModernStandbyEnterStateHandler.c)
 *     PopBatteryAdd @ 0x14074E680 (PopBatteryAdd.c)
 *     PopFanAdd @ 0x1407504C0 (PopFanAdd.c)
 *     PopCadHpmiPnpNotification @ 0x140753730 (PopCadHpmiPnpNotification.c)
 *     TtmiScheduleSessionWorker @ 0x14075A564 (TtmiScheduleSessionWorker.c)
 *     PspCompleteServerSiloShutdown @ 0x140762BE8 (PspCompleteServerSiloShutdown.c)
 *     PspQueueDeferredWorkAndWait @ 0x140763518 (PspQueueDeferredWorkAndWait.c)
 *     PsSetVmProcessorHostProcess @ 0x140766CCC (PsSetVmProcessorHostProcess.c)
 *     RtlpCtQueueWorkItem @ 0x140777FC8 (RtlpCtQueueWorkItem.c)
 *     SepInformFileSystemsOfDeletedLogon @ 0x1407843B0 (SepInformFileSystemsOfDeletedLogon.c)
 *     VmPrefetchVirtualAddresses @ 0x14078F308 (VmPrefetchVirtualAddresses.c)
 *     WdipSemStartTimeoutCheck @ 0x140793808 (WdipSemStartTimeoutCheck.c)
 *     PeriodicCaptureStateTimerCallback @ 0x14079E5F0 (PeriodicCaptureStateTimerCallback.c)
 *     ExpNodeHotAddProcessorWorker @ 0x1407B0420 (ExpNodeHotAddProcessorWorker.c)
 *     WheaAttemptClearPoison @ 0x1407B7A40 (WheaAttemptClearPoison.c)
 *     WheaAttemptPhysicalPageOffline @ 0x1407B7B20 (WheaAttemptPhysicalPageOffline.c)
 *     CmpDoQueueSystemHiveHysteresis @ 0x1407C2B2C (CmpDoQueueSystemHiveHysteresis.c)
 *     CmpDiskFullWarning @ 0x1407C62B4 (CmpDiskFullWarning.c)
 *     MiUnmapPfns @ 0x1407DA250 (MiUnmapPfns.c)
 *     PfSnPrefetchScenario @ 0x1408285B0 (PfSnPrefetchScenario.c)
 *     PiProcessNewDeviceNodeAsync @ 0x14082CDEC (PiProcessNewDeviceNodeAsync.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x140848B80 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x140849FE0 (CmpDereferenceKeyControlBlock.c)
 *     CmpDeleteKeyObject @ 0x14084B6B0 (CmpDeleteKeyObject.c)
 *     CmpSignalDeferredPosts @ 0x14086CBD0 (CmpSignalDeferredPosts.c)
 *     CmpDoQueueLateUnloadWorker @ 0x14087C588 (CmpDoQueueLateUnloadWorker.c)
 *     CmpClaimGlobalQuota @ 0x14087E52C (CmpClaimGlobalQuota.c)
 *     CmpForceFlushForCoalescing @ 0x14088166C (CmpForceFlushForCoalescing.c)
 *     PiDqObjectManagerHandleObjectEvent @ 0x1408D1CFC (PiDqObjectManagerHandleObjectEvent.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x1408D9260 (PspChangeJobMemoryUsageByProcess.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1408E5D40 (ExpWnfNotifyNameSubscribers.c)
 *     PfSnEndProcessTrace @ 0x14091D474 (PfSnEndProcessTrace.c)
 *     PiDrvDbLoadNode @ 0x140931A50 (PiDrvDbLoadNode.c)
 *     PnpInsertEventInQueue @ 0x14096A57C (PnpInsertEventInQueue.c)
 *     PiUEventNotifyUserMode @ 0x14096D4D4 (PiUEventNotifyUserMode.c)
 *     WmipQueueRegWork @ 0x1409B85D0 (WmipQueueRegWork.c)
 *     WmipQueueLegacyEtwWork @ 0x1409B8CDC (WmipQueueLegacyEtwWork.c)
 *     PfSnPrefetchSections @ 0x1409C8054 (PfSnPrefetchSections.c)
 *     PfSnPrefetchSectionsCleanup @ 0x1409C8410 (PfSnPrefetchSectionsCleanup.c)
 *     PspRundownProcess @ 0x1409F25F8 (PspRundownProcess.c)
 *     ExpWnfStartKernelDispatcher @ 0x1409F4F8C (ExpWnfStartKernelDispatcher.c)
 *     CmpCanGrowHive @ 0x1409F8148 (CmpCanGrowHive.c)
 *     ExpWorkQueueManagerThread @ 0x140A17020 (ExpWorkQueueManagerThread.c)
 *     PopDiagTraceControlCallback @ 0x140A32540 (PopDiagTraceControlCallback.c)
 *     PopEsWorkItemSchedule @ 0x140A36FBC (PopEsWorkItemSchedule.c)
 *     PopPowerAggregatorScheduleWorker @ 0x140A3D5E8 (PopPowerAggregatorScheduleWorker.c)
 *     PsSetProcessWin32Process @ 0x140A48280 (PsSetProcessWin32Process.c)
 *     PspScheduleEnforcementWorker @ 0x140A48554 (PspScheduleEnforcementWorker.c)
 *     NtNotifyChangeSession @ 0x140A64890 (NtNotifyChangeSession.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x140A65454 (PiUEventQueueBroadcastEventEntry.c)
 *     EtwpCrimsonProvEnableCallback @ 0x140A664B0 (EtwpCrimsonProvEnableCallback.c)
 *     PoFxSetTargetDripsDevicePowerState @ 0x140A6F990 (PoFxSetTargetDripsDevicePowerState.c)
 *     WmipLegacyEtwCallback @ 0x140A7A580 (WmipLegacyEtwCallback.c)
 *     PnpChainDereferenceComplete @ 0x140A82AFC (PnpChainDereferenceComplete.c)
 *     SepScheduleImageVerificationCallbacks @ 0x140A887D0 (SepScheduleImageVerificationCallbacks.c)
 *     PerfDiagpRequestState @ 0x140A8A8AC (PerfDiagpRequestState.c)
 *     PiDrvDbUnloadNodeWorkerCallback @ 0x140A92360 (PiDrvDbUnloadNodeWorkerCallback.c)
 *     IopSendMessageToTrackService @ 0x140AA324C (IopSendMessageToTrackService.c)
 *     IopUnloadDriver @ 0x140AA3F28 (IopUnloadDriver.c)
 *     PnprInitiateReplaceOperation @ 0x140B43BF4 (PnprInitiateReplaceOperation.c)
 *     MiZeroAllPageFiles @ 0x140B5223C (MiZeroAllPageFiles.c)
 *     MmDuplicateMemory @ 0x140B52868 (MmDuplicateMemory.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B569AC (PopTransitionSystemPowerStateEx.c)
 *     KdpTimeSlipDpcRoutine @ 0x140B68610 (KdpTimeSlipDpcRoutine.c)
 *     IovpUnloadDriver @ 0x140B72AF8 (IovpUnloadDriver.c)
 *     VfIrpLogRecordEvent @ 0x140B8B6A4 (VfIrpLogRecordEvent.c)
 *     LogFwReport @ 0x140BA43FC (LogFwReport.c)
 *     sub_140BC50B0 @ 0x140BC50B0 (sub_140BC50B0.c)
 *     sub_140BCE96C @ 0x140BCE96C (sub_140BCE96C.c)
 *     HalpAcpiDetectPiix4 @ 0x140BFE300 (HalpAcpiDetectPiix4.c)
 *     HalpAcpiPopulateTableCache @ 0x140BFE3A8 (HalpAcpiPopulateTableCache.c)
 *     FsRtlInitializeSmssEvent @ 0x140C07E2C (FsRtlInitializeSmssEvent.c)
 *     IoInitSystemPreDrivers @ 0x140C0996C (IoInitSystemPreDrivers.c)
 *     WmipInitializeRegistration @ 0x140C2B580 (WmipInitializeRegistration.c)
 *     MiInitSystem @ 0x140C3C930 (MiInitSystem.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KeIsThreadRunning @ 0x14028123C (KeIsThreadRunning.c)
 *     KiAcquireKobjectLockSafe @ 0x140287200 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x140287260 (KiExitDispatcher.c)
 *     KiWakePriQueueWaiter @ 0x1402E6BE0 (KiWakePriQueueWaiter.c)
 *     EtwTracePriQEnqueueWork @ 0x1404C9884 (EtwTracePriQEnqueueWork.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     EtwTracePriQEnqueueFailed @ 0x140641CF4 (EtwTracePriQEnqueueFailed.c)
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
  bool IsThreadRunning; // al
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
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
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
                  KiRaiseIrqlProcessIrqlFlags(v15);
                CurrentPrcb = KeGetCurrentPrcb();
                CurrentThread = CurrentPrcb->CurrentThread;
                if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
                {
                  IsThreadRunning = KeIsThreadRunning((__int64)CurrentPrcb->CurrentThread);
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
                KiExitDispatcher(CurrentPrcb, 0LL, 1u, 0, v32);
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
      v11 = *(_DWORD *)(qword_140E2D890 + 4LL * (v10 * (unsigned __int16)KeNumberNodes + v7));
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  if ( !v5 )
    KeBugCheckEx(0xE4u, 5uLL, (ULONG_PTR)WorkItem, v3, 0xFFFFFFFFFFFFFFFFuLL);
}
