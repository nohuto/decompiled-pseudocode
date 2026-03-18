/*
 * XREFs of HvlSetHardwareMbecAvailable @ 0x14057F96C
 * Callers:
 *     KiSetFeatureBits @ 0x140B49BD0 (KiSetFeatureBits.c)
 * Callees:
 *     <none>
 */

void HvlSetHardwareMbecAvailable()
{
  HvlpFlags |= 0x20000u;
}
