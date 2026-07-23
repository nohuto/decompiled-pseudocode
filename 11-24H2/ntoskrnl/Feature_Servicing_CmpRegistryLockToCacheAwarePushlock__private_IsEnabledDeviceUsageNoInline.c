/*
 * XREFs of Feature_Servicing_CmpRegistryLockToCacheAwarePushlock__private_IsEnabledDeviceUsageNoInline @ 0x140666124
 * Callers:
 *     CmInitSystem1 @ 0x140C47010 (CmInitSystem1.c)
 * Callees:
 *     Feature_Servicing_CmpRegistryLockToCacheAwarePushlock__private_IsEnabledFallback @ 0x14066615C (Feature_Servicing_CmpRegistryLockToCacheAwarePushlock__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_CmpRegistryLockToCacheAwarePushlock__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_CmpRegistryLockToCacheAwarePushlock__private_featureState & 0x10) != 0 )
    return Feature_Servicing_CmpRegistryLockToCacheAwarePushlock__private_featureState & 1;
  else
    return Feature_Servicing_CmpRegistryLockToCacheAwarePushlock__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_CmpRegistryLockToCacheAwarePushlock__private_featureState,
             3LL);
}
