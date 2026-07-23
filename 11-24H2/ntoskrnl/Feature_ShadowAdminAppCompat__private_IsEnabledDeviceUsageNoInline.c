/*
 * XREFs of Feature_ShadowAdminAppCompat__private_IsEnabledDeviceUsageNoInline @ 0x140605A40
 * Callers:
 *     SepDuplicateToken @ 0x1408527E0 (SepDuplicateToken.c)
 *     SeQueryInformationToken @ 0x1408E4F90 (SeQueryInformationToken.c)
 *     SepFilterToken @ 0x140985C1C (SepFilterToken.c)
 *     NtSetInformationToken @ 0x140AD4280 (NtSetInformationToken.c)
 * Callees:
 *     Feature_ShadowAdminAppCompat__private_IsEnabledFallback @ 0x140605A78 (Feature_ShadowAdminAppCompat__private_IsEnabledFallback.c)
 */

__int64 Feature_ShadowAdminAppCompat__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_ShadowAdminAppCompat__private_featureState & 0x10) != 0 )
    return Feature_ShadowAdminAppCompat__private_featureState & 1;
  else
    return Feature_ShadowAdminAppCompat__private_IsEnabledFallback(
             (unsigned int)Feature_ShadowAdminAppCompat__private_featureState,
             3LL);
}
