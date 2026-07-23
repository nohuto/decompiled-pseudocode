/*
 * XREFs of KeQueryImplementedPhysicalBits @ 0x1405C0CF0
 * Callers:
 *     KeQueryKvaShadowInformation @ 0x14073A8D0 (KeQueryKvaShadowInformation.c)
 * Callees:
 *     <none>
 */

__int64 KeQueryImplementedPhysicalBits()
{
  return (unsigned int)SpcImplementedPhysicalBits;
}
