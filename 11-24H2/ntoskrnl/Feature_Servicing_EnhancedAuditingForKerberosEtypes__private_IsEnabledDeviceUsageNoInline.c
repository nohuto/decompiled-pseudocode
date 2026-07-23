/*
 * XREFs of Feature_Servicing_EnhancedAuditingForKerberosEtypes__private_IsEnabledDeviceUsageNoInline @ 0x140697FBC
 * Callers:
 *     AdtpWriteToEtw @ 0x140AEB4C0 (AdtpWriteToEtw.c)
 * Callees:
 *     Feature_Servicing_EnhancedAuditingForKerberosEtypes__private_IsEnabledFallback @ 0x140697FF4 (Feature_Servicing_EnhancedAuditingForKerberosEtypes__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_EnhancedAuditingForKerberosEtypes__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_EnhancedAuditingForKerberosEtypes__private_featureState & 0x10) != 0 )
    return Feature_Servicing_EnhancedAuditingForKerberosEtypes__private_featureState & 1;
  else
    return Feature_Servicing_EnhancedAuditingForKerberosEtypes__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_EnhancedAuditingForKerberosEtypes__private_featureState,
             3LL);
}
