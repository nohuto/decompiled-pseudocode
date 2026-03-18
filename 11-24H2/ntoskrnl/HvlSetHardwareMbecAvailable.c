/*
 * XREFs of HvlSetHardwareMbecAvailable @ 0x14058311C
 * Callers:
 *     KiSetFeatureBits @ 0x140B59BF4 (KiSetFeatureBits.c)
 * Callees:
 *     <none>
 */

void HvlSetHardwareMbecAvailable()
{
  HvlpFlags |= 0x20000u;
}
