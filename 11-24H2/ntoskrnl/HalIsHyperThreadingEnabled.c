/*
 * XREFs of HalIsHyperThreadingEnabled @ 0x1405420A0
 * Callers:
 *     KiSetFeatureBits @ 0x140B59BF4 (KiSetFeatureBits.c)
 * Callees:
 *     <none>
 */

char HalIsHyperThreadingEnabled()
{
  return HalpInterruptHyperThreading;
}
