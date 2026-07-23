/*
 * XREFs of Feature_Servicing_ZwTerminateMinimalProcess_Terminate_Fix__private_IsEnabledDeviceUsageNoInline @ 0x1405E35D0
 * Callers:
 *     NtTerminateProcess @ 0x140ACF260 (NtTerminateProcess.c)
 * Callees:
 *     Feature_Servicing_ZwTerminateMinimalProcess_Terminate_Fix__private_IsEnabledFallback @ 0x1405E3608 (Feature_Servicing_ZwTerminateMinimalProcess_Terminate_Fix__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_ZwTerminateMinimalProcess_Terminate_Fix__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_ZwTerminateMinimalProcess_Terminate_Fix__private_featureState & 0x10) != 0 )
    return Feature_Servicing_ZwTerminateMinimalProcess_Terminate_Fix__private_featureState & 1;
  else
    return Feature_Servicing_ZwTerminateMinimalProcess_Terminate_Fix__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_ZwTerminateMinimalProcess_Terminate_Fix__private_featureState,
             3LL);
}
