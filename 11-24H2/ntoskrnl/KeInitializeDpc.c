/*
 * XREFs of KeInitializeDpc @ 0x14044A220
 * Callers:
 *     FsRtlpOplockTryPrepForAckTimeout @ 0x140709FE4 (FsRtlpOplockTryPrepForAckTimeout.c)
 *     PiDrvDbCreateNode @ 0x1407347DC (PiDrvDbCreateNode.c)
 *     KeInitializeSecondaryInterruptServices @ 0x14073A4C0 (KeInitializeSecondaryInterruptServices.c)
 *     KiInitializeSingleDpcRuntimeHistoryHashTable @ 0x14073AE58 (KiInitializeSingleDpcRuntimeHistoryHashTable.c)
 *     PopSetSystemAwayMode @ 0x1407520E0 (PopSetSystemAwayMode.c)
 *     TtmiCreateTerminal @ 0x14076F708 (TtmiCreateTerminal.c)
 *     TtmiInitTerminals @ 0x14076FA00 (TtmiInitTerminals.c)
 *     EtwpCovSampCaptureContextStart @ 0x1407B23EC (EtwpCovSampCaptureContextStart.c)
 *     CmpCmdInit @ 0x1407D5C78 (CmpCmdInit.c)
 *     CmpInitializeLazyWriters @ 0x1407DF6B4 (CmpInitializeLazyWriters.c)
 *     MiInitializePartition @ 0x1407ECD28 (MiInitializePartition.c)
 *     PspProcessDelete @ 0x1408FFC10 (PspProcessDelete.c)
 *     PfSnBeginTrace @ 0x14094A598 (PfSnBeginTrace.c)
 *     PfSnPowerBoostInitialize @ 0x14094AAF8 (PfSnPowerBoostInitialize.c)
 *     IopConnectInterrupt @ 0x1409C0880 (IopConnectInterrupt.c)
 *     ObpProcessRemoveObjectQueue @ 0x1409C2460 (ObpProcessRemoveObjectQueue.c)
 *     EtwpInitLoggerContext @ 0x1409CFDB8 (EtwpInitLoggerContext.c)
 *     NtCreateTimer @ 0x1409EADF0 (NtCreateTimer.c)
 *     IopErrorLogQueueRequest @ 0x140A40394 (IopErrorLogQueueRequest.c)
 *     KeInitializeTimerTable @ 0x140A75E0C (KeInitializeTimerTable.c)
 *     KiInitializeForceIdle @ 0x140A75F3C (KiInitializeForceIdle.c)
 *     ExpInitializeTimeChangeWorker @ 0x140A7A504 (ExpInitializeTimeChangeWorker.c)
 *     IopAllocatePassiveInterruptBlock @ 0x140AA6280 (IopAllocatePassiveInterruptBlock.c)
 *     NtSetInformationJobObject @ 0x140ACC7F0 (NtSetInformationJobObject.c)
 *     PspThreadDelete @ 0x140ACF4E0 (PspThreadDelete.c)
 *     HalpMcaInitializePcrContext @ 0x140B4DDF0 (HalpMcaInitializePcrContext.c)
 *     HalpIommuInitSystem @ 0x140B4F5A0 (HalpIommuInitSystem.c)
 *     HalpInitGenericErrorSourcePollingRoutine @ 0x140B50258 (HalpInitGenericErrorSourcePollingRoutine.c)
 *     PnprQuiesceProcessors @ 0x140B56BC4 (PnprQuiesceProcessors.c)
 *     KiCompleteKernelInit @ 0x140B57CA0 (KiCompleteKernelInit.c)
 *     KiInitPrcb @ 0x140B58254 (KiInitPrcb.c)
 *     KiInitializeProcessor @ 0x140B5861C (KiInitializeProcessor.c)
 *     PoInitializePrcb @ 0x140B61F64 (PoInitializePrcb.c)
 *     PopEndMirroring @ 0x140B66770 (PopEndMirroring.c)
 *     PopInvokeSystemStateHandler @ 0x140B6766C (PopInvokeSystemStateHandler.c)
 *     PopBuildDeviceNotifyList @ 0x140B6AED8 (PopBuildDeviceNotifyList.c)
 *     PfpStartLoggingHardFaultEvents @ 0x140B6F6D0 (PfpStartLoggingHardFaultEvents.c)
 *     PfSnAllocateEnablePrefetcherTimer @ 0x140B6FBB8 (PfSnAllocateEnablePrefetcherTimer.c)
 *     KdInitSystem @ 0x140B77E30 (KdInitSystem.c)
 *     ViPendingDelayCompletion @ 0x140B93E88 (ViPendingDelayCompletion.c)
 *     ViShutdownScheduleWatchdog @ 0x140B96E00 (ViShutdownScheduleWatchdog.c)
 *     VfWdInit @ 0x140B9E8F8 (VfWdInit.c)
 *     AnFwProgressIndicatorTransition @ 0x140BB2008 (AnFwProgressIndicatorTransition.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140BB3E44 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwDisplayProgressIndicator @ 0x140BB3FD0 (AnFwDisplayProgressIndicator.c)
 *     AnFwDisplayFade @ 0x140BB56EC (AnFwDisplayFade.c)
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
