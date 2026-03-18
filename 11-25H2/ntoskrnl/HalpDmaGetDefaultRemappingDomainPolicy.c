/*
 * XREFs of HalpDmaGetDefaultRemappingDomainPolicy @ 0x140539E84
 * Callers:
 *     HalpDmaAllocateChildAdapterV3 @ 0x1406F0ED0 (HalpDmaAllocateChildAdapterV3.c)
 * Callees:
 *     HalpGetCpuInfo @ 0x14048D3A0 (HalpGetCpuInfo.c)
 *     Feature_Test57481295__private_IsEnabledDeviceUsageNoInline @ 0x14053997C (Feature_Test57481295__private_IsEnabledDeviceUsageNoInline.c)
 *     IommupHvIsStage1DmarCompatible @ 0x140563830 (IommupHvIsStage1DmarCompatible.c)
 */

_BOOL8 __fastcall HalpDmaGetDefaultRemappingDomainPolicy(__int64 a1)
{
  unsigned __int8 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  return (unsigned int)Feature_Test57481295__private_IsEnabledDeviceUsageNoInline()
      && HalpGetCpuInfo(0LL, 0LL, 0LL, &v3)
      && v3 == 2
      && (!HalpHvIommu || (unsigned __int8)IommupHvIsStage1DmarCompatible(a1, 0LL));
}
