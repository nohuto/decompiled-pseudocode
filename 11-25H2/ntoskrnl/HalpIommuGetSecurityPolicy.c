/*
 * XREFs of HalpIommuGetSecurityPolicy @ 0x1404F8600
 * Callers:
 *     HalpDmaAllocateChildAdapterV3 @ 0x1406F0ED0 (HalpDmaAllocateChildAdapterV3.c)
 *     HalpDmaGetRemappingInformation @ 0x1406F4290 (HalpDmaGetRemappingInformation.c)
 * Callees:
 *     <none>
 */

__int64 HalpIommuGetSecurityPolicy()
{
  return (unsigned int)HalpIommuSecurityPolicy;
}
