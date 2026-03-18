/*
 * XREFs of ExAllocateTimer @ 0x14036F160
 * Callers:
 *     ExpHeapInitPhase1 @ 0x14064E480 (ExpHeapInitPhase1.c)
 *     HalpRegisterPmuNotification @ 0x1406F6E1C (HalpRegisterPmuNotification.c)
 *     WdipSemStartTimeoutCheck @ 0x140793808 (WdipSemStartTimeoutCheck.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x14079E37C (EtwpUpdatePeriodicCaptureState.c)
 *     CreateTlgAggregateSession @ 0x14081488C (CreateTlgAggregateSession.c)
 *     WdtpAllocateTimer @ 0x140A15418 (WdtpAllocateTimer.c)
 *     sub_140BD00B0 @ 0x140BD00B0 (sub_140BD00B0.c)
 *     CmFcManagerStartRuntimePhase @ 0x140C3BE84 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     ExAllocateTimerInternal2 @ 0x14036F1A0 (ExAllocateTimerInternal2.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall ExAllocateTimer(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( (a3 & 2) != 0 )
    KeBugCheckEx(0xC7u, 9uLL, 0LL, a3, 0LL);
  return ExAllocateTimerInternal2(a1, a2, 0LL, a3);
}
