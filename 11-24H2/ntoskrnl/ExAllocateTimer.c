/*
 * XREFs of ExAllocateTimer @ 0x1403BF2E0
 * Callers:
 *     ExpHeapInitPhase1 @ 0x14065A310 (ExpHeapInitPhase1.c)
 *     HalpRegisterPmuNotification @ 0x140702C0C (HalpRegisterPmuNotification.c)
 *     WdipSemStartTimeoutCheck @ 0x1407A2BE0 (WdipSemStartTimeoutCheck.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1407AD74C (EtwpUpdatePeriodicCaptureState.c)
 *     CreateTlgAggregateSession @ 0x1408246AC (CreateTlgAggregateSession.c)
 *     WdtpAllocateTimer @ 0x140A20148 (WdtpAllocateTimer.c)
 *     sub_140BE10B0 @ 0x140BE10B0 (sub_140BE10B0.c)
 *     CmFcManagerStartRuntimePhase @ 0x140C4D180 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     ExAllocateTimerInternal2 @ 0x1403BF320 (ExAllocateTimerInternal2.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall ExAllocateTimer(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( (a3 & 2) != 0 )
    KeBugCheckEx(0xC7u, 9uLL, 0LL, a3, 0LL);
  return ExAllocateTimerInternal2(a1, a2, 0LL, a3);
}
