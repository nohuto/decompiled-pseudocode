/*
 * XREFs of Feature_FixPerformanceIssueWithTRIM__private_IsEnabledDeviceUsageNoInline @ 0x1400A535C
 * Callers:
 *     DllInitialize @ 0x1400A3C90 (DllInitialize.c)
 * Callees:
 *     Feature_FixPerformanceIssueWithTRIM__private_IsEnabledFallback @ 0x1400A5394 (Feature_FixPerformanceIssueWithTRIM__private_IsEnabledFallback.c)
 */

__int64 Feature_FixPerformanceIssueWithTRIM__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_FixPerformanceIssueWithTRIM__private_featureState & 0x10) != 0 )
    return Feature_FixPerformanceIssueWithTRIM__private_featureState & 1;
  else
    return Feature_FixPerformanceIssueWithTRIM__private_IsEnabledFallback(
             (unsigned int)Feature_FixPerformanceIssueWithTRIM__private_featureState,
             3LL);
}
