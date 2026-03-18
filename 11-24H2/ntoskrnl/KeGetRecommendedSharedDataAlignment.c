/*
 * XREFs of KeGetRecommendedSharedDataAlignment @ 0x1404882E0
 * Callers:
 *     ExAllocateCacheAwareRundownProtection @ 0x1409A4220 (ExAllocateCacheAwareRundownProtection.c)
 *     ExInitializeRundownProtectionCacheAware @ 0x140A23F10 (ExInitializeRundownProtectionCacheAware.c)
 *     ExSizeOfRundownProtectionCacheAware @ 0x140AA6EA0 (ExSizeOfRundownProtectionCacheAware.c)
 *     ExpQuerySystemInformation @ 0x140ADC240 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

ULONG KeGetRecommendedSharedDataAlignment(void)
{
  return KeLargestCacheLine;
}
