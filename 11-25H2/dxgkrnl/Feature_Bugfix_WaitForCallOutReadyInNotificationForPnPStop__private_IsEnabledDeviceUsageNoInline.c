/*
 * XREFs of Feature_Bugfix_WaitForCallOutReadyInNotificationForPnPStop__private_IsEnabledDeviceUsageNoInline @ 0x14007D5C4
 * Callers:
 *     DpiFdoStopAdapter @ 0x1402412FC (DpiFdoStopAdapter.c)
 * Callees:
 *     Feature_Bugfix_WaitForCallOutReadyInNotificationForPnPStop__private_IsEnabledFallback @ 0x14007D5FC (Feature_Bugfix_WaitForCallOutReadyInNotificationForPnPStop__private_IsEnabledFallback.c)
 */

__int64 Feature_Bugfix_WaitForCallOutReadyInNotificationForPnPStop__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Bugfix_WaitForCallOutReadyInNotificationForPnPStop__private_featureState & 0x10) != 0 )
    return Feature_Bugfix_WaitForCallOutReadyInNotificationForPnPStop__private_featureState & 1;
  else
    return Feature_Bugfix_WaitForCallOutReadyInNotificationForPnPStop__private_IsEnabledFallback(
             (unsigned int)Feature_Bugfix_WaitForCallOutReadyInNotificationForPnPStop__private_featureState,
             3LL);
}
