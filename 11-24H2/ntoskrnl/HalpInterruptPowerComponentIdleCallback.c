/*
 * XREFs of HalpInterruptPowerComponentIdleCallback @ 0x140557310
 * Callers:
 *     <none>
 * Callees:
 *     PoFxCompleteIdleCondition @ 0x1404592B0 (PoFxCompleteIdleCondition.c)
 *     HalpInterruptPowerChange @ 0x140557250 (HalpInterruptPowerChange.c)
 */

__int64 __fastcall HalpInterruptPowerComponentIdleCallback(ULONG_PTR a1, unsigned int a2, __int64 a3, __int64 a4)
{
  HalpInterruptPowerChange(a1, 0LL, a3, a4);
  return PoFxCompleteIdleCondition(*(_QWORD *)(a1 + 368), a2);
}
