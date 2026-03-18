/*
 * XREFs of KeGetRecommendedSharedDataAlignment @ 0x1404882F0
 * Callers:
 *     ExAllocateCacheAwareRundownProtection @ 0x14099F340 (ExAllocateCacheAwareRundownProtection.c)
 *     ExpQuerySystemInformation @ 0x1409DB5B0 (ExpQuerySystemInformation.c)
 *     ExInitializeRundownProtectionCacheAware @ 0x140A195A0 (ExInitializeRundownProtectionCacheAware.c)
 *     ExSizeOfRundownProtectionCacheAware @ 0x140AA1B00 (ExSizeOfRundownProtectionCacheAware.c)
 * Callees:
 *     <none>
 */

ULONG KeGetRecommendedSharedDataAlignment(void)
{
  return KeLargestCacheLine;
}
