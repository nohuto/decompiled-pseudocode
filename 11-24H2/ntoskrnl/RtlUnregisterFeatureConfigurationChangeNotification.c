/*
 * XREFs of RtlUnregisterFeatureConfigurationChangeNotification @ 0x140781CD0
 * Callers:
 *     <none>
 * Callees:
 *     CmFcManagerUnregisterFeatureConfigurationChangeNotification @ 0x1407E4BAC (CmFcManagerUnregisterFeatureConfigurationChangeNotification.c)
 */

NTSTATUS __cdecl RtlUnregisterFeatureConfigurationChangeNotification(
        RTL_FEATURE_CONFIGURATION_CHANGE_REGISTRATION RegistrationHandle)
{
  return CmFcManagerUnregisterFeatureConfigurationChangeNotification(RegistrationHandle, RegistrationHandle);
}
