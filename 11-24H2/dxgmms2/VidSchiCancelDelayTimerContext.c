/*
 * XREFs of VidSchiCancelDelayTimerContext @ 0x14003E9DC
 * Callers:
 *     VidSchiCancelDelayTimerDevice @ 0x1400A679C (VidSchiCancelDelayTimerDevice.c)
 *     VidSchFlushContext @ 0x140100150 (VidSchFlushContext.c)
 * Callees:
 *     VidSchiDelayReadyRoutine @ 0x14003EA50 (VidSchiDelayReadyRoutine.c)
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
