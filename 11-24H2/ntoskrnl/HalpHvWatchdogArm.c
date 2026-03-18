/*
 * XREFs of HalpHvWatchdogArm @ 0x1403BC810
 * Callers:
 *     HalpTimerClockArm @ 0x1403BC1E0 (HalpTimerClockArm.c)
 *     HalpSetTimer @ 0x1403BC5B0 (HalpSetTimer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpHvWatchdogArm(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __writemsr(0x40000111u, a3);
  return 0LL;
}
