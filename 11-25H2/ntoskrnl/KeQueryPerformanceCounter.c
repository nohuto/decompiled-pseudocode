/*
 * XREFs of KeQueryPerformanceCounter @ 0x14031B970
 * Callers:
 *     MiBackgroundZeroLocalPages @ 0x14020F1F0 (MiBackgroundZeroLocalPages.c)
 *     KiExecuteAllDpcs @ 0x140254370 (KiExecuteAllDpcs.c)
 *     CcFetchDataForRead @ 0x14025BCE0 (CcFetchDataForRead.c)
 *     PpmPerfApplyDomainState @ 0x140264BC0 (PpmPerfApplyDomainState.c)
 *     MiFlushCacheForAttributeChange @ 0x14026F3B4 (MiFlushCacheForAttributeChange.c)
 *     KiUpdateTime @ 0x140272C80 (KiUpdateTime.c)
 *     KiUpdateTimeAssist @ 0x140275E04 (KiUpdateTimeAssist.c)
 *     KiSetClockTickRate @ 0x140276FBC (KiSetClockTickRate.c)
 *     KeUpdateTotalCyclesCurrentThread @ 0x14028E760 (KeUpdateTotalCyclesCurrentThread.c)
 *     KiEndInterruptCycleAccumulation @ 0x14028EFB0 (KiEndInterruptCycleAccumulation.c)
 *     HalpTimerRestorePerformanceCounter @ 0x14028FE40 (HalpTimerRestorePerformanceCounter.c)
 *     HalpTimerDpcRoutine @ 0x14028FF50 (HalpTimerDpcRoutine.c)
 *     CcFlushCachePreProcess @ 0x1402D9F6C (CcFlushCachePreProcess.c)
 *     CcFlushCachePriv @ 0x1402DA4E0 (CcFlushCachePriv.c)
 *     KiProcessExpiredTimerList @ 0x1402EE890 (KiProcessExpiredTimerList.c)
 *     KiTimerExpiration @ 0x1402EF3C0 (KiTimerExpiration.c)
 *     KeInsertSchedulingGroup @ 0x1402F5D80 (KeInsertSchedulingGroup.c)
 *     ?KiUpdateCpuTargetByRate@@YAXPEAU_KSCHEDULING_GROUP@@E@Z @ 0x1402F61B0 (-KiUpdateCpuTargetByRate@@YAXPEAU_KSCHEDULING_GROUP@@E@Z.c)
 *     ?KiUpdateCpuTargetByWeight@@YAXPEAU_KSCHEDULING_GROUP@@E@Z @ 0x1402F6B24 (-KiUpdateCpuTargetByWeight@@YAXPEAU_KSCHEDULING_GROUP@@E@Z.c)
 *     EtwpReserveTraceBuffer @ 0x14030C840 (EtwpReserveTraceBuffer.c)
 *     KiReduceByEffectiveIdleSmtSet @ 0x140318A40 (KiReduceByEffectiveIdleSmtSet.c)
 *     KiRetireDpcList @ 0x1403192F0 (KiRetireDpcList.c)
 *     EtwGetKernelTraceTimestampSilo @ 0x14031A990 (EtwGetKernelTraceTimestampSilo.c)
 *     RtlGetSystemTimePrecise @ 0x14031AAC0 (RtlGetSystemTimePrecise.c)
 *     KeQuerySystemTimePrecise @ 0x14031ABA0 (KeQuerySystemTimePrecise.c)
 *     KiStartThreadCycleAccumulation @ 0x14031AC90 (KiStartThreadCycleAccumulation.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x14031AFA0 (KiUpdateTotalCyclesCurrentThread.c)
 *     EtwpGetLoggerTimeStamp @ 0x14031B820 (EtwpGetLoggerTimeStamp.c)
 *     PpmSnapPerformanceAccumulation @ 0x14031BF40 (PpmSnapPerformanceAccumulation.c)
 *     EtwGetKernelTraceTimestamp @ 0x14031CDD0 (EtwGetKernelTraceTimestamp.c)
 *     KiSwapThread @ 0x14031CEE0 (KiSwapThread.c)
 *     HvcallFastExtended @ 0x14032C840 (HvcallFastExtended.c)
 *     PpmParkSnapNodeStatistics @ 0x140348F24 (PpmParkSnapNodeStatistics.c)
 *     PpmIdleSnapConcurrency @ 0x140349840 (PpmIdleSnapConcurrency.c)
 *     PopDeepSleepResiliencyPhaseAccountingUpdate @ 0x140354FFC (PopDeepSleepResiliencyPhaseAccountingUpdate.c)
 *     PopDeepSleepResiliencyPhaseAccountingBegin @ 0x140355308 (PopDeepSleepResiliencyPhaseAccountingBegin.c)
 *     PopDeepSleepResiliencyPhaseAccountingEnd @ 0x1403553B8 (PopDeepSleepResiliencyPhaseAccountingEnd.c)
 *     PopFxUpdateDeviceIRPhaseAccounting @ 0x140355A34 (PopFxUpdateDeviceIRPhaseAccounting.c)
 *     CcAsyncCopyRead @ 0x1403AAC00 (CcAsyncCopyRead.c)
 *     CcWriteBehindAsync @ 0x1403AB04C (CcWriteBehindAsync.c)
 *     CcWriteBehindInternal @ 0x1403AC840 (CcWriteBehindInternal.c)
 *     ?KiUpdateProcessConcurrencyCounts@@YAXXZ @ 0x1403AE380 (-KiUpdateProcessConcurrencyCounts@@YAXXZ.c)
 *     PopGetIdleTimesCallback @ 0x1403B2950 (PopGetIdleTimesCallback.c)
 *     MiScheduleZeroPageThreads @ 0x1403B582C (MiScheduleZeroPageThreads.c)
 *     KeQueryTotalCycleTimeThread @ 0x1403E5570 (KeQueryTotalCycleTimeThread.c)
 *     PpmResetIdlePolicy @ 0x1403E7B88 (PpmResetIdlePolicy.c)
 *     PpmPerfApplyProcessorState @ 0x1403E8944 (PpmPerfApplyProcessorState.c)
 *     PoSetProcessorQos @ 0x1403E8C70 (PoSetProcessorQos.c)
 *     PpmInstallFeedbackCounters @ 0x1403E9C74 (PpmInstallFeedbackCounters.c)
 *     PpmResetPerformanceAccumulation @ 0x1403ECBD0 (PpmResetPerformanceAccumulation.c)
 *     KiIpiProcessRequests @ 0x1403F6650 (KiIpiProcessRequests.c)
 *     KiIpiGenericCallTarget @ 0x1403F6BF0 (KiIpiGenericCallTarget.c)
 *     MiAllocateContiguousMemory @ 0x140414D9C (MiAllocateContiguousMemory.c)
 *     MiAllocatePagesForMdl @ 0x1404157CC (MiAllocatePagesForMdl.c)
 *     EtwpGetDurationSince @ 0x140416E44 (EtwpGetDurationSince.c)
 *     EtwpFileModeCompress @ 0x140426E94 (EtwpFileModeCompress.c)
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x140428138 (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 *     HalSetRealTimeClock @ 0x14042D240 (HalSetRealTimeClock.c)
 *     HalpSetVirtualRtc @ 0x14042DE60 (HalpSetVirtualRtc.c)
 *     PopWriteBsdPoInfo @ 0x140431A88 (PopWriteBsdPoInfo.c)
 *     ?SmAsyncReadQueueWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140434BF0 (-SmAsyncReadQueueWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiReassessZeroThreads @ 0x140436884 (MiReassessZeroThreads.c)
 *     HalpScanForProfilingCorruption @ 0x14043FBC8 (HalpScanForProfilingCorruption.c)
 *     PpmQueryTime @ 0x14044EE8C (PpmQueryTime.c)
 *     MiIssueSegmentDereferenceWork @ 0x140458FA0 (MiIssueSegmentDereferenceWork.c)
 *     MiSaveUnusedSegmentCalibration @ 0x1404594CC (MiSaveUnusedSegmentCalibration.c)
 *     ?StDmInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@0@Z @ 0x1404606BC (-StDmInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@0@Z.c)
 *     StLcInitialize @ 0x140460EC8 (StLcInitialize.c)
 *     KiLogClockIncrementUpdate @ 0x140464858 (KiLogClockIncrementUpdate.c)
 *     PpmIdleRemoveConcurrency @ 0x140479580 (PpmIdleRemoveConcurrency.c)
 *     PpmIdleInstallConcurrency @ 0x140479600 (PpmIdleInstallConcurrency.c)
 *     HalpTimerCaptureCurrentAuxiliaryQpcPair @ 0x140482044 (HalpTimerCaptureCurrentAuxiliaryQpcPair.c)
 *     KeQuerySchedulingGroupHistory @ 0x140482A3C (KeQuerySchedulingGroupHistory.c)
 *     PpmIdleSnapConcurrencyIdleTime @ 0x140493574 (PpmIdleSnapConcurrencyIdleTime.c)
 *     StEtaStart @ 0x1404961E0 (StEtaStart.c)
 *     RtlGetMultiTimePrecise @ 0x1404975D0 (RtlGetMultiTimePrecise.c)
 *     IopLiveDumpGetMillisecondCounter @ 0x14049B334 (IopLiveDumpGetMillisecondCounter.c)
 *     CcCopyWriteEx @ 0x1404A2430 (CcCopyWriteEx.c)
 *     KiUpdateSystemTime @ 0x1404A6F80 (KiUpdateSystemTime.c)
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1404B0744 (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     BgpFwQueryPerformanceCounter @ 0x1404B6CE4 (BgpFwQueryPerformanceCounter.c)
 *     PpmPerfSetProcessorIdle @ 0x1404C693C (PpmPerfSetProcessorIdle.c)
 *     KeFreezeExecution @ 0x1404D6470 (KeFreezeExecution.c)
 *     HalpCmciLoadThresholdConfiguration @ 0x1404D6FCC (HalpCmciLoadThresholdConfiguration.c)
 *     IoCaptureLiveDump @ 0x1404D7188 (IoCaptureLiveDump.c)
 *     KeRebaselineInterruptTime @ 0x1404D9E9C (KeRebaselineInterruptTime.c)
 *     KeRebaselineSystemTime @ 0x1404D9F24 (KeRebaselineSystemTime.c)
 *     CcCopyReadEx @ 0x1404DC880 (CcCopyReadEx.c)
 *     CcMapAndCopyInToCache @ 0x1404DDB50 (CcMapAndCopyInToCache.c)
 *     CcCompleteAsyncRead @ 0x1404E018C (CcCompleteAsyncRead.c)
 *     PpmIdleExecuteTransition @ 0x1404E92D8 (PpmIdleExecuteTransition.c)
 *     KeThawExecution @ 0x1404F0C00 (KeThawExecution.c)
 *     KiEndDebugAccumulation @ 0x1404F10F0 (KiEndDebugAccumulation.c)
 *     KiVpBackingThreadYieldExecution @ 0x1404F4D1C (KiVpBackingThreadYieldExecution.c)
 *     HalpTimerCaptureCloestAuxiliaryQpcPair @ 0x1405380A8 (HalpTimerCaptureCloestAuxiliaryQpcPair.c)
 *     HalpTimerInitSystem @ 0x1405387F0 (HalpTimerInitSystem.c)
 *     HalpTimerSchedulePeriodicQueries @ 0x140538F70 (HalpTimerSchedulePeriodicQueries.c)
 *     HalWheaUpdateCmciPolicy @ 0x14053BCE0 (HalWheaUpdateCmciPolicy.c)
 *     HalpCmciHandler @ 0x140540C78 (HalpCmciHandler.c)
 *     HalpCollectProfileCorruptionStatus @ 0x140542BC4 (HalpCollectProfileCorruptionStatus.c)
 *     HalpTimerDetermineValidTimerPairReadLatency @ 0x1405450E0 (HalpTimerDetermineValidTimerPairReadLatency.c)
 *     HalpTimerReadTimerPairWithLatencyLimit @ 0x140545F08 (HalpTimerReadTimerPairWithLatencyLimit.c)
 *     HalpTscFallback @ 0x140546C20 (HalpTscFallback.c)
 *     HalpQueryVirtualRtc @ 0x1405484B0 (HalpQueryVirtualRtc.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x1405498F0 (HalpTimerMeasureProcessorsWorker.c)
 *     EmonAllocateCounterInternal @ 0x140558210 (EmonAllocateCounterInternal.c)
 *     EmonOverflowHandlerInternalV1Enhanced @ 0x14055990C (EmonOverflowHandlerInternalV1Enhanced.c)
 *     EmonOverflowHandlerInternalV1Original @ 0x140559D58 (EmonOverflowHandlerInternalV1Original.c)
 *     EmonOverflowHandlerInternalV2Enhanced @ 0x14055A190 (EmonOverflowHandlerInternalV2Enhanced.c)
 *     EmonOverflowHandlerInternalV2Original @ 0x14055A63C (EmonOverflowHandlerInternalV2Original.c)
 *     HalpTimerAlwaysOnClockInterrupt @ 0x14055C2C0 (HalpTimerAlwaysOnClockInterrupt.c)
 *     Amd64AllocateCounter @ 0x1405672AC (Amd64AllocateCounter.c)
 *     Amd64OverflowHandlerInternal @ 0x140568CB0 (Amd64OverflowHandlerInternal.c)
 *     XmRdtscOp @ 0x140573DE0 (XmRdtscOp.c)
 *     KiRebaselineProcessorStartCycles @ 0x1405AD70C (KiRebaselineProcessorStartCycles.c)
 *     KiSetupTimeIncrement @ 0x1405AD864 (KiSetupTimeIncrement.c)
 *     KiComputeDispatchInterruptCostDpcRoutine @ 0x1405B2890 (KiComputeDispatchInterruptCostDpcRoutine.c)
 *     KeSwitchFrozenProcessor @ 0x1405BDAC0 (KeSwitchFrozenProcessor.c)
 *     KiCheckStall @ 0x1405BDB90 (KiCheckStall.c)
 *     KiFreezeTargetExecution @ 0x1405BDC20 (KiFreezeTargetExecution.c)
 *     PpmIdleTransitionStall @ 0x1405CA5FC (PpmIdleTransitionStall.c)
 *     PpmTraceExitLatency @ 0x1405CAD34 (PpmTraceExitLatency.c)
 *     PdcPoCurrentPdcPhase @ 0x1405D3DC0 (PdcPoCurrentPdcPhase.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x1405FE19C (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     ?StDeviceIoIssue@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_PF_QUEUE@@@Z @ 0x1405FEC80 (-StDeviceIoIssue@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_PF_QUEUE@@@Z.c)
 *     StEtaIoComplete @ 0x140600EA4 (StEtaIoComplete.c)
 *     StEtaIoStart @ 0x140600F00 (StEtaIoStart.c)
 *     StEtaIoTimeout @ 0x140600FFC (StEtaIoTimeout.c)
 *     StLcBucketsCopy @ 0x1406010D4 (StLcBucketsCopy.c)
 *     CarInitLogging @ 0x14060A0E0 (CarInitLogging.c)
 *     WmiGetClock @ 0x1406435F0 (WmiGetClock.c)
 *     EtwpCompressPendingBuffers @ 0x14064501C (EtwpCompressPendingBuffers.c)
 *     MiComputeCacheAttributeSpeeds @ 0x140687D78 (MiComputeCacheAttributeSpeeds.c)
 *     MiStartDpcZeroingRound @ 0x1406885DC (MiStartDpcZeroingRound.c)
 *     MiZeroPageCalibrateLastDpcProcessorDone @ 0x140689008 (MiZeroPageCalibrateLastDpcProcessorDone.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x14068EE44 (BgpFwDisplayBugCheckProgressUpdate.c)
 *     BgpFwDisplayBugCheckScreen @ 0x14068F010 (BgpFwDisplayBugCheckScreen.c)
 *     BgpFwDisplayBugCheckScreenModernized @ 0x14068F360 (BgpFwDisplayBugCheckScreenModernized.c)
 *     IpmiLibpGetTimeout @ 0x140694C3C (IpmiLibpGetTimeout.c)
 *     IpmiLibpTimeAfter @ 0x140695354 (IpmiLibpTimeAfter.c)
 *     Phase1Initialization @ 0x1406F0AF0 (Phase1Initialization.c)
 *     HalpNotifyActorIfPmuAvailable @ 0x1406F20B0 (HalpNotifyActorIfPmuAvailable.c)
 *     HalpPmuArbiterPeriodicWorkItem @ 0x1406F23C0 (HalpPmuArbiterPeriodicWorkItem.c)
 *     HalpPmuArbiterUpdateActiveActorTime @ 0x1406F25E4 (HalpPmuArbiterUpdateActiveActorTime.c)
 *     FsRtlpOplockPerfBucketize @ 0x1406FFC14 (FsRtlpOplockPerfBucketize.c)
 *     FsRtlpOplockPerfInitializeLatencyInfo @ 0x1406FFD54 (FsRtlpOplockPerfInitializeLatencyInfo.c)
 *     FsRtlpOplockTryStartBreakAckTimeout @ 0x140700750 (FsRtlpOplockTryStartBreakAckTimeout.c)
 *     PpmRegisterPerfStates @ 0x140743E04 (PpmRegisterPerfStates.c)
 *     PopExecutePowerAction @ 0x140747484 (PopExecutePowerAction.c)
 *     PopResumeApps @ 0x1407479CC (PopResumeApps.c)
 *     RtlpCapChkTelemetryRunOnce @ 0x14077DB40 (RtlpCapChkTelemetryRunOnce.c)
 *     EtwpInitializeSiloState @ 0x140798D8C (EtwpInitializeSiloState.c)
 *     CmpRecordShutdownStopTime @ 0x1407C5DF0 (CmpRecordShutdownStopTime.c)
 *     MiNodeZeroConductor @ 0x1407EF900 (MiNodeZeroConductor.c)
 *     PspNotifyThreadCreation @ 0x14090B188 (PspNotifyThreadCreation.c)
 *     NtPowerInformation @ 0x14096E740 (NtPowerInformation.c)
 *     EtwpAddLogHeader @ 0x140992044 (EtwpAddLogHeader.c)
 *     NtQueryInformationProcess @ 0x1409D2880 (NtQueryInformationProcess.c)
 *     NtQueryPerformanceCounter @ 0x1409F0380 (NtQueryPerformanceCounter.c)
 *     RtlCapabilityCheck @ 0x140A09AE0 (RtlCapabilityCheck.c)
 *     PopResumeServices @ 0x140A2C744 (PopResumeServices.c)
 *     ExpAllocateUuids @ 0x140A7CB64 (ExpAllocateUuids.c)
 *     PopIssueActionRequest @ 0x140A83104 (PopIssueActionRequest.c)
 *     HalpDpReplaceControl @ 0x140B3FC60 (HalpDpReplaceControl.c)
 *     PnprGetMillisecondCounter @ 0x140B43B94 (PnprGetMillisecondCounter.c)
 *     KiCompleteKernelInit @ 0x140B45C50 (KiCompleteKernelInit.c)
 *     PopDecompressHiberBlocks @ 0x140B4C904 (PopDecompressHiberBlocks.c)
 *     PopWriteImageHeader @ 0x140B4EC1C (PopWriteImageHeader.c)
 *     PoBroadcastSystemState @ 0x140B54B5C (PoBroadcastSystemState.c)
 *     PopTransitionToSleep @ 0x140B55320 (PopTransitionToSleep.c)
 *     PopInvokeSystemStateHandler @ 0x140B5541C (PopInvokeSystemStateHandler.c)
 *     PopHandleNextState @ 0x140B55D00 (PopHandleNextState.c)
 *     PopSstDiagInitializeResumeTimer @ 0x140B560C8 (PopSstDiagInitializeResumeTimer.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B569AC (PopTransitionSystemPowerStateEx.c)
 *     PopHiberCheckForDebugBreak @ 0x140B593C0 (PopHiberCheckForDebugBreak.c)
 *     KiCalibrateTimeAdjustment @ 0x140B5BAB0 (KiCalibrateTimeAdjustment.c)
 *     PopSstDiagQueryResumeTimestamp @ 0x140B5D838 (PopSstDiagQueryResumeTimestamp.c)
 *     HalpCmciInit @ 0x140B5D858 (HalpCmciInit.c)
 *     PopDiagComputeEarlyHiberStats @ 0x140B5ECB0 (PopDiagComputeEarlyHiberStats.c)
 *     KdInitSystem @ 0x140B65E30 (KdInitSystem.c)
 *     KdpSendWaitContinue @ 0x140B6A32C (KdpSendWaitContinue.c)
 *     VfFillAllocatedMemory @ 0x140B7BD24 (VfFillAllocatedMemory.c)
 *     MmVerifierTrimMemory @ 0x140B94818 (MmVerifierTrimMemory.c)
 *     CcInitializeTelemetry @ 0x140BCD6B0 (CcInitializeTelemetry.c)
 *     InitBootProcessor @ 0x140BF9C88 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140BFB048 (Phase1InitializationDiscard.c)
 *     KiComputeDispatchInterruptCost @ 0x140C16508 (KiComputeDispatchInterruptCost.c)
 *     ViInitSystemPhase0 @ 0x140C2A404 (ViInitSystemPhase0.c)
 *     EtwpFixBootSystemTime @ 0x140C2BD48 (EtwpFixBootSystemTime.c)
 *     EtwpInitializeBootTimeStamps @ 0x140C2C458 (EtwpInitializeBootTimeStamps.c)
 *     MiInitSystem @ 0x140C3C930 (MiInitSystem.c)
 *     MiInitNucleus @ 0x140C3E068 (MiInitNucleus.c)
 *     MiInitializePhysicalMemoryBlocks @ 0x140C3E904 (MiInitializePhysicalMemoryBlocks.c)
 *     MiInitializeCacheFlushing @ 0x140C48FA8 (MiInitializeCacheFlushing.c)
 *     MiReloadBootLoadedDrivers @ 0x140C4A6A8 (MiReloadBootLoadedDrivers.c)
 *     KeInitializeClock @ 0x140C4ECE8 (KeInitializeClock.c)
 *     PoInitSystem @ 0x140C50674 (PoInitSystem.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14027A960 (HalpTimerGetInternalData.c)
 *     HalpTimerScaleCounter @ 0x14028EF68 (HalpTimerScaleCounter.c)
 *     HvlpGetRegister64 @ 0x14028FB00 (HvlpGetRegister64.c)
 *     HalpHpetQueryCounter @ 0x140350770 (HalpHpetQueryCounter.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

LARGE_INTEGER __stdcall KeQueryPerformanceCounter(PLARGE_INTEGER PerformanceFrequency)
{
  __int64 v2; // rsi
  unsigned __int64 v3; // rbx
  signed __int64 v4; // rdx
  unsigned __int64 v5; // rax
  int v6; // r8d
  __int64 v7; // rdx
  signed __int64 v8; // rdx
  __int64 v9; // r14
  LARGE_INTEGER result; // rax
  __int64 v11; // rcx
  __int64 (__fastcall *v12)(__int64, __int64); // rax
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 InternalData; // rax
  __int64 (__fastcall *v16)(_QWORD); // rdx
  __int64 Counter; // rax
  unsigned __int64 v18; // r10
  signed __int64 v19; // rax
  int v20; // r9d
  unsigned __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rcx
  unsigned __int64 v25; // r8
  __int64 v26; // rdx
  int v27; // ecx
  unsigned __int64 v28; // rax
  int v29; // r9d
  signed __int64 v30; // rdx
  __int64 v31; // r14
  __int64 v32; // r8
  LONGLONG v33; // r8
  signed __int64 v34; // rcx
  __int64 v35; // rdi
  __int64 v36; // rax
  __int64 (__fastcall *v37)(_QWORD); // rdx
  __int64 v38; // rax
  unsigned __int64 v39; // r10
  signed __int64 v40; // rax
  int v41; // r9d
  unsigned __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // rcx
  unsigned __int64 v46; // r8
  __int64 v47; // rcx
  signed __int32 v48[8]; // [rsp+0h] [rbp-48h] BYREF
  signed __int64 v49; // [rsp+58h] [rbp+10h] BYREF
  signed __int64 v50; // [rsp+60h] [rbp+18h] BYREF

  v2 = HalpPerformanceCounter;
  if ( *(_DWORD *)(HalpPerformanceCounter + 228) != 5 )
  {
    v3 = *(_QWORD *)(HalpPerformanceCounter + 192);
    if ( *(_DWORD *)(HalpPerformanceCounter + 220) != 64 )
    {
      do
      {
        v9 = *(_QWORD *)(v2 + 208);
        do
        {
          v14 = *(_QWORD *)(v2 + 200);
          InternalData = HalpTimerGetInternalData(v2);
          v16 = *(__int64 (__fastcall **)(_QWORD))(v2 + 112);
          if ( v16 == HalpHpetQueryCounter )
            Counter = HalpHpetQueryCounter(InternalData);
          else
            Counter = guard_dispatch_icall_no_overrides(InternalData, v16);
          v18 = Counter;
          _InterlockedOr(v48, 0);
          v19 = *(_QWORD *)(v2 + 200);
        }
        while ( v14 != v19 );
      }
      while ( v9 != *(_QWORD *)(v2 + 208) );
      v20 = *(_DWORD *)(v2 + 220);
      v21 = v14 ^ v18;
      if ( _bittest64((const __int64 *)&v21, (unsigned __int8)(v20 - 1)) )
      {
        if ( v20 == 64 )
          v23 = -1LL;
        else
          v23 = (1LL << v20) - 1;
        v24 = 0LL;
        if ( v20 != 64 )
          v24 = 1LL << v20;
        v25 = v14 & v23;
        v8 = v18 | v14 ^ v25;
        if ( v18 < v25 )
          v8 += v24;
        _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 200), v8, v19);
      }
      else
      {
        if ( v20 == 64 )
          v22 = -1LL;
        else
          v22 = (1LL << v20) - 1;
        v8 = v18 | v14 & ~v22;
      }
      goto LABEL_15;
    }
    if ( (*(_DWORD *)(HalpPerformanceCounter + 224) & 0x10000) != 0 )
      v4 = *(_QWORD *)(HalpPerformanceCounter + 72) + *(_DWORD *)(HalpPerformanceCounter + 80) * KeGetPcr()->Prcb.Number;
    else
      v4 = *(_QWORD *)(HalpPerformanceCounter + 72);
    if ( *(__int64 (__fastcall **)(__int64, __int64))(HalpPerformanceCounter + 112) == HalpHvCounterQueryCounter )
    {
      v5 = HalpHvTimerApi;
      if ( !HalpHvTimerApi )
      {
        v8 = __readmsr(0x40000020u);
LABEL_14:
        v9 = *(_QWORD *)(v2 + 208);
LABEL_15:
        result.QuadPart = v9 + v8;
        goto LABEL_16;
      }
      if ( (__int64 (__fastcall *)())HalpHvTimerApi == HvlGetReferenceTimeUsingTscPage )
      {
        v50 = 0LL;
        while ( 1 )
        {
          v6 = *(_DWORD *)HvlpReferenceTscPage;
          if ( !*(_DWORD *)HvlpReferenceTscPage )
            break;
          if ( MEMORY[0xFFFFF78000000294] )
          {
            __asm { rdtscp }
          }
          else
          {
            if ( KeGetCurrentPrcb()->CpuVendor == 2 )
            {
              _mm_lfence();
            }
            else if ( KeGetCurrentPrcb()->CpuVendor == 1 )
            {
              _mm_mfence();
            }
            v5 = __rdtsc();
            LODWORD(v4) = HIDWORD(v5);
            v5 = (unsigned int)v5;
            v4 = (unsigned int)v4;
          }
          v7 = ((v5 | (v4 << 32)) * (unsigned __int128)*((unsigned __int64 *)HvlpReferenceTscPage + 1)) >> 64;
          v5 = (unsigned __int64)HvlpReferenceTscPage;
          v4 = *((_QWORD *)HvlpReferenceTscPage + 2) + v7;
          v50 = v4;
          if ( *(_DWORD *)HvlpReferenceTscPage == v6 )
            goto LABEL_13;
        }
        HvlpGetRegister64(589828, &v50);
LABEL_13:
        v8 = v50;
        goto LABEL_14;
      }
      v34 = 0LL;
    }
    else
    {
      v34 = v4;
    }
    v8 = guard_dispatch_icall_no_overrides(v34, v4);
    goto LABEL_14;
  }
  v3 = 10000000LL;
  if ( !HalpTimerReferencePage )
  {
    if ( *(_DWORD *)(HalpPerformanceCounter + 220) != 64 )
    {
      do
      {
        v31 = *(_QWORD *)(v2 + 208);
        do
        {
          v35 = *(_QWORD *)(v2 + 200);
          v36 = HalpTimerGetInternalData(v2);
          v37 = *(__int64 (__fastcall **)(_QWORD))(v2 + 112);
          if ( v37 == HalpHpetQueryCounter )
            v38 = HalpHpetQueryCounter(v36);
          else
            v38 = guard_dispatch_icall_no_overrides(v36, v37);
          v39 = v38;
          _InterlockedOr(v48, 0);
          v40 = *(_QWORD *)(v2 + 200);
        }
        while ( v35 != v40 );
      }
      while ( v31 != *(_QWORD *)(v2 + 208) );
      v41 = *(_DWORD *)(v2 + 220);
      v42 = v35 ^ v39;
      if ( _bittest64((const __int64 *)&v42, (unsigned __int8)(v41 - 1)) )
      {
        if ( v41 == 64 )
          v44 = -1LL;
        else
          v44 = (1LL << v41) - 1;
        v45 = 0LL;
        if ( v41 != 64 )
          v45 = 1LL << v41;
        v46 = v35 & v44;
        v30 = v39 | v35 ^ v46;
        if ( v39 < v46 )
          v30 += v45;
        _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 200), v30, v40);
      }
      else
      {
        if ( v41 == 64 )
          v43 = -1LL;
        else
          v43 = (1LL << v41) - 1;
        v30 = v39 | v35 & ~v43;
      }
      goto LABEL_56;
    }
    v26 = HalpTimerGetInternalData(HalpPerformanceCounter);
    if ( *(__int64 (__fastcall **)(__int64, __int64))(v2 + 112) == HalpHvCounterQueryCounter )
    {
      if ( !HalpHvTimerApi )
      {
        v30 = __readmsr(0x40000020u);
LABEL_55:
        v31 = *(_QWORD *)(v2 + 208);
LABEL_56:
        result.QuadPart = HalpTimerScaleCounter(v31 + v30, *(_QWORD *)(v2 + 192), 10000000LL);
        goto LABEL_16;
      }
      if ( (__int64 (__fastcall *)())HalpHvTimerApi == HvlGetReferenceTimeUsingTscPage )
      {
        v27 = 0;
        v49 = 0LL;
        while ( 1 )
        {
          v28 = (unsigned __int64)HvlpReferenceTscPage;
          v29 = *(_DWORD *)HvlpReferenceTscPage;
          if ( !*(_DWORD *)HvlpReferenceTscPage )
            break;
          if ( MEMORY[0xFFFFF78000000294] )
          {
            __asm { rdtscp }
            LODWORD(v49) = v27;
          }
          else
          {
            if ( KeGetCurrentPrcb()->CpuVendor == 2 )
            {
              _mm_lfence();
            }
            else if ( KeGetCurrentPrcb()->CpuVendor == 1 )
            {
              _mm_mfence();
            }
            v28 = __rdtsc();
            LODWORD(v26) = HIDWORD(v28);
            v28 = (unsigned int)v28;
            v26 = (unsigned int)v26;
          }
          v26 = *((_QWORD *)HvlpReferenceTscPage + 2)
              + (((v28 | (v26 << 32)) * (unsigned __int128)*((unsigned __int64 *)HvlpReferenceTscPage + 1)) >> 64);
          v49 = v26;
          v27 = *(_DWORD *)HvlpReferenceTscPage;
          if ( *(_DWORD *)HvlpReferenceTscPage == v29 )
            goto LABEL_54;
        }
        HvlpGetRegister64(589828, &v49);
LABEL_54:
        v30 = v49;
        goto LABEL_55;
      }
      v47 = 0LL;
    }
    else
    {
      v47 = v26;
    }
    v30 = guard_dispatch_icall_no_overrides(v47, v26);
    goto LABEL_55;
  }
  if ( (*(_DWORD *)(HalpPerformanceCounter + 224) & 0x10000) != 0 )
    v11 = *(_QWORD *)(HalpPerformanceCounter + 72) + *(_DWORD *)(HalpPerformanceCounter + 80) * KeGetPcr()->Prcb.Number;
  else
    v11 = *(_QWORD *)(HalpPerformanceCounter + 72);
  v12 = *(__int64 (__fastcall **)(__int64, __int64))(HalpPerformanceCounter + 112);
  if ( v12 == HalpTscQueryCounterOrdered )
  {
    __asm { rdtscp }
    v13 = (unsigned __int64)v12 | ((_QWORD)HalpTscQueryCounterOrdered << 32);
  }
  else
  {
    v13 = guard_dispatch_icall_no_overrides(v11, HalpTscQueryCounterOrdered);
  }
  result.QuadPart = MEMORY[0xFFFFF780000003B8]
                  + (((unsigned __int64)v13 * (unsigned __int128)*((unsigned __int64 *)HalpTimerReferencePage + 1)) >> 64);
LABEL_16:
  if ( v2 == HalpOriginalPerformanceCounter || !HalpOriginalPerformanceCounter )
  {
    if ( PerformanceFrequency )
      PerformanceFrequency->QuadPart = v3;
  }
  else
  {
    v32 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
    if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
      v32 = 10000000LL;
    result.QuadPart = HalpTimerScaleCounter(result.QuadPart, v3, v32);
    if ( PerformanceFrequency )
      PerformanceFrequency->QuadPart = v33;
  }
  return result;
}
