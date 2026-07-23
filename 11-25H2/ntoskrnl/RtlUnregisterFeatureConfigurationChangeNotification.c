/*
 * XREFs of RtlUnregisterFeatureConfigurationChangeNotification @ 0x140772B50
 * Callers:
 *     <none>
 * Callees:
 *     CmFcManagerUnregisterFeatureConfigurationChangeNotification @ 0x1407D4D7C (CmFcManagerUnregisterFeatureConfigurationChangeNotification.c)
 */

NTSTATUS __cdecl RtlUnregisterFeatureConfigurationChangeNotification(
        RTL_FEATURE_CONFIGURATION_CHANGE_REGISTRATION RegistrationHandle)
{
  return CmFcManagerUnregisterFeatureConfigurationChangeNotification(RegistrationHandle, RegistrationHandle);
}
