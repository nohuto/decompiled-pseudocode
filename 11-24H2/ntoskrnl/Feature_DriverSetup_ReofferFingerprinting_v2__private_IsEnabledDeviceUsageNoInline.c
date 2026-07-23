/*
 * XREFs of Feature_DriverSetup_ReofferFingerprinting_v2__private_IsEnabledDeviceUsageNoInline @ 0x1406609D0
 * Callers:
 *     ApiSetpIsFeatureEnabled @ 0x140660990 (ApiSetpIsFeatureEnabled.c)
 * Callees:
 *     Feature_DriverSetup_ReofferFingerprinting_v2__private_IsEnabledFallback @ 0x140660A08 (Feature_DriverSetup_ReofferFingerprinting_v2__private_IsEnabledFallback.c)
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
