/*
 * XREFs of HvlSetApicVirtualizationAvailable @ 0x14058310C
 * Callers:
 *     KiSetFeatureBits @ 0x140B59BF4 (KiSetFeatureBits.c)
 * Callees:
 *     <none>
 */

void HvlSetApicVirtualizationAvailable()
{
  HvlpFlags |= 0x1000000u;
}
