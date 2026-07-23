/*
 * XREFs of HvlRescindEnlightenments @ 0x140588CCC
 * Callers:
 *     KiEnableKvaShadowing @ 0x140B5C8EC (KiEnableKvaShadowing.c)
 * Callees:
 *     <none>
 */

void HvlRescindEnlightenments()
{
  _InterlockedOr(&HvlpRescindedEnlightenments, 1u);
  _InterlockedAnd(&HvlEnlightenments, 0xFFFFFFFE);
  _InterlockedAnd((volatile signed __int32 *)&HvlpEnlightenments, 0xFFFFFFFE);
}
