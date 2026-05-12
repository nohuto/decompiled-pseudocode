/*
 * XREFs of Feature_FixKcsanRacyAccessIssues__private_IsEnabledDeviceUsageNoInline @ 0x1400A5308
 * Callers:
 *     DllInitialize @ 0x1400A3C90 (DllInitialize.c)
 * Callees:
 *     Feature_FixKcsanRacyAccessIssues__private_IsEnabledFallback @ 0x1400A5340 (Feature_FixKcsanRacyAccessIssues__private_IsEnabledFallback.c)
 */

__int64 Feature_FixKcsanRacyAccessIssues__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_FixKcsanRacyAccessIssues__private_featureState & 0x10) != 0 )
    return Feature_FixKcsanRacyAccessIssues__private_featureState & 1;
  else
    return Feature_FixKcsanRacyAccessIssues__private_IsEnabledFallback(
             (unsigned int)Feature_FixKcsanRacyAccessIssues__private_featureState,
             3LL);
}
