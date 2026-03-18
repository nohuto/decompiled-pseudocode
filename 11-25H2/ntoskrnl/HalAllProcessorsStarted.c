/*
 * XREFs of HalAllProcessorsStarted @ 0x140BFC6B0
 * Callers:
 *     Phase1InitializationDiscard @ 0x140BFB048 (Phase1InitializationDiscard.c)
 * Callees:
 *     HalpInitSystemHelper @ 0x140B3B718 (HalpInitSystemHelper.c)
 */

bool HalAllProcessorsStarted()
{
  return (int)HalpInitSystemHelper(0x15u, 22) >= 0;
}
