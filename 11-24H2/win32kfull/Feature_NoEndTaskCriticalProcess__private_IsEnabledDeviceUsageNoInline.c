/*
 * XREFs of Feature_NoEndTaskCriticalProcess__private_IsEnabledDeviceUsageNoInline @ 0x140292624
 * Callers:
 *     NtUserCheckWindowThreadDesktop @ 0x140292DB0 (NtUserCheckWindowThreadDesktop.c)
 * Callees:
 *     Feature_NoEndTaskCriticalProcess__private_IsEnabledFallback @ 0x14029265C (Feature_NoEndTaskCriticalProcess__private_IsEnabledFallback.c)
 */

__int64 Feature_NoEndTaskCriticalProcess__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_NoEndTaskCriticalProcess__private_featureState & 0x10) != 0 )
    return Feature_NoEndTaskCriticalProcess__private_featureState & 1;
  else
    return Feature_NoEndTaskCriticalProcess__private_IsEnabledFallback(
             (unsigned int)Feature_NoEndTaskCriticalProcess__private_featureState,
             3LL);
}
