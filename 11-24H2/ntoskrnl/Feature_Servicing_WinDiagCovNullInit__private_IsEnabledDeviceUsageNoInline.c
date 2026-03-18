/*
 * XREFs of Feature_Servicing_WinDiagCovNullInit__private_IsEnabledDeviceUsageNoInline @ 0x14064F8C0
 * Callers:
 *     EtwpCoverageEnsureContext @ 0x140903F90 (EtwpCoverageEnsureContext.c)
 * Callees:
 *     Feature_Servicing_WinDiagCovNullInit__private_IsEnabledFallback @ 0x14064F8F8 (Feature_Servicing_WinDiagCovNullInit__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_WinDiagCovNullInit__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_WinDiagCovNullInit__private_featureState & 0x10) != 0 )
    return Feature_Servicing_WinDiagCovNullInit__private_featureState & 1;
  else
    return Feature_Servicing_WinDiagCovNullInit__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_WinDiagCovNullInit__private_featureState,
             3LL);
}
