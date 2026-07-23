/*
 * XREFs of RtlRegisterFeatureConfigurationChangeNotification @ 0x1404C5390
 * Callers:
 *     wil_details_RegisterFeatureStagingChangeNotification @ 0x1407D666C (wil_details_RegisterFeatureStagingChangeNotification.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x1402883D0 (KeGetEffectiveIrql.c)
 *     CmFcRegisterFeatureConfigurationChangeNotification @ 0x1406F8CF8 (CmFcRegisterFeatureConfigurationChangeNotification.c)
 */

NTSTATUS __cdecl RtlRegisterFeatureConfigurationChangeNotification(
        PRTL_FEATURE_CONFIGURATION_CHANGE_CALLBACK Callback,
        PVOID Context,
        PRTL_FEATURE_CHANGE_STAMP ObservedChangeStamp,
        PRTL_FEATURE_CONFIGURATION_CHANGE_REGISTRATION RegistrationHandle)
{
  if ( KeGetEffectiveIrql((__int64)Callback, (__int64)Context)
    && ((KiBugCheckActive & 3) != 0 || PoPowerDownActionInProgress) )
  {
    return -1073741637;
  }
  else
  {
    return CmFcRegisterFeatureConfigurationChangeNotification(
             Callback,
             Context,
             ObservedChangeStamp,
             RegistrationHandle);
  }
}
