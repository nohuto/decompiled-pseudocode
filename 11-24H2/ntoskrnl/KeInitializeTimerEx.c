/*
 * XREFs of KeInitializeTimerEx @ 0x14044DAF0
 * Callers:
 *     FsRtlpOplockTryPrepForAckTimeout @ 0x14070C450 (FsRtlpOplockTryPrepForAckTimeout.c)
 *     PiDrvDbCreateNode @ 0x1407368AC (PiDrvDbCreateNode.c)
 *     ExpWorkQueueManagerInitialize @ 0x1407C021C (ExpWorkQueueManagerInitialize.c)
 *     MiInitializeSections @ 0x1407EB7A8 (MiInitializeSections.c)
 *     EtwpInitLoggerContext @ 0x1408309D4 (EtwpInitLoggerContext.c)
 *     NtCreateTimer @ 0x1409F7110 (NtCreateTimer.c)
 *     HalpInitGenericErrorSourcePollingRoutine @ 0x140B4E208 (HalpInitGenericErrorSourcePollingRoutine.c)
 *     ViPendingDelayCompletion @ 0x140B91E88 (ViPendingDelayCompletion.c)
 * Callees:
 *     <none>
 */

void __stdcall KeInitializeTimerEx(PKTIMER Timer, TIMER_TYPE Type)
{
  *(_QWORD *)&Timer->Header.Lock = 0LL;
  Timer->Header.Type = Type + 8;
  Timer->Header.WaitListHead.Blink = &Timer->Header.WaitListHead;
  Timer->Header.WaitListHead.Flink = &Timer->Header.WaitListHead;
  Timer->DueTime.QuadPart = 0LL;
  Timer->Period = 0;
  Timer->Processor = 0;
}
