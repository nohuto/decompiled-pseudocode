/*
 * XREFs of HalpInitSystemPhase0 @ 0x140C0D74C
 * Callers:
 *     HalInitSystem @ 0x140B4B6C0 (HalInitSystem.c)
 * Callees:
 *     HalpInitSystemHelper @ 0x140B4B718 (HalpInitSystemHelper.c)
 */

bool __fastcall HalpInitSystemPhase0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return (int)HalpInitSystemHelper(7u, 16, a1, a4) >= 0;
}
