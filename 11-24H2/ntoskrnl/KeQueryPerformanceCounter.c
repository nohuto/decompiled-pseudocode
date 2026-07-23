/*
 * XREFs of KeQueryPerformanceCounter @ 0x14036DEF0
 * Callers:
 *     PpmIdleSnapConcurrency @ 0x140230838 (PpmIdleSnapConcurrency.c)
 *     PpmParkSnapNodeStatistics @ 0x140230C2C (PpmParkSnapNodeStatistics.c)
 *     CcFetchDataForRead @ 0x140237680 (CcFetchDataForRead.c)
 *     CcAsyncCopyRead @ 0x140273E20 (CcAsyncCopyRead.c)
 *     CcFlushCachePriv @ 0x1402771F0 (CcFlushCachePriv.c)
 *     CcFlushCachePreProcess @ 0x140278C74 (CcFlushCachePreProcess.c)
 *     CcWriteBehindInternal @ 0x140279FE0 (CcWriteBehindInternal.c)
 *     CcWriteBehindAsync @ 0x14027B44C (CcWriteBehindAsync.c)
 *     KiRetireDpcList @ 0x1402824C0 (KiRetireDpcList.c)
 *     KiExecuteAllDpcs @ 0x1402858E0 (KiExecuteAllDpcs.c)
 *     KiUpdateTime @ 0x1402AA2B0 (KiUpdateTime.c)
 *     KeCheckAndApplyBamQos @ 0x1402ACA20 (KeCheckAndApplyBamQos.c)
 *     PoSetProcessorQos @ 0x1402ACC90 (PoSetProcessorQos.c)
 *     KiUpdateTimeAssist @ 0x1402AD69C (KiUpdateTimeAssist.c)
 *     PpmPerfApplyProcessorState @ 0x1402ADC20 (PpmPerfApplyProcessorState.c)
 *     EtwpFileModeCompress @ 0x1402B780C (EtwpFileModeCompress.c)
 *     PopDeepSleepResiliencyPhaseAccountingEnd @ 0x1402B962C (PopDeepSleepResiliencyPhaseAccountingEnd.c)
 *     PopDeepSleepResiliencyPhaseAccountingUpdate @ 0x1402BA0B4 (PopDeepSleepResiliencyPhaseAccountingUpdate.c)
 *     PopDeepSleepResiliencyPhaseAccountingBegin @ 0x1402BA3BC (PopDeepSleepResiliencyPhaseAccountingBegin.c)
 *     EtwpReserveTraceBuffer @ 0x1402D0980 (EtwpReserveTraceBuffer.c)
 *     KiTimerExpiration @ 0x140315160 (KiTimerExpiration.c)
 *     KiProcessExpiredTimerList @ 0x140315CC0 (KiProcessExpiredTimerList.c)
 *     KiSetClockTickRate @ 0x140318120 (KiSetClockTickRate.c)
 *     MiBackgroundZeroLocalPages @ 0x140332260 (MiBackgroundZeroLocalPages.c)
 *     ?KiUpdateProcessConcurrencyCounts@@YAXXZ @ 0x1403396B0 (-KiUpdateProcessConcurrencyCounts@@YAXXZ.c)
 *     MiScheduleZeroPageThreads @ 0x140354918 (MiScheduleZeroPageThreads.c)
 *     KiEndInterruptCycleAccumulation @ 0x140368D80 (KiEndInterruptCycleAccumulation.c)
 *     KeUpdateTotalCyclesCurrentThread @ 0x1403693A0 (KeUpdateTotalCyclesCurrentThread.c)
 *     KiReduceByEffectiveIdleSmtSet @ 0x140369BE0 (KiReduceByEffectiveIdleSmtSet.c)
 *     RtlGetSystemTimePrecise @ 0x14036D060 (RtlGetSystemTimePrecise.c)
 *     KeQuerySystemTimePrecise @ 0x14036D140 (KeQuerySystemTimePrecise.c)
 *     KiStartThreadCycleAccumulation @ 0x14036D230 (KiStartThreadCycleAccumulation.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x14036D540 (KiUpdateTotalCyclesCurrentThread.c)
 *     EtwpGetLoggerTimeStamp @ 0x14036DDA0 (EtwpGetLoggerTimeStamp.c)
 *     EtwGetKernelTraceTimestampSilo @ 0x14036E4E0 (EtwGetKernelTraceTimestampSilo.c)
 *     PpmSnapPerformanceAccumulation @ 0x14036E610 (PpmSnapPerformanceAccumulation.c)
 *     PopGetIdleTimesCallback @ 0x14036F8B0 (PopGetIdleTimesCallback.c)
 *     PpmIdleExecuteTransition @ 0x140371030 (PpmIdleExecuteTransition.c)
 *     MiAllocatePagesForMdl @ 0x14039469C (MiAllocatePagesForMdl.c)
 *     MiAllocateContiguousMemory @ 0x140395A6C (MiAllocateContiguousMemory.c)
 *     EtwpGetDurationSince @ 0x14039623C (EtwpGetDurationSince.c)
 *     MiFlushCacheForAttributeChange @ 0x14039CF08 (MiFlushCacheForAttributeChange.c)
 *     HvcallFastExtended @ 0x14039DBD0 (HvcallFastExtended.c)
 *     HvlpFastFlushAddressSpaceTb @ 0x14039F2D4 (HvlpFastFlushAddressSpaceTb.c)
 *     PpmPerfApplyDomainState @ 0x1403A14F0 (PpmPerfApplyDomainState.c)
 *     PopFxUpdateDeviceIRPhaseAccounting @ 0x1403A5854 (PopFxUpdateDeviceIRPhaseAccounting.c)
 *     EtwGetKernelTraceTimestamp @ 0x1403AEC60 (EtwGetKernelTraceTimestamp.c)
 *     HalpTimerDpcRoutine @ 0x1403BBD10 (HalpTimerDpcRoutine.c)
 *     HalpTimerRestorePerformanceCounter @ 0x1403BBF18 (HalpTimerRestorePerformanceCounter.c)
 *     KeQueryTotalCycleTimeThread @ 0x1403E03C0 (KeQueryTotalCycleTimeThread.c)
 *     MiIssueSegmentDereferenceWork @ 0x1403ED890 (MiIssueSegmentDereferenceWork.c)
 *     MiSaveUnusedSegmentCalibration @ 0x1403EDDB8 (MiSaveUnusedSegmentCalibration.c)
 *     KiIpiProcessRequests @ 0x1403F91B0 (KiIpiProcessRequests.c)
 *     KiIpiGenericCallTarget @ 0x1403F9740 (KiIpiGenericCallTarget.c)
 *     MiReassessZeroThreads @ 0x1404125C0 (MiReassessZeroThreads.c)
 *     HalSetRealTimeClock @ 0x1404191C0 (HalSetRealTimeClock.c)
 *     HalpSetVirtualRtc @ 0x140419DE0 (HalpSetVirtualRtc.c)
 *     PopWriteBsdPoInfo @ 0x14041C188 (PopWriteBsdPoInfo.c)
 *     ?SmAsyncReadQueueWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140424090 (-SmAsyncReadQueueWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     HalpScanForProfilingCorruption @ 0x140435878 (HalpScanForProfilingCorruption.c)
 *     PpmResetIdlePolicy @ 0x1404372B8 (PpmResetIdlePolicy.c)
 *     PpmResetPerformanceAccumulation @ 0x140440730 (PpmResetPerformanceAccumulation.c)
 *     PpmQueryTime @ 0x140444524 (PpmQueryTime.c)
 *     KiLogClockIncrementUpdate @ 0x1404523E4 (KiLogClockIncrementUpdate.c)
 *     ?StDmInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@0@Z @ 0x14045455C (-StDmInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@0@Z.c)
 *     StLcInitialize @ 0x140454D68 (StLcInitialize.c)
 *     ?KiUpdateCpuTargetByWeight@@YAXPEAU_KSCHEDULING_GROUP@@E@Z @ 0x14045C86C (-KiUpdateCpuTargetByWeight@@YAXPEAU_KSCHEDULING_GROUP@@E@Z.c)
 *     KeInsertSchedulingGroup @ 0x14045CB04 (KeInsertSchedulingGroup.c)
 *     ?KiUpdateCpuTargetByRate@@YAXPEAU_KSCHEDULING_GROUP@@E@Z @ 0x14045CFB4 (-KiUpdateCpuTargetByRate@@YAXPEAU_KSCHEDULING_GROUP@@E@Z.c)
 *     PpmIdleRemoveConcurrency @ 0x140475AB0 (PpmIdleRemoveConcurrency.c)
 *     PpmIdleInstallConcurrency @ 0x140475B30 (PpmIdleInstallConcurrency.c)
 *     KeQuerySchedulingGroupHistory @ 0x14047B298 (KeQuerySchedulingGroupHistory.c)
 *     HalpTimerCaptureCurrentAuxiliaryQpcPair @ 0x14047E064 (HalpTimerCaptureCurrentAuxiliaryQpcPair.c)
 *     StEtaStart @ 0x14048FFBC (StEtaStart.c)
 *     PpmIdleSnapConcurrencyIdleTime @ 0x14049071C (PpmIdleSnapConcurrencyIdleTime.c)
 *     RtlGetMultiTimePrecise @ 0x140491A30 (RtlGetMultiTimePrecise.c)
 *     IopLiveDumpGetMillisecondCounter @ 0x140495FD4 (IopLiveDumpGetMillisecondCounter.c)
 *     CcCopyWriteEx @ 0x14049CDC0 (CcCopyWriteEx.c)
 *     KiUpdateSystemTime @ 0x1404A2140 (KiUpdateSystemTime.c)
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1404ABFD4 (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     BgpFwQueryPerformanceCounter @ 0x1404B0FB4 (BgpFwQueryPerformanceCounter.c)
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x1404B40A4 (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 *     PpmPerfSetProcessorIdle @ 0x1404BF3F0 (PpmPerfSetProcessorIdle.c)
 *     PpmInstallFeedbackCounters @ 0x1404C362C (PpmInstallFeedbackCounters.c)
 *     KiVpBackingThreadYieldExecution @ 0x1404CE2D8 (KiVpBackingThreadYieldExecution.c)
 *     KeFreezeExecution @ 0x1404CEFB0 (KeFreezeExecution.c)
 *     HalpCmciLoadThresholdConfiguration @ 0x1404CFB0C (HalpCmciLoadThresholdConfiguration.c)
 *     KeRebaselineInterruptTime @ 0x1404D229C (KeRebaselineInterruptTime.c)
 *     KeRebaselineSystemTime @ 0x1404D2324 (KeRebaselineSystemTime.c)
 *     CcCopyReadEx @ 0x1404D5990 (CcCopyReadEx.c)
 *     CcMapAndCopyInToCache @ 0x1404D6C60 (CcMapAndCopyInToCache.c)
 *     CcCompleteAsyncRead @ 0x1404D929C (CcCompleteAsyncRead.c)
 *     IoCaptureLiveDump @ 0x1404DC764 (IoCaptureLiveDump.c)
 *     KeThawExecution @ 0x1404F23F0 (KeThawExecution.c)
 *     KiEndDebugAccumulation @ 0x1404F2520 (KiEndDebugAccumulation.c)
 *     HalpTimerCaptureCloestAuxiliaryQpcPair @ 0x140538098 (HalpTimerCaptureCloestAuxiliaryQpcPair.c)
 *     HalpTimerInitSystem @ 0x1405387E0 (HalpTimerInitSystem.c)
 *     HalpTimerSchedulePeriodicQueries @ 0x140539000 (HalpTimerSchedulePeriodicQueries.c)
 *     HalWheaUpdateCmciPolicy @ 0x14053BE10 (HalWheaUpdateCmciPolicy.c)
 *     HalpCmciHandler @ 0x140540DF8 (HalpCmciHandler.c)
 *     HalpCollectProfileCorruptionStatus @ 0x140542D74 (HalpCollectProfileCorruptionStatus.c)
 *     HalpTimerDetermineValidTimerPairReadLatency @ 0x140545290 (HalpTimerDetermineValidTimerPairReadLatency.c)
 *     HalpTimerReadTimerPairWithLatencyLimit @ 0x1405460B8 (HalpTimerReadTimerPairWithLatencyLimit.c)
 *     HalpTscFallback @ 0x140546DD0 (HalpTscFallback.c)
 *     HalpQueryVirtualRtc @ 0x140548660 (HalpQueryVirtualRtc.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x140549AA0 (HalpTimerMeasureProcessorsWorker.c)
 *     EmonAllocateCounterInternal @ 0x140558740 (EmonAllocateCounterInternal.c)
 *     EmonOverflowHandlerInternalV1Enhanced @ 0x140559E3C (EmonOverflowHandlerInternalV1Enhanced.c)
 *     EmonOverflowHandlerInternalV1Original @ 0x14055A288 (EmonOverflowHandlerInternalV1Original.c)
 *     EmonOverflowHandlerInternalV2Enhanced @ 0x14055A6C0 (EmonOverflowHandlerInternalV2Enhanced.c)
 *     EmonOverflowHandlerInternalV2Original @ 0x14055AB6C (EmonOverflowHandlerInternalV2Original.c)
 *     HalpTimerAlwaysOnClockInterrupt @ 0x14055C7F0 (HalpTimerAlwaysOnClockInterrupt.c)
 *     Amd64AllocateCounter @ 0x140567A3C (Amd64AllocateCounter.c)
 *     Amd64OverflowHandlerInternal @ 0x140569440 (Amd64OverflowHandlerInternal.c)
 *     XmRdtscOp @ 0x140574570 (XmRdtscOp.c)
 *     KiRebaselineProcessorStartCycles @ 0x1405AE00C (KiRebaselineProcessorStartCycles.c)
 *     KiSetupTimeIncrement @ 0x1405AE164 (KiSetupTimeIncrement.c)
 *     KiComputeDispatchInterruptCostDpcRoutine @ 0x1405B3A20 (KiComputeDispatchInterruptCostDpcRoutine.c)
 *     KeSwitchFrozenProcessor @ 0x1405BF100 (KeSwitchFrozenProcessor.c)
 *     KiCheckStall @ 0x1405BF1C0 (KiCheckStall.c)
 *     KiFreezeTargetExecution @ 0x1405BF250 (KiFreezeTargetExecution.c)
 *     PpmIdleTransitionStall @ 0x1405CC3CC (PpmIdleTransitionStall.c)
 *     PpmTraceExitLatency @ 0x1405CCB04 (PpmTraceExitLatency.c)
 *     PdcPoCurrentPdcPhase @ 0x1405D5CC0 (PdcPoCurrentPdcPhase.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x140608C4C (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     ?StDeviceIoIssue@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_PF_QUEUE@@@Z @ 0x140609350 (-StDeviceIoIssue@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_PF_QUEUE@@@Z.c)
 *     StEtaIoComplete @ 0x14060B490 (StEtaIoComplete.c)
 *     StEtaIoStart @ 0x14060B4EC (StEtaIoStart.c)
 *     StEtaIoTimeout @ 0x14060B5E8 (StEtaIoTimeout.c)
 *     StLcBucketsCopy @ 0x14060B6C0 (StLcBucketsCopy.c)
 *     CarInitLogging @ 0x140614660 (CarInitLogging.c)
 *     WmiGetClock @ 0x14064DC90 (WmiGetClock.c)
 *     EtwpCompressPendingBuffers @ 0x14064F724 (EtwpCompressPendingBuffers.c)
 *     MiComputeCacheAttributeSpeeds @ 0x1406942A8 (MiComputeCacheAttributeSpeeds.c)
 *     MiStartDpcZeroingRound @ 0x140694B0C (MiStartDpcZeroingRound.c)
 *     MiZeroPageCalibrateLastDpcProcessorDone @ 0x140695538 (MiZeroPageCalibrateLastDpcProcessorDone.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x14069B214 (BgpFwDisplayBugCheckProgressUpdate.c)
 *     BgpFwDisplayBugCheckScreen @ 0x14069B3E0 (BgpFwDisplayBugCheckScreen.c)
 *     BgpFwDisplayBugCheckScreenModernized @ 0x14069B730 (BgpFwDisplayBugCheckScreenModernized.c)
 *     IpmiLibpGetTimeout @ 0x1406A10E0 (IpmiLibpGetTimeout.c)
 *     IpmiLibpTimeAfter @ 0x1406A17FC (IpmiLibpTimeAfter.c)
 *     Phase1Initialization @ 0x1406FA520 (Phase1Initialization.c)
 *     HalpNotifyActorIfPmuAvailable @ 0x1406FBAE0 (HalpNotifyActorIfPmuAvailable.c)
 *     HalpPmuArbiterPeriodicWorkItem @ 0x1406FBDF0 (HalpPmuArbiterPeriodicWorkItem.c)
 *     HalpPmuArbiterUpdateActiveActorTime @ 0x1406FC014 (HalpPmuArbiterUpdateActiveActorTime.c)
 *     FsRtlpOplockPerfBucketize @ 0x140709688 (FsRtlpOplockPerfBucketize.c)
 *     FsRtlpOplockPerfInitializeLatencyInfo @ 0x1407097C8 (FsRtlpOplockPerfInitializeLatencyInfo.c)
 *     FsRtlpOplockTryStartBreakAckTimeout @ 0x14070A1C4 (FsRtlpOplockTryStartBreakAckTimeout.c)
 *     PpmRegisterPerfStates @ 0x14074E1F4 (PpmRegisterPerfStates.c)
 *     PopExecutePowerAction @ 0x140751894 (PopExecutePowerAction.c)
 *     PopResumeApps @ 0x140751DDC (PopResumeApps.c)
 *     RtlpCapChkTelemetryRunOnce @ 0x14078CCC0 (RtlpCapChkTelemetryRunOnce.c)
 *     EtwpInitializeSiloState @ 0x1407A829C (EtwpInitializeSiloState.c)
 *     CmpRecordShutdownStopTime @ 0x1407D5A2C (CmpRecordShutdownStopTime.c)
 *     MiNodeZeroConductor @ 0x1407FFF00 (MiNodeZeroConductor.c)
 *     ExpAllocateUuids @ 0x14085A6EC (ExpAllocateUuids.c)
 *     PspNotifyThreadCreation @ 0x140921518 (PspNotifyThreadCreation.c)
 *     NtQueryInformationProcess @ 0x140995530 (NtQueryInformationProcess.c)
 *     PopResumeServices @ 0x1409A0338 (PopResumeServices.c)
 *     EtwpAddLogHeader @ 0x1409D59FC (EtwpAddLogHeader.c)
 *     NtQueryPerformanceCounter @ 0x1409E4F90 (NtQueryPerformanceCounter.c)
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 *     RtlCapabilityCheck @ 0x140A5B140 (RtlCapabilityCheck.c)
 *     PopIssueActionRequest @ 0x140A84124 (PopIssueActionRequest.c)
 *     HalpDpReplaceControl @ 0x140B51CB0 (HalpDpReplaceControl.c)
 *     PnprGetMillisecondCounter @ 0x140B55BE4 (PnprGetMillisecondCounter.c)
 *     KiCompleteKernelInit @ 0x140B57CA0 (KiCompleteKernelInit.c)
 *     PopDecompressHiberBlocks @ 0x140B5E974 (PopDecompressHiberBlocks.c)
 *     PopWriteImageHeader @ 0x140B60DD0 (PopWriteImageHeader.c)
 *     PoBroadcastSystemState @ 0x140B66DA4 (PoBroadcastSystemState.c)
 *     PopTransitionToSleep @ 0x140B67570 (PopTransitionToSleep.c)
 *     PopInvokeSystemStateHandler @ 0x140B6766C (PopInvokeSystemStateHandler.c)
 *     PopHandleNextState @ 0x140B67F50 (PopHandleNextState.c)
 *     PopSstDiagInitializeResumeTimer @ 0x140B68308 (PopSstDiagInitializeResumeTimer.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B6891C (PopTransitionSystemPowerStateEx.c)
 *     PopHiberCheckForDebugBreak @ 0x140B6A908 (PopHiberCheckForDebugBreak.c)
 *     KiCalibrateTimeAdjustment @ 0x140B6BCD0 (KiCalibrateTimeAdjustment.c)
 *     PopSstDiagQueryResumeTimestamp @ 0x140B6E1B8 (PopSstDiagQueryResumeTimestamp.c)
 *     HalpCmciInit @ 0x140B6E1D8 (HalpCmciInit.c)
 *     PopDiagComputeEarlyHiberStats @ 0x140B6F604 (PopDiagComputeEarlyHiberStats.c)
 *     KdInitSystem @ 0x140B77E30 (KdInitSystem.c)
 *     KdpSendWaitContinue @ 0x140B7C32C (KdpSendWaitContinue.c)
 *     VfFillAllocatedMemory @ 0x140B8DD04 (VfFillAllocatedMemory.c)
 *     MmVerifierTrimMemory @ 0x140BA67F8 (MmVerifierTrimMemory.c)
 *     CcInitializeTelemetry @ 0x140BE06B0 (CcInitializeTelemetry.c)
 *     InitBootProcessor @ 0x140C0CC88 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140C0E048 (Phase1InitializationDiscard.c)
 *     KiComputeDispatchInterruptCost @ 0x140C29574 (KiComputeDispatchInterruptCost.c)
 *     ViInitSystemPhase0 @ 0x140C3D83C (ViInitSystemPhase0.c)
 *     EtwpFixBootSystemTime @ 0x140C3F178 (EtwpFixBootSystemTime.c)
 *     EtwpInitializeBootTimeStamps @ 0x140C3F888 (EtwpInitializeBootTimeStamps.c)
 *     MiInitSystem @ 0x140C4FDD0 (MiInitSystem.c)
 *     MiInitNucleus @ 0x140C51428 (MiInitNucleus.c)
 *     MiInitializePhysicalMemoryBlocks @ 0x140C51CC4 (MiInitializePhysicalMemoryBlocks.c)
 *     MiInitializeCacheFlushing @ 0x140C5C468 (MiInitializeCacheFlushing.c)
 *     MiReloadBootLoadedDrivers @ 0x140C5DBC4 (MiReloadBootLoadedDrivers.c)
 *     KeInitializeClock @ 0x140C624A0 (KeInitializeClock.c)
 *     PoInitSystem @ 0x140C63AE4 (PoInitSystem.c)
 * Callees:
 *     HalpTimerScaleCounter @ 0x140314930 (HalpTimerScaleCounter.c)
 *     HalpTimerGetInternalData @ 0x14031B0F0 (HalpTimerGetInternalData.c)
 *     HalpHpetQueryCounter @ 0x1403BC400 (HalpHpetQueryCounter.c)
 *     HvlpGetRegister64 @ 0x1403BC420 (HvlpGetRegister64.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

LARGE_INTEGER __stdcall KeQueryPerformanceCounter(PLARGE_INTEGER PerformanceFrequency)
{
  __int64 v2; // rsi
  unsigned __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 (__fastcall *v5)(__int64, __int64); // rax
  __int64 v6; // rdx
  LARGE_INTEGER result; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // rax
  int v10; // r9d
  __int64 v11; // rdx
  __int64 v12; // rdx
  int v13; // ecx
  unsigned __int64 v14; // rax
  int v15; // r9d
  signed __int64 v16; // rdx
  __int64 v17; // r15
  __int64 v18; // r8
  LONGLONG v19; // r8
  __int64 v20; // r15
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 (__fastcall *v23)(_QWORD); // rdx
  __int64 v24; // rax
  unsigned __int64 v25; // r10
  signed __int64 v26; // rax
  int v27; // r9d
  unsigned __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rcx
  unsigned __int64 v32; // r8
  signed __int64 v33; // rdx
  __int64 v34; // rdi
  __int64 InternalData; // rax
  __int64 (__fastcall *v36)(_QWORD); // rdx
  __int64 Counter; // rax
  unsigned __int64 v38; // r10
  signed __int64 v39; // rax
  int v40; // r9d
  unsigned __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // rcx
  unsigned __int64 v45; // r8
  __int64 v46; // rcx
  __int64 v47; // rcx
  signed __int32 v48[8]; // [rsp+0h] [rbp-48h] BYREF
  signed __int64 v49; // [rsp+58h] [rbp+10h] BYREF
  __int64 v50; // [rsp+60h] [rbp+18h] BYREF

  v2 = HalpPerformanceCounter;
  if ( *(_DWORD *)(HalpPerformanceCounter + 228) == 5 )
  {
    v3 = 10000000LL;
    if ( HalpTimerReferencePage )
    {
      if ( (*(_DWORD *)(HalpPerformanceCounter + 224) & 0x10000) != 0 )
        v4 = *(_QWORD *)(HalpPerformanceCounter + 72)
           + *(_DWORD *)(HalpPerformanceCounter + 80) * KeGetPcr()->Prcb.Number;
      else
        v4 = *(_QWORD *)(HalpPerformanceCounter + 72);
      v5 = *(__int64 (__fastcall **)(__int64, __int64))(HalpPerformanceCounter + 112);
      if ( v5 == HalpTscQueryCounterOrdered )
      {
        __asm { rdtscp }
        v6 = (unsigned __int64)v5 | ((_QWORD)HalpTscQueryCounterOrdered << 32);
      }
      else
      {
        v6 = guard_dispatch_icall_no_overrides(v4, HalpTscQueryCounterOrdered);
      }
      result.QuadPart = MEMORY[0xFFFFF780000003B8]
                      + (((unsigned __int64)v6 * (unsigned __int128)*((unsigned __int64 *)HalpTimerReferencePage + 1)) >> 64);
      goto LABEL_8;
    }
    if ( *(_DWORD *)(HalpPerformanceCounter + 220) != 64 )
    {
      do
      {
        v17 = *(_QWORD *)(v2 + 208);
        do
        {
          v34 = *(_QWORD *)(v2 + 200);
          InternalData = HalpTimerGetInternalData(v2);
          v36 = *(__int64 (__fastcall **)(_QWORD))(v2 + 112);
          if ( v36 == HalpHpetQueryCounter )
            Counter = HalpHpetQueryCounter(InternalData);
          else
            Counter = guard_dispatch_icall_no_overrides(InternalData, v36);
          v38 = Counter;
          _InterlockedOr(v48, 0);
          v39 = *(_QWORD *)(v2 + 200);
        }
        while ( v34 != v39 );
      }
      while ( v17 != *(_QWORD *)(v2 + 208) );
      v40 = *(_DWORD *)(v2 + 220);
      v41 = v34 ^ v38;
      if ( _bittest64((const __int64 *)&v41, (unsigned __int8)(v40 - 1)) )
      {
        if ( v40 == 64 )
          v43 = -1LL;
        else
          v43 = (1LL << v40) - 1;
        v44 = 0LL;
        if ( v40 != 64 )
          v44 = 1LL << v40;
        v45 = v34 & v43;
        v16 = v38 | v34 ^ v45;
        if ( v38 < v45 )
          v16 += v44;
        _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 200), v16, v39);
      }
      else
      {
        if ( v40 == 64 )
          v42 = -1LL;
        else
          v42 = (1LL << v40) - 1;
        v16 = v38 | v34 & ~v42;
      }
      goto LABEL_36;
    }
    v12 = HalpTimerGetInternalData(HalpPerformanceCounter);
    if ( *(__int64 (__fastcall **)(_QWORD))(v2 + 112) == HalpHvCounterQueryCounter )
    {
      if ( !HalpHvTimerApi )
      {
        v16 = __readmsr(0x40000020u);
LABEL_35:
        v17 = *(_QWORD *)(v2 + 208);
LABEL_36:
        result.QuadPart = HalpTimerScaleCounter(v17 + v16, *(_QWORD *)(v2 + 192), 10000000LL);
        goto LABEL_8;
      }
      if ( (__int64 (__fastcall *)())HalpHvTimerApi == HvlGetReferenceTimeUsingTscPage )
      {
        v13 = 0;
        v49 = 0LL;
        while ( 1 )
        {
          v14 = (unsigned __int64)HvlpReferenceTscPage;
          v15 = *(_DWORD *)HvlpReferenceTscPage;
          if ( !*(_DWORD *)HvlpReferenceTscPage )
            break;
          if ( MEMORY[0xFFFFF78000000294] )
          {
            __asm { rdtscp }
            LODWORD(v49) = v13;
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
            v14 = __rdtsc();
            LODWORD(v12) = HIDWORD(v14);
            v14 = (unsigned int)v14;
            v12 = (unsigned int)v12;
          }
          v12 = *((_QWORD *)HvlpReferenceTscPage + 2)
              + (((v14 | (v12 << 32)) * (unsigned __int128)*((unsigned __int64 *)HvlpReferenceTscPage + 1)) >> 64);
          v49 = v12;
          v13 = *(_DWORD *)HvlpReferenceTscPage;
          if ( *(_DWORD *)HvlpReferenceTscPage == v15 )
            goto LABEL_34;
        }
        HvlpGetRegister64(589828LL, &v49);
LABEL_34:
        v16 = v49;
        goto LABEL_35;
      }
      v47 = 0LL;
    }
    else
    {
      v47 = v12;
    }
    v16 = guard_dispatch_icall_no_overrides(v47, v12);
    goto LABEL_35;
  }
  v3 = *(_QWORD *)(HalpPerformanceCounter + 192);
  if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
  {
    if ( (*(_DWORD *)(HalpPerformanceCounter + 224) & 0x10000) != 0 )
      v8 = *(_QWORD *)(HalpPerformanceCounter + 72) + *(_DWORD *)(HalpPerformanceCounter + 80) * KeGetPcr()->Prcb.Number;
    else
      v8 = *(_QWORD *)(HalpPerformanceCounter + 72);
    if ( *(__int64 (__fastcall **)(_QWORD))(HalpPerformanceCounter + 112) == HalpHvCounterQueryCounter )
    {
      if ( !HalpHvTimerApi )
      {
        result.QuadPart = *(_QWORD *)(HalpPerformanceCounter + 208) + __readmsr(0x40000020u);
        goto LABEL_8;
      }
      if ( (__int64 (__fastcall *)())HalpHvTimerApi == HvlGetReferenceTimeUsingTscPage )
      {
        v50 = 0LL;
        while ( 1 )
        {
          v9 = (unsigned __int64)HvlpReferenceTscPage;
          v10 = *(_DWORD *)HvlpReferenceTscPage;
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
            v9 = __rdtsc();
            LODWORD(v8) = HIDWORD(v9);
            v9 = (unsigned int)v9;
            v8 = (unsigned int)v8;
          }
          v8 = *((_QWORD *)HvlpReferenceTscPage + 2)
             + (((v9 | (v8 << 32)) * (unsigned __int128)*((unsigned __int64 *)HvlpReferenceTscPage + 1)) >> 64);
          v50 = v8;
          if ( *(_DWORD *)HvlpReferenceTscPage == v10 )
            goto LABEL_23;
        }
        HvlpGetRegister64(589828LL, &v50);
LABEL_23:
        v11 = v50;
        goto LABEL_24;
      }
      v46 = 0LL;
    }
    else
    {
      v46 = v8;
    }
    v11 = guard_dispatch_icall_no_overrides(v46, v8);
LABEL_24:
    result.QuadPart = *(_QWORD *)(v2 + 208) + v11;
    goto LABEL_8;
  }
  do
  {
    v20 = *(_QWORD *)(v2 + 208);
    do
    {
      v21 = *(_QWORD *)(v2 + 200);
      v22 = HalpTimerGetInternalData(v2);
      v23 = *(__int64 (__fastcall **)(_QWORD))(v2 + 112);
      if ( v23 == HalpHpetQueryCounter )
        v24 = HalpHpetQueryCounter(v22);
      else
        v24 = guard_dispatch_icall_no_overrides(v22, v23);
      v25 = v24;
      _InterlockedOr(v48, 0);
      v26 = *(_QWORD *)(v2 + 200);
    }
    while ( v21 != v26 );
  }
  while ( v20 != *(_QWORD *)(v2 + 208) );
  v27 = *(_DWORD *)(v2 + 220);
  v28 = v21 ^ v25;
  if ( _bittest64((const __int64 *)&v28, (unsigned __int8)(v27 - 1)) )
  {
    if ( v27 == 64 )
      v30 = -1LL;
    else
      v30 = (1LL << v27) - 1;
    v31 = 0LL;
    if ( v27 != 64 )
      v31 = 1LL << v27;
    v32 = v21 & v30;
    v33 = v25 | v21 ^ v32;
    if ( v25 < v32 )
      v33 += v31;
    _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 200), v33, v26);
    result.QuadPart = v20 + v33;
  }
  else
  {
    if ( v27 == 64 )
      v29 = -1LL;
    else
      v29 = (1LL << v27) - 1;
    result.QuadPart = v20 + (v25 | v21 & ~v29);
  }
LABEL_8:
  if ( v2 == HalpOriginalPerformanceCounter || !HalpOriginalPerformanceCounter )
  {
    if ( PerformanceFrequency )
      PerformanceFrequency->QuadPart = v3;
  }
  else
  {
    v18 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
    if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
      v18 = 10000000LL;
    result.QuadPart = HalpTimerScaleCounter(result.QuadPart, v3, v18);
    if ( PerformanceFrequency )
      PerformanceFrequency->QuadPart = v19;
  }
  return result;
}
