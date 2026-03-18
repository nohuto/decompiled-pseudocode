/*
 * XREFs of Feature_191927608__private_IsEnabledDeviceUsageNoInline @ 0x14004DC14
 * Callers:
 *     ?HandleFullPageTableCoverage@VIDMM_PAGE_DIRECTORY@@QEAAEPEAVCVirtualAddressAllocator@@PEBU_DXGK_GPUMMUCAPS@@PEBUCOMMIT_VA_STATE@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@III_KPEAE5@Z @ 0x1401142DC (-HandleFullPageTableCoverage@VIDMM_PAGE_DIRECTORY@@QEAAEPEAVCVirtualAddressAllocator@@PEBU_DXGK_.c)
 * Callees:
 *     Feature_191927608__private_IsEnabledFallback @ 0x14004DC4C (Feature_191927608__private_IsEnabledFallback.c)
 */

__int64 Feature_191927608__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_191927608__private_featureState & 0x10) != 0 )
    return Feature_191927608__private_featureState & 1;
  else
    return Feature_191927608__private_IsEnabledFallback((unsigned int)Feature_191927608__private_featureState, 3LL);
}
