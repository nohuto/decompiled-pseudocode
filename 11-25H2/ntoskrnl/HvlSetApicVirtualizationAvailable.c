/*
 * XREFs of HvlSetApicVirtualizationAvailable @ 0x14057F95C
 * Callers:
 *     KiSetFeatureBits @ 0x140B49BD0 (KiSetFeatureBits.c)
 * Callees:
 *     <none>
 */

void HvlSetApicVirtualizationAvailable()
{
  HvlpFlags |= 0x1000000u;
}
