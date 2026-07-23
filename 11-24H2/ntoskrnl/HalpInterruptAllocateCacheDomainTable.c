/*
 * XREFs of HalpInterruptAllocateCacheDomainTable @ 0x14055691C
 * Callers:
 *     HalpInterruptInitSystem @ 0x140B4F310 (HalpInterruptInitSystem.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14027C378 (HalpMmAllocCtxAlloc.c)
 *     HalQueryMaximumProcessorCount @ 0x140375540 (HalQueryMaximumProcessorCount.c)
 *     HalpInterruptIsProcessorCacheFlushOptimizationSupported @ 0x140556E3C (HalpInterruptIsProcessorCacheFlushOptimizationSupported.c)
 */

__int64 HalpInterruptAllocateCacheDomainTable()
{
  __int64 result; // rax
  __int64 v1; // rcx
  unsigned int MaximumProcessorCount; // ebx
  unsigned int v3; // ebx

  result = HalpInterruptIsProcessorCacheFlushOptimizationSupported();
  if ( (_BYTE)result )
  {
    MaximumProcessorCount = HalQueryMaximumProcessorCount();
    result = 256LL;
    v3 = MaximumProcessorCount >> 1;
    if ( v3 >= 0x100 )
    {
      v3 = 256;
    }
    else if ( !v3 )
    {
      return result;
    }
    result = HalpMmAllocCtxAlloc(v1, 8LL * v3);
    qword_140F8FA58 = result;
    if ( result )
      HalpCacheDomainTable = v3;
  }
  return result;
}
