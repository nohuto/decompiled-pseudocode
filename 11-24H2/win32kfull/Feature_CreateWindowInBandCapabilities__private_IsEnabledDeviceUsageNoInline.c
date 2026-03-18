/*
 * XREFs of Feature_CreateWindowInBandCapabilities__private_IsEnabledDeviceUsageNoInline @ 0x1402B4700
 * Callers:
 *     ?IsValidBandForProcess@@YA_NPEBUtagPROCESSINFO@@W4ZBID@@PEAUtagWND@@@Z @ 0x1402B4358 (-IsValidBandForProcess@@YA_NPEBUtagPROCESSINFO@@W4ZBID@@PEAUtagWND@@@Z.c)
 * Callees:
 *     Feature_CreateWindowInBandCapabilities__private_IsEnabledFallback @ 0x1402B4738 (Feature_CreateWindowInBandCapabilities__private_IsEnabledFallback.c)
 */

__int64 Feature_CreateWindowInBandCapabilities__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_CreateWindowInBandCapabilities__private_featureState & 0x10) != 0 )
    return Feature_CreateWindowInBandCapabilities__private_featureState & 1;
  else
    return Feature_CreateWindowInBandCapabilities__private_IsEnabledFallback(
             (unsigned int)Feature_CreateWindowInBandCapabilities__private_featureState,
             3LL);
}
