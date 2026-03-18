/*
 * XREFs of Feature_DisableSecurePool__private_IsEnabledDeviceUsageNoInline @ 0x14058CB14
 * Callers:
 *     VslSecurePoolAllocate @ 0x14058E2EC (VslSecurePoolAllocate.c)
 *     VslSecurePoolCreate @ 0x14058E3FC (VslSecurePoolCreate.c)
 *     VslSecurePoolDestroy @ 0x14058E490 (VslSecurePoolDestroy.c)
 *     VslSecurePoolFree @ 0x14058E508 (VslSecurePoolFree.c)
 *     VslSecurePoolUpdate @ 0x14058E5B4 (VslSecurePoolUpdate.c)
 * Callees:
 *     Feature_DisableSecurePool__private_IsEnabledFallback @ 0x14058CB4C (Feature_DisableSecurePool__private_IsEnabledFallback.c)
 */

__int64 Feature_DisableSecurePool__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DisableSecurePool__private_featureState & 0x10) != 0 )
    return Feature_DisableSecurePool__private_featureState & 1;
  else
    return Feature_DisableSecurePool__private_IsEnabledFallback(
             (unsigned int)Feature_DisableSecurePool__private_featureState,
             3LL);
}
