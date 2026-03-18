/*
 * XREFs of KeInitializeTimer @ 0x140455420
 * Callers:
 *     TtmiCreateTerminal @ 0x14076F4E8 (TtmiCreateTerminal.c)
 *     TtmiInitTerminals @ 0x14076F7E0 (TtmiInitTerminals.c)
 *     CmpCmdInit @ 0x1407D5788 (CmpCmdInit.c)
 *     CmpInitializeLazyWriters @ 0x1407DF164 (CmpInitializeLazyWriters.c)
 *     MiInitializePartition @ 0x1407EC758 (MiInitializePartition.c)
 *     PfSnBeginTrace @ 0x140962AD8 (PfSnBeginTrace.c)
 *     PfSnPowerBoostInitialize @ 0x140963038 (PfSnPowerBoostInitialize.c)
 *     ExpInitializeTimeChangeWorker @ 0x1409DD2A8 (ExpInitializeTimeChangeWorker.c)
 *     IopErrorLogQueueRequest @ 0x140A49674 (IopErrorLogQueueRequest.c)
 *     KeInitThread @ 0x140B69230 (KeInitThread.c)
 *     PopBuildDeviceNotifyList @ 0x140B697C8 (PopBuildDeviceNotifyList.c)
 *     PfpStartLoggingHardFaultEvents @ 0x140B6DE30 (PfpStartLoggingHardFaultEvents.c)
 *     PfSnAllocateEnablePrefetcherTimer @ 0x140B6E118 (PfSnAllocateEnablePrefetcherTimer.c)
 *     KdInitSystem @ 0x140B75E30 (KdInitSystem.c)
 *     ViShutdownScheduleWatchdog @ 0x140B94E00 (ViShutdownScheduleWatchdog.c)
 *     VfWdInit @ 0x140B9C8F8 (VfWdInit.c)
 *     AnFwProgressIndicatorTransition @ 0x140BB0008 (AnFwProgressIndicatorTransition.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140BB1E44 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwDisplayProgressIndicator @ 0x140BB1FD0 (AnFwDisplayProgressIndicator.c)
 *     AnFwDisplayFade @ 0x140BB36EC (AnFwDisplayFade.c)
 *     CcInitializeBcbProfiler @ 0x140BDEC74 (CcInitializeBcbProfiler.c)
 *     sub_140BE10B0 @ 0x140BE10B0 (sub_140BE10B0.c)
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
