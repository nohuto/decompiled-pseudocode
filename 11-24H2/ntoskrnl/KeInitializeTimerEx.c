/*
 * XREFs of KeInitializeTimerEx @ 0x1404449F0
 * Callers:
 *     FsRtlpOplockTryPrepForAckTimeout @ 0x140709FE4 (FsRtlpOplockTryPrepForAckTimeout.c)
 *     PiDrvDbCreateNode @ 0x1407347DC (PiDrvDbCreateNode.c)
 *     ExpWorkQueueManagerInitialize @ 0x1407C066C (ExpWorkQueueManagerInitialize.c)
 *     MiInitializeSections @ 0x1407EBD78 (MiInitializeSections.c)
 *     EtwpInitLoggerContext @ 0x1409CFDB8 (EtwpInitLoggerContext.c)
 *     NtCreateTimer @ 0x1409EADF0 (NtCreateTimer.c)
 *     HalpInitGenericErrorSourcePollingRoutine @ 0x140B50258 (HalpInitGenericErrorSourcePollingRoutine.c)
 *     ViPendingDelayCompletion @ 0x140B93E88 (ViPendingDelayCompletion.c)
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
