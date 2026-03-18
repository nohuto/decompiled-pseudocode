/*
 * XREFs of Feature_TrustedLaunch__private_IsEnabledDeviceUsageNoInline @ 0x1405FBE64
 * Callers:
 *     SeQuerySigningPolicyWorker @ 0x140AC8B10 (SeQuerySigningPolicyWorker.c)
 * Callees:
 *     Feature_TrustedLaunch__private_IsEnabledFallback @ 0x1405FBE9C (Feature_TrustedLaunch__private_IsEnabledFallback.c)
 */

__int64 Feature_TrustedLaunch__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_TrustedLaunch__private_featureState & 0x10) != 0 )
    return Feature_TrustedLaunch__private_featureState & 1;
  else
    return Feature_TrustedLaunch__private_IsEnabledFallback(
             (unsigned int)Feature_TrustedLaunch__private_featureState,
             3LL);
}
