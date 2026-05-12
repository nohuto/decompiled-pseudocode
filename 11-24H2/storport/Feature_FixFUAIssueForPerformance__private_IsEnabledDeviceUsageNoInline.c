/*
 * XREFs of Feature_FixFUAIssueForPerformance__private_IsEnabledDeviceUsageNoInline @ 0x1400A5260
 * Callers:
 *     DllInitialize @ 0x1400A3C90 (DllInitialize.c)
 * Callees:
 *     Feature_FixFUAIssueForPerformance__private_IsEnabledFallback @ 0x1400A5298 (Feature_FixFUAIssueForPerformance__private_IsEnabledFallback.c)
 */

__int64 Feature_FixFUAIssueForPerformance__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_FixFUAIssueForPerformance__private_featureState & 0x10) != 0 )
    return Feature_FixFUAIssueForPerformance__private_featureState & 1;
  else
    return Feature_FixFUAIssueForPerformance__private_IsEnabledFallback(
             (unsigned int)Feature_FixFUAIssueForPerformance__private_featureState,
             3LL);
}
