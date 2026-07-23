/*
 * XREFs of HalpInterruptPowerComponentIdleCallback @ 0x140554C50
 * Callers:
 *     <none>
 * Callees:
 *     PoFxCompleteIdleCondition @ 0x14044E360 (PoFxCompleteIdleCondition.c)
 *     HalpInterruptPowerChange @ 0x140554B90 (HalpInterruptPowerChange.c)
 */

__int64 __fastcall HalpInterruptPowerComponentIdleCallback(ULONG_PTR a1, unsigned int a2)
{
  HalpInterruptPowerChange(a1, 0LL);
  return PoFxCompleteIdleCondition(*(_QWORD *)(a1 + 368), a2);
}
