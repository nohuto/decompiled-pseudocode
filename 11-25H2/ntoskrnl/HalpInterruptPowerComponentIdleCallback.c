/*
 * XREFs of HalpInterruptPowerComponentIdleCallback @ 0x140554A10
 * Callers:
 *     <none>
 * Callees:
 *     PoFxCompleteIdleCondition @ 0x140458A80 (PoFxCompleteIdleCondition.c)
 *     HalpInterruptPowerChange @ 0x140554950 (HalpInterruptPowerChange.c)
 */

__int64 __fastcall HalpInterruptPowerComponentIdleCallback(ULONG_PTR a1, unsigned int a2)
{
  HalpInterruptPowerChange(a1, 0);
  return PoFxCompleteIdleCondition(*(_QWORD **)(a1 + 368), a2);
}
