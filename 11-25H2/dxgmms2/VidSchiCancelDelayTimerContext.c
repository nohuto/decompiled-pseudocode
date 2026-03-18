/*
 * XREFs of VidSchiCancelDelayTimerContext @ 0x140040544
 * Callers:
 *     VidSchiCancelDelayTimerDevice @ 0x1400A4F1C (VidSchiCancelDelayTimerDevice.c)
 *     VidSchFlushContext @ 0x1401008A0 (VidSchFlushContext.c)
 * Callees:
 *     VidSchiDelayReadyRoutine @ 0x1400405C0 (VidSchiDelayReadyRoutine.c)
 */

void __fastcall VidSchiCancelDelayTimerContext(__int64 a1, struct _KTIMER *a2)
{
  KIRQL v3; // bl

  if ( !KeCancelTimer(a2 + 8) )
    KeFlushQueuedDpcs();
  v3 = KfRaiseIrql(2u);
  VidSchiDelayReadyRoutine(0LL, a2, 0LL, 0LL);
  KeLowerIrql(v3);
}
