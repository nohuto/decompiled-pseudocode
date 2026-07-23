/*
 * XREFs of HalIsHyperThreadingEnabled @ 0x14053F9F0
 * Callers:
 *     KiSetFeatureBits @ 0x140B5BC74 (KiSetFeatureBits.c)
 * Callees:
 *     <none>
 */

char HalIsHyperThreadingEnabled()
{
  return HalpInterruptHyperThreading;
}
