/*
 * XREFs of Feature_ProtectHostAuditGlobals__private_IsEnabledDeviceUsageNoInline @ 0x1406079F8
 * Callers:
 *     SepRmProcessCreationCommandLineAuditSettingsWrkr @ 0x140607B30 (SepRmProcessCreationCommandLineAuditSettingsWrkr.c)
 * Callees:
 *     Feature_ProtectHostAuditGlobals__private_IsEnabledFallback @ 0x140607A30 (Feature_ProtectHostAuditGlobals__private_IsEnabledFallback.c)
 */

__int64 Feature_ProtectHostAuditGlobals__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_ProtectHostAuditGlobals__private_featureState & 0x10) != 0 )
    return Feature_ProtectHostAuditGlobals__private_featureState & 1;
  else
    return Feature_ProtectHostAuditGlobals__private_IsEnabledFallback(
             (unsigned int)Feature_ProtectHostAuditGlobals__private_featureState,
             3LL);
}
