/*
 * XREFs of HalpInterruptIsProcessorCacheFlushOptimizationSupported @ 0x140556E3C
 * Callers:
 *     HalpInterruptAllocateCacheDomainTable @ 0x14055691C (HalpInterruptAllocateCacheDomainTable.c)
 *     HalpInterruptDetermineProcessorStartupFlags @ 0x140556D3C (HalpInterruptDetermineProcessorStartupFlags.c)
 * Callees:
 *     HalpGetCpuInfo @ 0x140487890 (HalpGetCpuInfo.c)
 */

bool HalpInterruptIsProcessorCacheFlushOptimizationSupported()
{
  unsigned __int8 v1; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int8 v2; // [rsp+38h] [rbp+10h] BYREF
  unsigned __int8 v3; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v3 = 0;
  v1 = 0;
  if ( HalpGetCpuInfo((char *)&v2, 0LL, &v3, &v1) && v1 == 2 )
  {
    if ( v2 > 0xFu )
      return 1;
    if ( v2 == 6 )
    {
      if ( v3 != 0x8F && v3 != 0xAD )
        return v3 == 0xAE;
      return 1;
    }
  }
  return 0;
}
