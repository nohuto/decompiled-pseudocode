/*
 * XREFs of HvlSetApicVirtualizationAvailable @ 0x14058048C
 * Callers:
 *     KiSetFeatureBits @ 0x140B5BC74 (KiSetFeatureBits.c)
 * Callees:
 *     <none>
 */

void HvlSetApicVirtualizationAvailable()
{
  HvlpFlags |= 0x1000000u;
}
