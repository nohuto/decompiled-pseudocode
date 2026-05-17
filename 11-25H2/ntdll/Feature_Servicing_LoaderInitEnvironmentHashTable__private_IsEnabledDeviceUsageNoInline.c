/*
 * XREFs of Feature_Servicing_LoaderInitEnvironmentHashTable__private_IsEnabledDeviceUsageNoInline @ 0x18011E708
 * Callers:
 *     RtlpInitEnvironmentBlock @ 0x1800E587C (RtlpInitEnvironmentBlock.c)
 *     RtlpSetupEnvironmentHashTable @ 0x1800E61A4 (RtlpSetupEnvironmentHashTable.c)
 * Callees:
 *     <none>
 */

__int64 Feature_Servicing_LoaderInitEnvironmentHashTable__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_LoaderInitEnvironmentHashTable__private_featureState & 0x10) != 0 )
    return Feature_Servicing_LoaderInitEnvironmentHashTable__private_featureState & 1;
  else
    return Feature_Servicing_LoaderInitEnvironmentHashTable__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_LoaderInitEnvironmentHashTable__private_featureState,
             3LL);
}
