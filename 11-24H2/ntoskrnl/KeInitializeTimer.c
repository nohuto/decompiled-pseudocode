/*
 * XREFs of KeInitializeTimer @ 0x14044A0E0
 * Callers:
 *     TtmiCreateTerminal @ 0x14076F708 (TtmiCreateTerminal.c)
 *     TtmiInitTerminals @ 0x14076FA00 (TtmiInitTerminals.c)
 *     CmpCmdInit @ 0x1407D5C78 (CmpCmdInit.c)
 *     CmpInitializeLazyWriters @ 0x1407DF6B4 (CmpInitializeLazyWriters.c)
 *     MiInitializePartition @ 0x1407ECD28 (MiInitializePartition.c)
 *     PfSnBeginTrace @ 0x14094A598 (PfSnBeginTrace.c)
 *     PfSnPowerBoostInitialize @ 0x14094AAF8 (PfSnPowerBoostInitialize.c)
 *     IopErrorLogQueueRequest @ 0x140A40394 (IopErrorLogQueueRequest.c)
 *     ExpInitializeTimeChangeWorker @ 0x140A7A504 (ExpInitializeTimeChangeWorker.c)
 *     KeInitThread @ 0x140B6A948 (KeInitThread.c)
 *     PopBuildDeviceNotifyList @ 0x140B6AED8 (PopBuildDeviceNotifyList.c)
 *     PfpStartLoggingHardFaultEvents @ 0x140B6F6D0 (PfpStartLoggingHardFaultEvents.c)
 *     PfSnAllocateEnablePrefetcherTimer @ 0x140B6FBB8 (PfSnAllocateEnablePrefetcherTimer.c)
 *     KdInitSystem @ 0x140B77E30 (KdInitSystem.c)
 *     ViShutdownScheduleWatchdog @ 0x140B96E00 (ViShutdownScheduleWatchdog.c)
 *     VfWdInit @ 0x140B9E8F8 (VfWdInit.c)
 *     AnFwProgressIndicatorTransition @ 0x140BB2008 (AnFwProgressIndicatorTransition.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140BB3E44 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwDisplayProgressIndicator @ 0x140BB3FD0 (AnFwDisplayProgressIndicator.c)
 *     AnFwDisplayFade @ 0x140BB56EC (AnFwDisplayFade.c)
 *     CcInitializeBcbProfiler @ 0x140BE0C74 (CcInitializeBcbProfiler.c)
 *     sub_140BE30B0 @ 0x140BE30B0 (sub_140BE30B0.c)
 * Callees:
 *     <none>
 */

void __stdcall KeInitializeTimer(PKTIMER Timer)
{
  *(_QWORD *)&Timer->Header.Lock = 0LL;
  Timer->Header.Type = 8;
  Timer->Header.WaitListHead.Blink = &Timer->Header.WaitListHead;
  Timer->Header.WaitListHead.Flink = &Timer->Header.WaitListHead;
  Timer->DueTime.QuadPart = 0LL;
  Timer->Period = 0;
  Timer->Processor = 0;
}
