/*
 * XREFs of Feature_TrustedLaunch__private_IsEnabledDeviceUsageNoInline @ 0x1404F2264
 * Callers:
 *     SeQuerySigningPolicyWorker @ 0x1409FA8F8 (SeQuerySigningPolicyWorker.c)
 * Callees:
 *     Feature_TrustedLaunch__private_IsEnabledFallback @ 0x140605854 (Feature_TrustedLaunch__private_IsEnabledFallback.c)
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
