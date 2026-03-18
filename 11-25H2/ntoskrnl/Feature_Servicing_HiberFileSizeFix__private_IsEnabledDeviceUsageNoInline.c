/*
 * XREFs of Feature_Servicing_HiberFileSizeFix__private_IsEnabledDeviceUsageNoInline @ 0x1405CE944
 * Callers:
 *     PopCreateHiberFile @ 0x140745C64 (PopCreateHiberFile.c)
 * Callees:
 *     Feature_Servicing_HiberFileSizeFix__private_IsEnabledFallback @ 0x1405CE97C (Feature_Servicing_HiberFileSizeFix__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_HiberFileSizeFix__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_HiberFileSizeFix__private_featureState & 0x10) != 0 )
    return Feature_Servicing_HiberFileSizeFix__private_featureState & 1;
  else
    return Feature_Servicing_HiberFileSizeFix__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_HiberFileSizeFix__private_featureState,
             3LL);
}
