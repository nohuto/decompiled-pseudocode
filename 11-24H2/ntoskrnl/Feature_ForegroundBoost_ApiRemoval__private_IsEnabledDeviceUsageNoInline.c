/*
 * XREFs of Feature_ForegroundBoost_ApiRemoval__private_IsEnabledDeviceUsageNoInline @ 0x1404AD368
 * Callers:
 *     NtSetInformationProcess @ 0x140947500 (NtSetInformationProcess.c)
 * Callees:
 *     Feature_ForegroundBoost_ApiRemoval__private_IsEnabledFallback @ 0x1405E55C0 (Feature_ForegroundBoost_ApiRemoval__private_IsEnabledFallback.c)
 */

__int64 Feature_ForegroundBoost_ApiRemoval__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_ForegroundBoost_ApiRemoval__private_featureState & 0x10) != 0 )
    return Feature_ForegroundBoost_ApiRemoval__private_featureState & 1;
  else
    return Feature_ForegroundBoost_ApiRemoval__private_IsEnabledFallback(
             (unsigned int)Feature_ForegroundBoost_ApiRemoval__private_featureState,
             3LL);
}
