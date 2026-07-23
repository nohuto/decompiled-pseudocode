/*
 * XREFs of HalpInitSystemPhase0 @ 0x140C0F74C
 * Callers:
 *     HalInitSystem @ 0x140B4D700 (HalInitSystem.c)
 * Callees:
 *     HalpInitSystemHelper @ 0x140B4D758 (HalpInitSystemHelper.c)
 */

bool HalpInitSystemPhase0()
{
  return (int)HalpInitSystemHelper(7u, 16) >= 0;
}
