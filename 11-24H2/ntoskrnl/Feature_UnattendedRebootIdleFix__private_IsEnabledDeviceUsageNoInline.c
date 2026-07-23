/*
 * XREFs of Feature_UnattendedRebootIdleFix__private_IsEnabledDeviceUsageNoInline @ 0x1405D8120
 * Callers:
 *     PopAdaptiveConsoleSessionOverrideClear @ 0x14075E15C (PopAdaptiveConsoleSessionOverrideClear.c)
 *     PopInitializeAdpm @ 0x140C357A4 (PopInitializeAdpm.c)
 * Callees:
 *     Feature_UnattendedRebootIdleFix__private_IsEnabledFallback @ 0x1405D8158 (Feature_UnattendedRebootIdleFix__private_IsEnabledFallback.c)
 */

__int64 Feature_UnattendedRebootIdleFix__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_UnattendedRebootIdleFix__private_featureState & 0x10) != 0 )
    return Feature_UnattendedRebootIdleFix__private_featureState & 1;
  else
    return Feature_UnattendedRebootIdleFix__private_IsEnabledFallback(
             (unsigned int)Feature_UnattendedRebootIdleFix__private_featureState,
             3LL);
}
