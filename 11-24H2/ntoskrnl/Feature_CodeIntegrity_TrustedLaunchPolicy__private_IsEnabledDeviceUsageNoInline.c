/*
 * XREFs of Feature_CodeIntegrity_TrustedLaunchPolicy__private_IsEnabledDeviceUsageNoInline @ 0x1406057AC
 * Callers:
 *     SeQuerySigningPolicyWorker @ 0x1409FA8F8 (SeQuerySigningPolicyWorker.c)
 * Callees:
 *     Feature_CodeIntegrity_TrustedLaunchPolicy__private_IsEnabledFallback @ 0x1406057E4 (Feature_CodeIntegrity_TrustedLaunchPolicy__private_IsEnabledFallback.c)
 */

__int64 Feature_CodeIntegrity_TrustedLaunchPolicy__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_CodeIntegrity_TrustedLaunchPolicy__private_featureState & 0x10) != 0 )
    return Feature_CodeIntegrity_TrustedLaunchPolicy__private_featureState & 1;
  else
    return Feature_CodeIntegrity_TrustedLaunchPolicy__private_IsEnabledFallback(
             (unsigned int)Feature_CodeIntegrity_TrustedLaunchPolicy__private_featureState,
             3LL);
}
