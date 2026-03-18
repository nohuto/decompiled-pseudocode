/*
 * XREFs of KeQueryImplementedPhysicalBits @ 0x1405BF640
 * Callers:
 *     KeQueryKvaShadowInformation @ 0x140730980 (KeQueryKvaShadowInformation.c)
 * Callees:
 *     <none>
 */

__int64 KeQueryImplementedPhysicalBits()
{
  return (unsigned int)SpcImplementedPhysicalBits;
}
