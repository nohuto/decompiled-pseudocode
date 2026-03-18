/*
 * XREFs of HalpInterruptPowerCriticalTransitionCallback @ 0x140557350
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptPowerChange @ 0x140557250 (HalpInterruptPowerChange.c)
 */

__int64 __fastcall HalpInterruptPowerCriticalTransitionCallback(ULONG_PTR a1, __int64 a2, __int64 a3, __int64 a4)
{
  LOBYTE(a2) = a3;
  return HalpInterruptPowerChange(a1, a2, a3, a4);
}
