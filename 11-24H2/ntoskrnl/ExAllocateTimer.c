/*
 * XREFs of ExAllocateTimer @ 0x1403ADEA0
 * Callers:
 *     ExpHeapInitPhase1 @ 0x1406589E0 (ExpHeapInitPhase1.c)
 *     HalpRegisterPmuNotification @ 0x14070084C (HalpRegisterPmuNotification.c)
 *     WdipSemStartTimeoutCheck @ 0x1407A2CF0 (WdipSemStartTimeoutCheck.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1407ADBA0 (EtwpUpdatePeriodicCaptureState.c)
 *     CreateTlgAggregateSession @ 0x140824E0C (CreateTlgAggregateSession.c)
 *     WdtpAllocateTimer @ 0x140A15248 (WdtpAllocateTimer.c)
 *     sub_140BE30B0 @ 0x140BE30B0 (sub_140BE30B0.c)
 *     CmFcManagerStartRuntimePhase @ 0x140C4F31C (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     ExAllocateTimerInternal2 @ 0x1403ADEE0 (ExAllocateTimerInternal2.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall ExAllocateTimer(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( (a3 & 2) != 0 )
    KeBugCheckEx(0xC7u, 9uLL, 0LL, a3, 0LL);
  return ExAllocateTimerInternal2(a1, a2, 0LL, a3);
}
