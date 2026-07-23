/*
 * XREFs of RtlUnregisterFeatureConfigurationChangeNotification @ 0x1800F2630
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFcRemoveChangeRegistration @ 0x1800F2660 (RtlpFcRemoveChangeRegistration.c)
 *     RtlpFcFreeChangeRegistration @ 0x1800F26AC (RtlpFcFreeChangeRegistration.c)
 */

NTSTATUS __cdecl RtlUnregisterFeatureConfigurationChangeNotification(
        RTL_FEATURE_CONFIGURATION_CHANGE_REGISTRATION RegistrationHandle)
{
  NTSTATUS result; // eax

  if ( !byte_1801D1908 )
  {
    RtlpFcRemoveChangeRegistration(RegistrationHandle, RegistrationHandle);
    return RtlpFcFreeChangeRegistration(RegistrationHandle);
  }
  return result;
}
