/*
 * XREFs of HalpTimerPowerCriticalTransitionCallback @ 0x140545EF0
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerPowerChange @ 0x140545DD0 (HalpTimerPowerChange.c)
 */

void __fastcall HalpTimerPowerCriticalTransitionCallback(ULONG_PTR a1, __int64 a2, char a3)
{
  HalpTimerPowerChange(a1, a3);
}
