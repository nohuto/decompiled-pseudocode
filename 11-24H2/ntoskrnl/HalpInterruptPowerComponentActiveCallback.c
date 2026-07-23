/*
 * XREFs of HalpInterruptPowerComponentActiveCallback @ 0x140554C30
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptPowerChange @ 0x140554B90 (HalpInterruptPowerChange.c)
 */

__int64 __fastcall HalpInterruptPowerComponentActiveCallback(ULONG_PTR a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  return HalpInterruptPowerChange(a1, a2);
}
