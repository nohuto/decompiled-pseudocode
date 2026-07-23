/*
 * XREFs of Feature_TrustedLaunchCiClaim__private_IsEnabledDeviceUsageNoInline @ 0x140605FBC
 * Callers:
 *     SepDesktopAppxSubProcessToken @ 0x1404EBED4 (SepDesktopAppxSubProcessToken.c)
 * Callees:
 *     Feature_TrustedLaunchCiClaim__private_IsEnabledFallback @ 0x140605FF4 (Feature_TrustedLaunchCiClaim__private_IsEnabledFallback.c)
 */

__int64 Feature_TrustedLaunchCiClaim__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_TrustedLaunchCiClaim__private_featureState & 0x10) != 0 )
    return Feature_TrustedLaunchCiClaim__private_featureState & 1;
  else
    return Feature_TrustedLaunchCiClaim__private_IsEnabledFallback(
             (unsigned int)Feature_TrustedLaunchCiClaim__private_featureState,
             3LL);
}
