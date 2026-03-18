/*
 * XREFs of KeInitializeDpc @ 0x140455470
 * Callers:
 *     FsRtlpOplockTryPrepForAckTimeout @ 0x14070C450 (FsRtlpOplockTryPrepForAckTimeout.c)
 *     PiDrvDbCreateNode @ 0x1407368AC (PiDrvDbCreateNode.c)
 *     KeInitializeSecondaryInterruptServices @ 0x14073C590 (KeInitializeSecondaryInterruptServices.c)
 *     KiInitializeSingleDpcRuntimeHistoryHashTable @ 0x14073CF28 (KiInitializeSingleDpcRuntimeHistoryHashTable.c)
 *     PopSetSystemAwayMode @ 0x140753DC0 (PopSetSystemAwayMode.c)
 *     TtmiCreateTerminal @ 0x14076F4E8 (TtmiCreateTerminal.c)
 *     TtmiInitTerminals @ 0x14076F7E0 (TtmiInitTerminals.c)
 *     EtwpCovSampCaptureContextStart @ 0x1407B1F9C (EtwpCovSampCaptureContextStart.c)
 *     CmpCmdInit @ 0x1407D5788 (CmpCmdInit.c)
 *     CmpInitializeLazyWriters @ 0x1407DF164 (CmpInitializeLazyWriters.c)
 *     MiInitializePartition @ 0x1407EC758 (MiInitializePartition.c)
 *     EtwpInitLoggerContext @ 0x1408309D4 (EtwpInitLoggerContext.c)
 *     PspProcessDelete @ 0x1408A99B0 (PspProcessDelete.c)
 *     PfSnBeginTrace @ 0x140962AD8 (PfSnBeginTrace.c)
 *     PfSnPowerBoostInitialize @ 0x140963038 (PfSnPowerBoostInitialize.c)
 *     ObpProcessRemoveObjectQueue @ 0x1409D2630 (ObpProcessRemoveObjectQueue.c)
 *     ExpInitializeTimeChangeWorker @ 0x1409DD2A8 (ExpInitializeTimeChangeWorker.c)
 *     NtCreateTimer @ 0x1409F7110 (NtCreateTimer.c)
 *     IopConnectInterrupt @ 0x140A12470 (IopConnectInterrupt.c)
 *     IopErrorLogQueueRequest @ 0x140A49674 (IopErrorLogQueueRequest.c)
 *     KeInitializeTimerTable @ 0x140A7BB0C (KeInitializeTimerTable.c)
 *     KiInitializeForceIdle @ 0x140A7BC3C (KiInitializeForceIdle.c)
 *     IopAllocatePassiveInterruptBlock @ 0x140AAB050 (IopAllocatePassiveInterruptBlock.c)
 *     NtSetInformationJobObject @ 0x140ACE760 (NtSetInformationJobObject.c)
 *     PspThreadDelete @ 0x140AD1250 (PspThreadDelete.c)
 *     HalpMcaInitializePcrContext @ 0x140B4BDB0 (HalpMcaInitializePcrContext.c)
 *     HalpIommuInitSystem @ 0x140B4D550 (HalpIommuInitSystem.c)
 *     HalpInitGenericErrorSourcePollingRoutine @ 0x140B4E208 (HalpInitGenericErrorSourcePollingRoutine.c)
 *     PnprQuiesceProcessors @ 0x140B54B74 (PnprQuiesceProcessors.c)
 *     KiCompleteKernelInit @ 0x140B55C50 (KiCompleteKernelInit.c)
 *     KiInitPrcb @ 0x140B56204 (KiInitPrcb.c)
 *     KiInitializeProcessor @ 0x140B565CC (KiInitializeProcessor.c)
 *     PoInitializePrcb @ 0x140B5FE98 (PoInitializePrcb.c)
 *     PopEndMirroring @ 0x140B64660 (PopEndMirroring.c)
 *     PopInvokeSystemStateHandler @ 0x140B6552C (PopInvokeSystemStateHandler.c)
 *     PopBuildDeviceNotifyList @ 0x140B697C8 (PopBuildDeviceNotifyList.c)
 *     PfpStartLoggingHardFaultEvents @ 0x140B6DE30 (PfpStartLoggingHardFaultEvents.c)
 *     PfSnAllocateEnablePrefetcherTimer @ 0x140B6E118 (PfSnAllocateEnablePrefetcherTimer.c)
 *     KdInitSystem @ 0x140B75E30 (KdInitSystem.c)
 *     ViPendingDelayCompletion @ 0x140B91E88 (ViPendingDelayCompletion.c)
 *     ViShutdownScheduleWatchdog @ 0x140B94E00 (ViShutdownScheduleWatchdog.c)
 *     VfWdInit @ 0x140B9C8F8 (VfWdInit.c)
 *     AnFwProgressIndicatorTransition @ 0x140BB0008 (AnFwProgressIndicatorTransition.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140BB1E44 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwDisplayProgressIndicator @ 0x140BB1FD0 (AnFwDisplayProgressIndicator.c)
 *     AnFwDisplayFade @ 0x140BB36EC (AnFwDisplayFade.c)
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
