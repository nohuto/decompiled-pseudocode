/*
 * XREFs of Feature_Servicing_WinDiagCovNullInit__private_IsEnabledDeviceUsageNoInline @ 0x140643920
 * Callers:
 *     EtwpCoverageEnsureContext @ 0x140A57F04 (EtwpCoverageEnsureContext.c)
 * Callees:
 *     Feature_Servicing_WinDiagCovNullInit__private_IsEnabledFallback @ 0x140643958 (Feature_Servicing_WinDiagCovNullInit__private_IsEnabledFallback.c)
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
