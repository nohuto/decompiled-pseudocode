/*
 * XREFs of KeInitializeDpc @ 0x140454E30
 * Callers:
 *     FsRtlpOplockTryPrepForAckTimeout @ 0x140700570 (FsRtlpOplockTryPrepForAckTimeout.c)
 *     PiDrvDbCreateNode @ 0x14072A61C (PiDrvDbCreateNode.c)
 *     KeInitializeSecondaryInterruptServices @ 0x140730300 (KeInitializeSecondaryInterruptServices.c)
 *     KiInitializeSingleDpcRuntimeHistoryHashTable @ 0x140730F08 (KiInitializeSingleDpcRuntimeHistoryHashTable.c)
 *     PopSetSystemAwayMode @ 0x140747CD0 (PopSetSystemAwayMode.c)
 *     TtmiCreateTerminal @ 0x14075FB28 (TtmiCreateTerminal.c)
 *     TtmiInitTerminals @ 0x14075FE20 (TtmiInitTerminals.c)
 *     EtwpCovSampCaptureContextStart @ 0x1407A2BCC (EtwpCovSampCaptureContextStart.c)
 *     CmpCmdInit @ 0x1407C603C (CmpCmdInit.c)
 *     CmpInitializeLazyWriters @ 0x1407CF88C (CmpInitializeLazyWriters.c)
 *     MiInitializePartition @ 0x1407DC8B8 (MiInitializePartition.c)
 *     PfSnBeginTrace @ 0x140828318 (PfSnBeginTrace.c)
 *     PfSnPowerBoostInitialize @ 0x140828878 (PfSnPowerBoostInitialize.c)
 *     PspProcessDelete @ 0x1408E1310 (PspProcessDelete.c)
 *     ExpInitializeTimeChangeWorker @ 0x1409946FC (ExpInitializeTimeChangeWorker.c)
 *     IopConnectInterrupt @ 0x1409A29B0 (IopConnectInterrupt.c)
 *     ObpProcessRemoveObjectQueue @ 0x1409CF320 (ObpProcessRemoveObjectQueue.c)
 *     NtCreateTimer @ 0x1409FAF30 (NtCreateTimer.c)
 *     EtwpInitLoggerContext @ 0x140A388E4 (EtwpInitLoggerContext.c)
 *     IopErrorLogQueueRequest @ 0x140A44D9C (IopErrorLogQueueRequest.c)
 *     KeInitializeTimerTable @ 0x140A79D74 (KeInitializeTimerTable.c)
 *     KiInitializeForceIdle @ 0x140A79EA4 (KiInitializeForceIdle.c)
 *     IopAllocatePassiveInterruptBlock @ 0x140AA5A90 (IopAllocatePassiveInterruptBlock.c)
 *     NtSetInformationJobObject @ 0x140AC4C00 (NtSetInformationJobObject.c)
 *     PspThreadDelete @ 0x140AC7750 (PspThreadDelete.c)
 *     HalpMcaInitializePcrContext @ 0x140B3BDB0 (HalpMcaInitializePcrContext.c)
 *     HalpIommuInitSystem @ 0x140B3D550 (HalpIommuInitSystem.c)
 *     HalpInitGenericErrorSourcePollingRoutine @ 0x140B3E208 (HalpInitGenericErrorSourcePollingRoutine.c)
 *     PnprQuiesceProcessors @ 0x140B44B74 (PnprQuiesceProcessors.c)
 *     KiCompleteKernelInit @ 0x140B45C50 (KiCompleteKernelInit.c)
 *     KiInitPrcb @ 0x140B46260 (KiInitPrcb.c)
 *     KiInitializeProcessor @ 0x140B46628 (KiInitializeProcessor.c)
 *     PoInitializePrcb @ 0x140B4FD6C (PoInitializePrcb.c)
 *     PopEndMirroring @ 0x140B54550 (PopEndMirroring.c)
 *     PopInvokeSystemStateHandler @ 0x140B5541C (PopInvokeSystemStateHandler.c)
 *     PopBuildDeviceNotifyList @ 0x140B59988 (PopBuildDeviceNotifyList.c)
 *     PfpStartLoggingHardFaultEvents @ 0x140B5ED84 (PfpStartLoggingHardFaultEvents.c)
 *     PfSnAllocateEnablePrefetcherTimer @ 0x140B5F06C (PfSnAllocateEnablePrefetcherTimer.c)
 *     KdInitSystem @ 0x140B65E30 (KdInitSystem.c)
 *     ViPendingDelayCompletion @ 0x140B81EA8 (ViPendingDelayCompletion.c)
 *     ViShutdownScheduleWatchdog @ 0x140B84E20 (ViShutdownScheduleWatchdog.c)
 *     VfWdInit @ 0x140B8C918 (VfWdInit.c)
 *     AnFwProgressIndicatorTransition @ 0x140BA0008 (AnFwProgressIndicatorTransition.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140BA1E44 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwDisplayProgressIndicator @ 0x140BA1FD0 (AnFwDisplayProgressIndicator.c)
 *     AnFwDisplayFade @ 0x140BA36EC (AnFwDisplayFade.c)
 * Callees:
 *     <none>
 */

void __stdcall KeInitializeDpc(PRKDPC Dpc, PKDEFERRED_ROUTINE DeferredRoutine, PVOID DeferredContext)
{
  Dpc->TargetInfoAsUlong = 275;
  Dpc->DpcData = 0LL;
  Dpc->ProcessorHistory = 0LL;
  Dpc->DeferredRoutine = DeferredRoutine;
  Dpc->DeferredContext = DeferredContext;
}
