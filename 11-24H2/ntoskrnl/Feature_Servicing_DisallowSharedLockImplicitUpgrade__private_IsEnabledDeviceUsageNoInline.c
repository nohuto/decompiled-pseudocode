/*
 * XREFs of Feature_Servicing_DisallowSharedLockImplicitUpgrade__private_IsEnabledDeviceUsageNoInline @ 0x140656128
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140C40A64 (ExpInitSystemPhase1.c)
 * Callees:
 *     Feature_Servicing_DisallowSharedLockImplicitUpgrade__private_IsEnabledFallback @ 0x140656160 (Feature_Servicing_DisallowSharedLockImplicitUpgrade__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_DisallowSharedLockImplicitUpgrade__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_DisallowSharedLockImplicitUpgrade__private_featureState & 0x10) != 0 )
    return Feature_Servicing_DisallowSharedLockImplicitUpgrade__private_featureState & 1;
  else
    return Feature_Servicing_DisallowSharedLockImplicitUpgrade__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_DisallowSharedLockImplicitUpgrade__private_featureState,
             3LL);
}
