/*
 * XREFs of Feature_Servicing_EnhancedAuditingForKerberosEtypes__private_IsEnabledDeviceUsageNoInline @ 0x140696F3C
 * Callers:
 *     AdtpWriteToEtw @ 0x140AE821C (AdtpWriteToEtw.c)
 * Callees:
 *     Feature_Servicing_EnhancedAuditingForKerberosEtypes__private_IsEnabledFallback @ 0x140696F74 (Feature_Servicing_EnhancedAuditingForKerberosEtypes__private_IsEnabledFallback.c)
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
