/*
 * XREFs of KeInitializeTimerEx @ 0x14044DC30
 * Callers:
 *     FsRtlpOplockTryPrepForAckTimeout @ 0x140700570 (FsRtlpOplockTryPrepForAckTimeout.c)
 *     PiDrvDbCreateNode @ 0x14072A61C (PiDrvDbCreateNode.c)
 *     ExpWorkQueueManagerInitialize @ 0x1407B0A4C (ExpWorkQueueManagerInitialize.c)
 *     MiInitializeSections @ 0x1407DB908 (MiInitializeSections.c)
 *     NtCreateTimer @ 0x1409FAF30 (NtCreateTimer.c)
 *     EtwpInitLoggerContext @ 0x140A388E4 (EtwpInitLoggerContext.c)
 *     HalpInitGenericErrorSourcePollingRoutine @ 0x140B3E208 (HalpInitGenericErrorSourcePollingRoutine.c)
 *     ViPendingDelayCompletion @ 0x140B81EA8 (ViPendingDelayCompletion.c)
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
