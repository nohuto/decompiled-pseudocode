/*
 * XREFs of Feature_Bugfix_ClearNonVgaSupportAfterStopDevice__private_IsEnabledDeviceUsageNoInline @ 0x14007D570
 * Callers:
 *     DpiFdoStartAdapter @ 0x14023E8A8 (DpiFdoStartAdapter.c)
 * Callees:
 *     Feature_Bugfix_ClearNonVgaSupportAfterStopDevice__private_IsEnabledFallback @ 0x14007D5A8 (Feature_Bugfix_ClearNonVgaSupportAfterStopDevice__private_IsEnabledFallback.c)
 */

__int64 Feature_Bugfix_ClearNonVgaSupportAfterStopDevice__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Bugfix_ClearNonVgaSupportAfterStopDevice__private_featureState & 0x10) != 0 )
    return Feature_Bugfix_ClearNonVgaSupportAfterStopDevice__private_featureState & 1;
  else
    return Feature_Bugfix_ClearNonVgaSupportAfterStopDevice__private_IsEnabledFallback(
             (unsigned int)Feature_Bugfix_ClearNonVgaSupportAfterStopDevice__private_featureState,
             3LL);
}
