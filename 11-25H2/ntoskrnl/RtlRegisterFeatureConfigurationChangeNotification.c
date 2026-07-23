/*
 * XREFs of RtlRegisterFeatureConfigurationChangeNotification @ 0x1404CC0F0
 * Callers:
 *     wil_details_RegisterFeatureStagingChangeNotification @ 0x1407C69CC (wil_details_RegisterFeatureStagingChangeNotification.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x140256C10 (ObGetCurrentIrql.c)
 *     CmFcRegisterFeatureConfigurationChangeNotification @ 0x1406EF278 (CmFcRegisterFeatureConfigurationChangeNotification.c)
 */

NTSTATUS __cdecl RtlRegisterFeatureConfigurationChangeNotification(
        PRTL_FEATURE_CONFIGURATION_CHANGE_CALLBACK Callback,
        PVOID Context,
        PRTL_FEATURE_CHANGE_STAMP ObservedChangeStamp,
        PRTL_FEATURE_CONFIGURATION_CHANGE_REGISTRATION RegistrationHandle)
{
  if ( ObGetCurrentIrql() && ((KiBugCheckActive & 3) != 0 || PoPowerDownActionInProgress) )
    return -1073741637;
  else
    return CmFcRegisterFeatureConfigurationChangeNotification(
             Callback,
             Context,
             ObservedChangeStamp,
             RegistrationHandle);
}
