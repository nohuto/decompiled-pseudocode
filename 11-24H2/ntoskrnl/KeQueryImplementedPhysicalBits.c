/*
 * XREFs of KeQueryImplementedPhysicalBits @ 0x1405C3720
 * Callers:
 *     KeQueryKvaShadowInformation @ 0x14073C9A0 (KeQueryKvaShadowInformation.c)
 * Callees:
 *     <none>
 */

__int64 KeQueryImplementedPhysicalBits()
{
  return (unsigned int)SpcImplementedPhysicalBits;
}
