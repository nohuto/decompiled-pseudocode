/*
 * XREFs of Feature_DriverSetup_ReofferFingerprinting_v2__private_IsEnabledDeviceUsageNoInline @ 0x140019CD4
 * Callers:
 *     ApiSetpIsFeatureEnabled @ 0x140019C94 (ApiSetpIsFeatureEnabled.c)
 * Callees:
 *     <none>
 */

__int64 Feature_DriverSetup_ReofferFingerprinting_v2__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DriverSetup_ReofferFingerprinting_v2__private_featureState & 0x10) != 0 )
    return Feature_DriverSetup_ReofferFingerprinting_v2__private_featureState & 1;
  else
    return Feature_DriverSetup_ReofferFingerprinting_v2__private_IsEnabledFallback(
             (unsigned int)Feature_DriverSetup_ReofferFingerprinting_v2__private_featureState,
             3LL);
}
