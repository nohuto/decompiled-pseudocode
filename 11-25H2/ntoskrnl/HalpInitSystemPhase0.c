/*
 * XREFs of HalpInitSystemPhase0 @ 0x140BFC74C
 * Callers:
 *     HalInitSystem @ 0x140B3B6C0 (HalInitSystem.c)
 * Callees:
 *     HalpInitSystemHelper @ 0x140B3B718 (HalpInitSystemHelper.c)
 */

bool HalpInitSystemPhase0()
{
  return (int)HalpInitSystemHelper(7u, 16) >= 0;
}
