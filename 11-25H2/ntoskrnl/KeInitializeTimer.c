/*
 * XREFs of KeInitializeTimer @ 0x140454D20
 * Callers:
 *     TtmiCreateTerminal @ 0x14075FB28 (TtmiCreateTerminal.c)
 *     TtmiInitTerminals @ 0x14075FE20 (TtmiInitTerminals.c)
 *     CmpCmdInit @ 0x1407C603C (CmpCmdInit.c)
 *     CmpInitializeLazyWriters @ 0x1407CF88C (CmpInitializeLazyWriters.c)
 *     MiInitializePartition @ 0x1407DC8B8 (MiInitializePartition.c)
 *     PfSnBeginTrace @ 0x140828318 (PfSnBeginTrace.c)
 *     PfSnPowerBoostInitialize @ 0x140828878 (PfSnPowerBoostInitialize.c)
 *     ExpInitializeTimeChangeWorker @ 0x1409946FC (ExpInitializeTimeChangeWorker.c)
 *     IopErrorLogQueueRequest @ 0x140A44D9C (IopErrorLogQueueRequest.c)
 *     KeInitThread @ 0x140B59400 (KeInitThread.c)
 *     PopBuildDeviceNotifyList @ 0x140B59988 (PopBuildDeviceNotifyList.c)
 *     PfpStartLoggingHardFaultEvents @ 0x140B5ED84 (PfpStartLoggingHardFaultEvents.c)
 *     PfSnAllocateEnablePrefetcherTimer @ 0x140B5F06C (PfSnAllocateEnablePrefetcherTimer.c)
 *     KdInitSystem @ 0x140B65E30 (KdInitSystem.c)
 *     ViShutdownScheduleWatchdog @ 0x140B84E20 (ViShutdownScheduleWatchdog.c)
 *     VfWdInit @ 0x140B8C918 (VfWdInit.c)
 *     AnFwProgressIndicatorTransition @ 0x140BA0008 (AnFwProgressIndicatorTransition.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140BA1E44 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwDisplayProgressIndicator @ 0x140BA1FD0 (AnFwDisplayProgressIndicator.c)
 *     AnFwDisplayFade @ 0x140BA36EC (AnFwDisplayFade.c)
 *     CcInitializeBcbProfiler @ 0x140BCDC74 (CcInitializeBcbProfiler.c)
 *     sub_140BD00B0 @ 0x140BD00B0 (sub_140BD00B0.c)
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
