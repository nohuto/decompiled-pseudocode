/*
 * XREFs of KeQueryPerformanceCounter @ 0x14034FA10
 * Callers:
 *     MiBackgroundZeroLocalPages @ 0x14020A480 (MiBackgroundZeroLocalPages.c)
 *     ?KiUpdateProcessConcurrencyCounts@@YAXXZ @ 0x140210350 (-KiUpdateProcessConcurrencyCounts@@YAXXZ.c)
 *     KiRetireDpcList @ 0x140251EB0 (KiRetireDpcList.c)
 *     KiExecuteAllDpcs @ 0x1402552D0 (KiExecuteAllDpcs.c)
 *     PpmIdleSnapConcurrency @ 0x14027B2A8 (PpmIdleSnapConcurrency.c)
 *     PpmParkSnapNodeStatistics @ 0x14027B69C (PpmParkSnapNodeStatistics.c)
 *     CcFetchDataForRead @ 0x1402820F0 (CcFetchDataForRead.c)
 *     KiUpdateTime @ 0x14029B7C0 (KiUpdateTime.c)
 *     KeCheckAndApplyBamQos @ 0x14029DF30 (KeCheckAndApplyBamQos.c)
 *     PoSetProcessorQos @ 0x14029E1A0 (PoSetProcessorQos.c)
 *     KiUpdateTimeAssist @ 0x14029EBAC (KiUpdateTimeAssist.c)
 *     PpmPerfApplyProcessorState @ 0x14029F124 (PpmPerfApplyProcessorState.c)
 *     KiSetClockTickRate @ 0x1402A07B0 (KiSetClockTickRate.c)
 *     CcWriteBehindInternal @ 0x1402A81F0 (CcWriteBehindInternal.c)
 *     CcWriteBehindAsync @ 0x1402A91A8 (CcWriteBehindAsync.c)
 *     CcAsyncCopyRead @ 0x1402A94F0 (CcAsyncCopyRead.c)
 *     CcFlushCachePreProcess @ 0x1402AC290 (CcFlushCachePreProcess.c)
 *     CcFlushCachePriv @ 0x1402AC810 (CcFlushCachePriv.c)
 *     MiScheduleZeroPageThreads @ 0x1402D36A0 (MiScheduleZeroPageThreads.c)
 *     ?KiUpdateCpuTargetByRate@@YAXPEAU_KSCHEDULING_GROUP@@E@Z @ 0x14030EF28 (-KiUpdateCpuTargetByRate@@YAXPEAU_KSCHEDULING_GROUP@@E@Z.c)
 *     KeInsertSchedulingGroup @ 0x14030F2B8 (KeInsertSchedulingGroup.c)
 *     ?KiUpdateCpuTargetByWeight@@YAXPEAU_KSCHEDULING_GROUP@@E@Z @ 0x140310BD8 (-KiUpdateCpuTargetByWeight@@YAXPEAU_KSCHEDULING_GROUP@@E@Z.c)
 *     EtwpReserveTraceBuffer @ 0x140327DF0 (EtwpReserveTraceBuffer.c)
 *     PpmResetIdlePolicy @ 0x14032CFA8 (PpmResetIdlePolicy.c)
 *     EtwpFileModeCompress @ 0x14032EFC8 (EtwpFileModeCompress.c)
 *     KiProcessExpiredTimerList @ 0x1403358E0 (KiProcessExpiredTimerList.c)
 *     KiTimerExpiration @ 0x140336410 (KiTimerExpiration.c)
 *     KiEndInterruptCycleAccumulation @ 0x14034A8A0 (KiEndInterruptCycleAccumulation.c)
 *     KeUpdateTotalCyclesCurrentThread @ 0x14034AEC0 (KeUpdateTotalCyclesCurrentThread.c)
 *     KiReduceByEffectiveIdleSmtSet @ 0x14034B700 (KiReduceByEffectiveIdleSmtSet.c)
 *     RtlGetSystemTimePrecise @ 0x14034EB80 (RtlGetSystemTimePrecise.c)
 *     KeQuerySystemTimePrecise @ 0x14034EC60 (KeQuerySystemTimePrecise.c)
 *     KiStartThreadCycleAccumulation @ 0x14034ED50 (KiStartThreadCycleAccumulation.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x14034F060 (KiUpdateTotalCyclesCurrentThread.c)
 *     EtwpGetLoggerTimeStamp @ 0x14034F8C0 (EtwpGetLoggerTimeStamp.c)
 *     EtwGetKernelTraceTimestampSilo @ 0x140350000 (EtwGetKernelTraceTimestampSilo.c)
 *     PpmSnapPerformanceAccumulation @ 0x140350130 (PpmSnapPerformanceAccumulation.c)
 *     PopGetIdleTimesCallback @ 0x140352240 (PopGetIdleTimesCallback.c)
 *     MiFlushCacheForAttributeChange @ 0x1403AE6F8 (MiFlushCacheForAttributeChange.c)
 *     HvcallFastExtended @ 0x1403AF3C0 (HvcallFastExtended.c)
 *     HvlpFastFlushAddressSpaceTb @ 0x1403B0AC4 (HvlpFastFlushAddressSpaceTb.c)
 *     PpmPerfApplyDomainState @ 0x1403B2CE0 (PpmPerfApplyDomainState.c)
 *     PpmIdleExecuteTransition @ 0x1403B4CA0 (PpmIdleExecuteTransition.c)
 *     EtwGetKernelTraceTimestamp @ 0x1403C00A0 (EtwGetKernelTraceTimestamp.c)
 *     MiReassessZeroThreads @ 0x1403C698C (MiReassessZeroThreads.c)
 *     PopFxUpdateDeviceIRPhaseAccounting @ 0x1403CACC0 (PopFxUpdateDeviceIRPhaseAccounting.c)
 *     PopDeepSleepResiliencyPhaseAccountingUpdate @ 0x1403CB59C (PopDeepSleepResiliencyPhaseAccountingUpdate.c)
 *     PopDeepSleepResiliencyPhaseAccountingBegin @ 0x1403CB8A4 (PopDeepSleepResiliencyPhaseAccountingBegin.c)
 *     PopDeepSleepResiliencyPhaseAccountingEnd @ 0x1403CB954 (PopDeepSleepResiliencyPhaseAccountingEnd.c)
 *     HalpTimerDpcRoutine @ 0x1403D66C0 (HalpTimerDpcRoutine.c)
 *     HalpTimerRestorePerformanceCounter @ 0x1403D68C8 (HalpTimerRestorePerformanceCounter.c)
 *     KeQueryTotalCycleTimeThread @ 0x1403EBDD0 (KeQueryTotalCycleTimeThread.c)
 *     MiIssueSegmentDereferenceWork @ 0x1403F7920 (MiIssueSegmentDereferenceWork.c)
 *     MiSaveUnusedSegmentCalibration @ 0x1403F7E48 (MiSaveUnusedSegmentCalibration.c)
 *     KiIpiProcessRequests @ 0x1403FEB60 (KiIpiProcessRequests.c)
 *     KiIpiGenericCallTarget @ 0x1403FF0F0 (KiIpiGenericCallTarget.c)
 *     EtwpGetDurationSince @ 0x1404114E0 (EtwpGetDurationSince.c)
 *     MiAllocateContiguousMemory @ 0x14041182C (MiAllocateContiguousMemory.c)
 *     MiAllocatePagesForMdl @ 0x14041225C (MiAllocatePagesForMdl.c)
 *     HalSetRealTimeClock @ 0x140425310 (HalSetRealTimeClock.c)
 *     HalpSetVirtualRtc @ 0x140425F30 (HalpSetVirtualRtc.c)
 *     PopWriteBsdPoInfo @ 0x140427FF8 (PopWriteBsdPoInfo.c)
 *     ?SmAsyncReadQueueWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140431B50 (-SmAsyncReadQueueWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     PpmInstallFeedbackCounters @ 0x140433E50 (PpmInstallFeedbackCounters.c)
 *     HalpScanForProfilingCorruption @ 0x140441980 (HalpScanForProfilingCorruption.c)
 *     PpmResetPerformanceAccumulation @ 0x140448010 (PpmResetPerformanceAccumulation.c)
 *     PpmQueryTime @ 0x14044D624 (PpmQueryTime.c)
 *     KiLogClockIncrementUpdate @ 0x14045D324 (KiLogClockIncrementUpdate.c)
 *     ?StDmInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@0@Z @ 0x14045F69C (-StDmInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@0@Z.c)
 *     StLcInitialize @ 0x14045FEA8 (StLcInitialize.c)
 *     PpmIdleRemoveConcurrency @ 0x14047A340 (PpmIdleRemoveConcurrency.c)
 *     PpmIdleInstallConcurrency @ 0x14047A3C0 (PpmIdleInstallConcurrency.c)
 *     KeQuerySchedulingGroupHistory @ 0x1404807C4 (KeQuerySchedulingGroupHistory.c)
 *     HalpTimerCaptureCurrentAuxiliaryQpcPair @ 0x140482E74 (HalpTimerCaptureCurrentAuxiliaryQpcPair.c)
 *     StEtaStart @ 0x1404956FC (StEtaStart.c)
 *     PpmIdleSnapConcurrencyIdleTime @ 0x140495E5C (PpmIdleSnapConcurrencyIdleTime.c)
 *     RtlGetMultiTimePrecise @ 0x1404970A0 (RtlGetMultiTimePrecise.c)
 *     IopLiveDumpGetMillisecondCounter @ 0x14049B5E4 (IopLiveDumpGetMillisecondCounter.c)
 *     CcCopyWriteEx @ 0x1404A1E30 (CcCopyWriteEx.c)
 *     KiUpdateSystemTime @ 0x1404A7710 (KiUpdateSystemTime.c)
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1404B1744 (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     BgpFwQueryPerformanceCounter @ 0x1404B67D4 (BgpFwQueryPerformanceCounter.c)
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x1404B9204 (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 *     PpmPerfSetProcessorIdle @ 0x1404C3EC0 (PpmPerfSetProcessorIdle.c)
 *     KiVpBackingThreadYieldExecution @ 0x1404D5000 (KiVpBackingThreadYieldExecution.c)
 *     KeFreezeExecution @ 0x1404D5B60 (KeFreezeExecution.c)
 *     HalpCmciLoadThresholdConfiguration @ 0x1404D66BC (HalpCmciLoadThresholdConfiguration.c)
 *     KeRebaselineInterruptTime @ 0x1404D8E4C (KeRebaselineInterruptTime.c)
 *     KeRebaselineSystemTime @ 0x1404D8ED4 (KeRebaselineSystemTime.c)
 *     CcCopyReadEx @ 0x1404DBF70 (CcCopyReadEx.c)
 *     CcMapAndCopyInToCache @ 0x1404DD240 (CcMapAndCopyInToCache.c)
 *     CcCompleteAsyncRead @ 0x1404DF87C (CcCompleteAsyncRead.c)
 *     IoCaptureLiveDump @ 0x1404E6068 (IoCaptureLiveDump.c)
 *     KeThawExecution @ 0x1404F4AF0 (KeThawExecution.c)
 *     KiEndDebugAccumulation @ 0x1404F4C20 (KiEndDebugAccumulation.c)
 *     HalpTimerCaptureCloestAuxiliaryQpcPair @ 0x14053A858 (HalpTimerCaptureCloestAuxiliaryQpcPair.c)
 *     HalpTimerInitSystem @ 0x14053AFA0 (HalpTimerInitSystem.c)
 *     HalpTimerSchedulePeriodicQueries @ 0x14053B720 (HalpTimerSchedulePeriodicQueries.c)
 *     HalWheaUpdateCmciPolicy @ 0x14053E510 (HalWheaUpdateCmciPolicy.c)
 *     HalpCmciHandler @ 0x1405434A8 (HalpCmciHandler.c)
 *     HalpCollectProfileCorruptionStatus @ 0x1405454B4 (HalpCollectProfileCorruptionStatus.c)
 *     HalpTimerDetermineValidTimerPairReadLatency @ 0x1405479D0 (HalpTimerDetermineValidTimerPairReadLatency.c)
 *     HalpTimerReadTimerPairWithLatencyLimit @ 0x1405487F8 (HalpTimerReadTimerPairWithLatencyLimit.c)
 *     HalpTscFallback @ 0x140549510 (HalpTscFallback.c)
 *     HalpQueryVirtualRtc @ 0x14054ADA0 (HalpQueryVirtualRtc.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x14054C1E0 (HalpTimerMeasureProcessorsWorker.c)
 *     EmonAllocateCounterInternal @ 0x14055AB10 (EmonAllocateCounterInternal.c)
 *     EmonOverflowHandlerInternalV1Enhanced @ 0x14055C20C (EmonOverflowHandlerInternalV1Enhanced.c)
 *     EmonOverflowHandlerInternalV1Original @ 0x14055C658 (EmonOverflowHandlerInternalV1Original.c)
 *     EmonOverflowHandlerInternalV2Enhanced @ 0x14055CA90 (EmonOverflowHandlerInternalV2Enhanced.c)
 *     EmonOverflowHandlerInternalV2Original @ 0x14055CF3C (EmonOverflowHandlerInternalV2Original.c)
 *     HalpTimerAlwaysOnClockInterrupt @ 0x14055EBC0 (HalpTimerAlwaysOnClockInterrupt.c)
 *     Amd64AllocateCounter @ 0x14056A5AC (Amd64AllocateCounter.c)
 *     Amd64OverflowHandlerInternal @ 0x14056BFB0 (Amd64OverflowHandlerInternal.c)
 *     XmRdtscOp @ 0x1405770E0 (XmRdtscOp.c)
 *     KiRebaselineProcessorStartCycles @ 0x1405B109C (KiRebaselineProcessorStartCycles.c)
 *     KiSetupTimeIncrement @ 0x1405B11F4 (KiSetupTimeIncrement.c)
 *     KiComputeDispatchInterruptCostDpcRoutine @ 0x1405B6760 (KiComputeDispatchInterruptCostDpcRoutine.c)
 *     KeSwitchFrozenProcessor @ 0x1405C1B30 (KeSwitchFrozenProcessor.c)
 *     KiCheckStall @ 0x1405C1BF0 (KiCheckStall.c)
 *     KiFreezeTargetExecution @ 0x1405C1C80 (KiFreezeTargetExecution.c)
 *     PpmIdleTransitionStall @ 0x1405CECAC (PpmIdleTransitionStall.c)
 *     PpmTraceExitLatency @ 0x1405CF3E4 (PpmTraceExitLatency.c)
 *     PdcPoCurrentPdcPhase @ 0x1405D87A0 (PdcPoCurrentPdcPhase.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x14060A68C (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     ?StDeviceIoIssue@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_PF_QUEUE@@@Z @ 0x14060AD90 (-StDeviceIoIssue@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_PF_QUEUE@@@Z.c)
 *     StEtaIoComplete @ 0x14060CED0 (StEtaIoComplete.c)
 *     StEtaIoStart @ 0x14060CF2C (StEtaIoStart.c)
 *     StEtaIoTimeout @ 0x14060D028 (StEtaIoTimeout.c)
 *     StLcBucketsCopy @ 0x14060D100 (StLcBucketsCopy.c)
 *     CarInitLogging @ 0x1406160A0 (CarInitLogging.c)
 *     WmiGetClock @ 0x14064F590 (WmiGetClock.c)
 *     EtwpCompressPendingBuffers @ 0x14065101C (EtwpCompressPendingBuffers.c)
 *     MiComputeCacheAttributeSpeeds @ 0x1406931D8 (MiComputeCacheAttributeSpeeds.c)
 *     MiStartDpcZeroingRound @ 0x140693A3C (MiStartDpcZeroingRound.c)
 *     MiZeroPageCalibrateLastDpcProcessorDone @ 0x140694468 (MiZeroPageCalibrateLastDpcProcessorDone.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x14069A194 (BgpFwDisplayBugCheckProgressUpdate.c)
 *     BgpFwDisplayBugCheckScreen @ 0x14069A360 (BgpFwDisplayBugCheckScreen.c)
 *     BgpFwDisplayBugCheckScreenModernized @ 0x14069A6B0 (BgpFwDisplayBugCheckScreenModernized.c)
 *     IpmiLibpGetTimeout @ 0x14069FFDC (IpmiLibpGetTimeout.c)
 *     IpmiLibpTimeAfter @ 0x1406A06F4 (IpmiLibpTimeAfter.c)
 *     Phase1Initialization @ 0x1406FC8E0 (Phase1Initialization.c)
 *     HalpNotifyActorIfPmuAvailable @ 0x1406FDEA0 (HalpNotifyActorIfPmuAvailable.c)
 *     HalpPmuArbiterPeriodicWorkItem @ 0x1406FE1B0 (HalpPmuArbiterPeriodicWorkItem.c)
 *     HalpPmuArbiterUpdateActiveActorTime @ 0x1406FE3D4 (HalpPmuArbiterUpdateActiveActorTime.c)
 *     FsRtlpOplockPerfBucketize @ 0x14070BAF4 (FsRtlpOplockPerfBucketize.c)
 *     FsRtlpOplockPerfInitializeLatencyInfo @ 0x14070BC34 (FsRtlpOplockPerfInitializeLatencyInfo.c)
 *     FsRtlpOplockTryStartBreakAckTimeout @ 0x14070C630 (FsRtlpOplockTryStartBreakAckTimeout.c)
 *     PpmRegisterPerfStates @ 0x14074FED4 (PpmRegisterPerfStates.c)
 *     PopExecutePowerAction @ 0x140753574 (PopExecutePowerAction.c)
 *     PopResumeApps @ 0x140753ABC (PopResumeApps.c)
 *     RtlpCapChkTelemetryRunOnce @ 0x14078CD90 (RtlpCapChkTelemetryRunOnce.c)
 *     EtwpInitializeSiloState @ 0x1407A815C (EtwpInitializeSiloState.c)
 *     CmpRecordShutdownStopTime @ 0x1407D553C (CmpRecordShutdownStopTime.c)
 *     MiNodeZeroConductor @ 0x1407FF7C0 (MiNodeZeroConductor.c)
 *     ExpAllocateUuids @ 0x1408E8EC4 (ExpAllocateUuids.c)
 *     PspNotifyThreadCreation @ 0x1408FEC38 (PspNotifyThreadCreation.c)
 *     NtQueryInformationProcess @ 0x1409AB830 (NtQueryInformationProcess.c)
 *     PopResumeServices @ 0x1409B9CE8 (PopResumeServices.c)
 *     EtwpAddLogHeader @ 0x1409DAEEC (EtwpAddLogHeader.c)
 *     NtQueryPerformanceCounter @ 0x1409EA6A0 (NtQueryPerformanceCounter.c)
 *     NtPowerInformation @ 0x1409F0230 (NtPowerInformation.c)
 *     RtlCapabilityCheck @ 0x140A62840 (RtlCapabilityCheck.c)
 *     PopIssueActionRequest @ 0x140A87C34 (PopIssueActionRequest.c)
 *     HalpDpReplaceControl @ 0x140B4FC60 (HalpDpReplaceControl.c)
 *     PnprGetMillisecondCounter @ 0x140B53B94 (PnprGetMillisecondCounter.c)
 *     KiCompleteKernelInit @ 0x140B55C50 (KiCompleteKernelInit.c)
 *     PopDecompressHiberBlocks @ 0x140B5C904 (PopDecompressHiberBlocks.c)
 *     PopWriteImageHeader @ 0x140B5ED50 (PopWriteImageHeader.c)
 *     PoBroadcastSystemState @ 0x140B64C6C (PoBroadcastSystemState.c)
 *     PopTransitionToSleep @ 0x140B65430 (PopTransitionToSleep.c)
 *     PopInvokeSystemStateHandler @ 0x140B6552C (PopInvokeSystemStateHandler.c)
 *     PopHandleNextState @ 0x140B65E10 (PopHandleNextState.c)
 *     PopSstDiagInitializeResumeTimer @ 0x140B661C8 (PopSstDiagInitializeResumeTimer.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B667DC (PopTransitionSystemPowerStateEx.c)
 *     PopHiberCheckForDebugBreak @ 0x140B691F0 (PopHiberCheckForDebugBreak.c)
 *     KiCalibrateTimeAdjustment @ 0x140B6B5B0 (KiCalibrateTimeAdjustment.c)
 *     PopSstDiagQueryResumeTimestamp @ 0x140B6C918 (PopSstDiagQueryResumeTimestamp.c)
 *     HalpCmciInit @ 0x140B6C938 (HalpCmciInit.c)
 *     PopDiagComputeEarlyHiberStats @ 0x140B6DD64 (PopDiagComputeEarlyHiberStats.c)
 *     KdInitSystem @ 0x140B75E30 (KdInitSystem.c)
 *     KdpSendWaitContinue @ 0x140B7A32C (KdpSendWaitContinue.c)
 *     VfFillAllocatedMemory @ 0x140B8BD04 (VfFillAllocatedMemory.c)
 *     MmVerifierTrimMemory @ 0x140BA47F8 (MmVerifierTrimMemory.c)
 *     CcInitializeTelemetry @ 0x140BDE6B0 (CcInitializeTelemetry.c)
 *     InitBootProcessor @ 0x140C0AC88 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140C0C048 (Phase1InitializationDiscard.c)
 *     KiComputeDispatchInterruptCost @ 0x140C27598 (KiComputeDispatchInterruptCost.c)
 *     ViInitSystemPhase0 @ 0x140C3B6E4 (ViInitSystemPhase0.c)
 *     EtwpFixBootSystemTime @ 0x140C3D028 (EtwpFixBootSystemTime.c)
 *     EtwpInitializeBootTimeStamps @ 0x140C3D738 (EtwpInitializeBootTimeStamps.c)
 *     MiInitSystem @ 0x140C4DC40 (MiInitSystem.c)
 *     MiInitNucleus @ 0x140C4F298 (MiInitNucleus.c)
 *     MiInitializePhysicalMemoryBlocks @ 0x140C4FB34 (MiInitializePhysicalMemoryBlocks.c)
 *     MiInitializeCacheFlushing @ 0x140C5A2D8 (MiInitializeCacheFlushing.c)
 *     MiReloadBootLoadedDrivers @ 0x140C5BA34 (MiReloadBootLoadedDrivers.c)
 *     KeInitializeClock @ 0x140C60350 (KeInitializeClock.c)
 *     PoInitSystem @ 0x140C61990 (PoInitSystem.c)
 * Callees:
 *     HalpTimerScaleCounter @ 0x14030AA50 (HalpTimerScaleCounter.c)
 *     HalpTimerGetInternalData @ 0x14033BC10 (HalpTimerGetInternalData.c)
 *     HalpHpetQueryCounter @ 0x1403D6DB0 (HalpHpetQueryCounter.c)
 *     HvlpGetRegister64 @ 0x1403D6DD0 (HvlpGetRegister64.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

LARGE_INTEGER __stdcall KeQueryPerformanceCounter(PLARGE_INTEGER PerformanceFrequency)
{
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 v4; // rsi
  unsigned __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 (__fastcall *v7)(__int64, __int64); // rax
  __int64 v8; // rdx
  LARGE_INTEGER result; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  int v12; // r9d
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // ecx
  unsigned __int64 v18; // rax
  int v19; // r9d
  signed __int64 v20; // rdx
  __int64 v21; // r15
  __int64 v22; // r8
  LONGLONG v23; // r8
  __int64 v24; // r15
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 (__fastcall *v29)(_QWORD); // rdx
  __int64 v30; // rax
  unsigned __int64 v31; // r10
  signed __int64 v32; // rax
  int v33; // r9d
  unsigned __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // rcx
  unsigned __int64 v38; // r8
  signed __int64 v39; // rdx
  __int64 v40; // rdi
  __int64 InternalData; // rax
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 (__fastcall *v44)(_QWORD); // rdx
  __int64 Counter; // rax
  unsigned __int64 v46; // r10
  signed __int64 v47; // rax
  int v48; // r9d
  unsigned __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // rcx
  unsigned __int64 v53; // r8
  __int64 v54; // rcx
  __int64 v55; // rcx
  signed __int32 v56[8]; // [rsp+0h] [rbp-48h] BYREF
  signed __int64 v57; // [rsp+58h] [rbp+10h] BYREF
  __int64 v58; // [rsp+60h] [rbp+18h] BYREF

  v4 = HalpPerformanceCounter;
  if ( *(_DWORD *)(HalpPerformanceCounter + 228) == 5 )
  {
    v5 = 10000000LL;
    if ( HalpTimerReferencePage )
    {
      if ( (*(_DWORD *)(HalpPerformanceCounter + 224) & 0x10000) != 0 )
        v6 = *(_QWORD *)(HalpPerformanceCounter + 72)
           + *(_DWORD *)(HalpPerformanceCounter + 80) * KeGetPcr()->Prcb.Number;
      else
        v6 = *(_QWORD *)(HalpPerformanceCounter + 72);
      v7 = *(__int64 (__fastcall **)(__int64, __int64))(HalpPerformanceCounter + 112);
      if ( v7 == HalpTscQueryCounterOrdered )
      {
        __asm { rdtscp }
        v8 = (unsigned __int64)v7 | ((_QWORD)HalpTscQueryCounterOrdered << 32);
      }
      else
      {
        v8 = guard_dispatch_icall_no_overrides(v6, HalpTscQueryCounterOrdered, v1, v2);
      }
      result.QuadPart = MEMORY[0xFFFFF780000003B8]
                      + (((unsigned __int64)v8 * (unsigned __int128)*((unsigned __int64 *)HalpTimerReferencePage + 1)) >> 64);
      goto LABEL_8;
    }
    if ( *(_DWORD *)(HalpPerformanceCounter + 220) != 64 )
    {
      do
      {
        v21 = *(_QWORD *)(v4 + 208);
        do
        {
          v40 = *(_QWORD *)(v4 + 200);
          InternalData = HalpTimerGetInternalData(v4);
          v44 = *(__int64 (__fastcall **)(_QWORD))(v4 + 112);
          if ( v44 == HalpHpetQueryCounter )
            Counter = HalpHpetQueryCounter(InternalData);
          else
            Counter = guard_dispatch_icall_no_overrides(InternalData, v44, v42, v43);
          v46 = Counter;
          _InterlockedOr(v56, 0);
          v47 = *(_QWORD *)(v4 + 200);
        }
        while ( v40 != v47 );
      }
      while ( v21 != *(_QWORD *)(v4 + 208) );
      v48 = *(_DWORD *)(v4 + 220);
      v49 = v40 ^ v46;
      if ( _bittest64((const __int64 *)&v49, (unsigned __int8)(v48 - 1)) )
      {
        if ( v48 == 64 )
          v51 = -1LL;
        else
          v51 = (1LL << v48) - 1;
        v52 = 0LL;
        if ( v48 != 64 )
          v52 = 1LL << v48;
        v53 = v40 & v51;
        v20 = v46 | v40 ^ v53;
        if ( v46 < v53 )
          v20 += v52;
        _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 200), v20, v47);
      }
      else
      {
        if ( v48 == 64 )
          v50 = -1LL;
        else
          v50 = (1LL << v48) - 1;
        v20 = v46 | v40 & ~v50;
      }
      goto LABEL_36;
    }
    v14 = HalpTimerGetInternalData(HalpPerformanceCounter);
    if ( *(__int64 (__fastcall **)(_QWORD))(v4 + 112) == HalpHvCounterQueryCounter )
    {
      if ( !HalpHvTimerApi )
      {
        v20 = __readmsr(0x40000020u);
LABEL_35:
        v21 = *(_QWORD *)(v4 + 208);
LABEL_36:
        result.QuadPart = HalpTimerScaleCounter(v21 + v20, *(_QWORD *)(v4 + 192), 10000000LL);
        goto LABEL_8;
      }
      if ( (__int64 (__fastcall *)())HalpHvTimerApi == HvlGetReferenceTimeUsingTscPage )
      {
        v17 = 0;
        v57 = 0LL;
        while ( 1 )
        {
          v18 = (unsigned __int64)HvlpReferenceTscPage;
          v19 = *(_DWORD *)HvlpReferenceTscPage;
          if ( !*(_DWORD *)HvlpReferenceTscPage )
            break;
          if ( MEMORY[0xFFFFF78000000294] )
          {
            __asm { rdtscp }
            LODWORD(v57) = v17;
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
            v18 = __rdtsc();
            LODWORD(v14) = HIDWORD(v18);
            v18 = (unsigned int)v18;
            v14 = (unsigned int)v14;
          }
          v15 = *((_QWORD *)HvlpReferenceTscPage + 2);
          v14 = v15 + (((v18 | (v14 << 32)) * (unsigned __int128)*((unsigned __int64 *)HvlpReferenceTscPage + 1)) >> 64);
          v57 = v14;
          v17 = *(_DWORD *)HvlpReferenceTscPage;
          if ( *(_DWORD *)HvlpReferenceTscPage == v19 )
            goto LABEL_34;
        }
        HvlpGetRegister64(589828LL, &v57, v15);
LABEL_34:
        v20 = v57;
        goto LABEL_35;
      }
      v55 = 0LL;
    }
    else
    {
      v55 = v14;
    }
    v20 = guard_dispatch_icall_no_overrides(v55, v14, v15, v16);
    goto LABEL_35;
  }
  v5 = *(_QWORD *)(HalpPerformanceCounter + 192);
  if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
  {
    if ( (*(_DWORD *)(HalpPerformanceCounter + 224) & 0x10000) != 0 )
      v10 = *(_QWORD *)(HalpPerformanceCounter + 72)
          + *(_DWORD *)(HalpPerformanceCounter + 80) * KeGetPcr()->Prcb.Number;
    else
      v10 = *(_QWORD *)(HalpPerformanceCounter + 72);
    if ( *(__int64 (__fastcall **)(_QWORD))(HalpPerformanceCounter + 112) == HalpHvCounterQueryCounter )
    {
      if ( !HalpHvTimerApi )
      {
        result.QuadPart = *(_QWORD *)(HalpPerformanceCounter + 208) + __readmsr(0x40000020u);
        goto LABEL_8;
      }
      if ( (__int64 (__fastcall *)())HalpHvTimerApi == HvlGetReferenceTimeUsingTscPage )
      {
        v58 = 0LL;
        while ( 1 )
        {
          v11 = (unsigned __int64)HvlpReferenceTscPage;
          v12 = *(_DWORD *)HvlpReferenceTscPage;
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
            v11 = __rdtsc();
            LODWORD(v10) = HIDWORD(v11);
            v11 = (unsigned int)v11;
            v10 = (unsigned int)v10;
          }
          v1 = *((_QWORD *)HvlpReferenceTscPage + 2);
          v10 = v1 + (((v11 | (v10 << 32)) * (unsigned __int128)*((unsigned __int64 *)HvlpReferenceTscPage + 1)) >> 64);
          v58 = v10;
          if ( *(_DWORD *)HvlpReferenceTscPage == v12 )
            goto LABEL_23;
        }
        HvlpGetRegister64(589828LL, &v58, v1);
LABEL_23:
        v13 = v58;
        goto LABEL_24;
      }
      v54 = 0LL;
    }
    else
    {
      v54 = v10;
    }
    v13 = guard_dispatch_icall_no_overrides(v54, v10, v1, v2);
LABEL_24:
    result.QuadPart = *(_QWORD *)(v4 + 208) + v13;
    goto LABEL_8;
  }
  do
  {
    v24 = *(_QWORD *)(v4 + 208);
    do
    {
      v25 = *(_QWORD *)(v4 + 200);
      v26 = HalpTimerGetInternalData(v4);
      v29 = *(__int64 (__fastcall **)(_QWORD))(v4 + 112);
      if ( v29 == HalpHpetQueryCounter )
        v30 = HalpHpetQueryCounter(v26);
      else
        v30 = guard_dispatch_icall_no_overrides(v26, v29, v27, v28);
      v31 = v30;
      _InterlockedOr(v56, 0);
      v32 = *(_QWORD *)(v4 + 200);
    }
    while ( v25 != v32 );
  }
  while ( v24 != *(_QWORD *)(v4 + 208) );
  v33 = *(_DWORD *)(v4 + 220);
  v34 = v25 ^ v31;
  if ( _bittest64((const __int64 *)&v34, (unsigned __int8)(v33 - 1)) )
  {
    if ( v33 == 64 )
      v36 = -1LL;
    else
      v36 = (1LL << v33) - 1;
    v37 = 0LL;
    if ( v33 != 64 )
      v37 = 1LL << v33;
    v38 = v25 & v36;
    v39 = v31 | v25 ^ v38;
    if ( v31 < v38 )
      v39 += v37;
    _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 200), v39, v32);
    result.QuadPart = v24 + v39;
  }
  else
  {
    if ( v33 == 64 )
      v35 = -1LL;
    else
      v35 = (1LL << v33) - 1;
    result.QuadPart = v24 + (v31 | v25 & ~v35);
  }
LABEL_8:
  if ( v4 == HalpOriginalPerformanceCounter || !HalpOriginalPerformanceCounter )
  {
    if ( PerformanceFrequency )
      PerformanceFrequency->QuadPart = v5;
  }
  else
  {
    v22 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
    if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
      v22 = 10000000LL;
    result.QuadPart = HalpTimerScaleCounter(result.QuadPart, v5, v22);
    if ( PerformanceFrequency )
      PerformanceFrequency->QuadPart = v23;
  }
  return result;
}
