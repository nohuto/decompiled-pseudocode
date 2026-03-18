/*
 * XREFs of HalIsHyperThreadingEnabled @ 0x14053F870
 * Callers:
 *     KiSetFeatureBits @ 0x140B49BD0 (KiSetFeatureBits.c)
 * Callees:
 *     <none>
 */

char HalIsHyperThreadingEnabled()
{
  return HalpInterruptHyperThreading;
}
