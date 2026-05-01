/*
 * XREFs of Feature_CrmDeveloperQuietMode__private_IsEnabledDeviceUsageNoInline @ 0x18006FF04
 * Callers:
 *     CrmActivityStart @ 0x18002D920 (CrmActivityStart.c)
 *     CrmRegistrationNotifyWindowClosedReasonChange @ 0x18002FED8 (CrmRegistrationNotifyWindowClosedReasonChange.c)
 *     CrmComparisonRoutineDeveloperQuietModeOff @ 0x18006FED0 (CrmComparisonRoutineDeveloperQuietModeOff.c)
 * Callees:
 *     <none>
 */

__int64 Feature_CrmDeveloperQuietMode__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_CrmDeveloperQuietMode__private_featureState & 0x10) != 0 )
    return Feature_CrmDeveloperQuietMode__private_featureState & 1;
  else
    return Feature_CrmDeveloperQuietMode__private_IsEnabledFallback(
             (unsigned int)Feature_CrmDeveloperQuietMode__private_featureState,
             3LL);
}
