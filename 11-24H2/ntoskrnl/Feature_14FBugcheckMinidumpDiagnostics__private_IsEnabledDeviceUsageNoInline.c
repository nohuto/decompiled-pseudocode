/*
 * XREFs of Feature_14FBugcheckMinidumpDiagnostics__private_IsEnabledDeviceUsageNoInline @ 0x140590ACC
 * Callers:
 *     IopAddBugcheckTriageDataFromParameters @ 0x140592F50 (IopAddBugcheckTriageDataFromParameters.c)
 *     KiCollectTriageDumpDataBlocks @ 0x1405B33A8 (KiCollectTriageDumpDataBlocks.c)
 *     PopPdcRegister @ 0x140ABEFF8 (PopPdcRegister.c)
 * Callees:
 *     Feature_14FBugcheckMinidumpDiagnostics__private_IsEnabledFallback @ 0x140590B04 (Feature_14FBugcheckMinidumpDiagnostics__private_IsEnabledFallback.c)
 */

__int64 Feature_14FBugcheckMinidumpDiagnostics__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_14FBugcheckMinidumpDiagnostics__private_featureState & 0x10) != 0 )
    return Feature_14FBugcheckMinidumpDiagnostics__private_featureState & 1;
  else
    return Feature_14FBugcheckMinidumpDiagnostics__private_IsEnabledFallback(
             (unsigned int)Feature_14FBugcheckMinidumpDiagnostics__private_featureState,
             3LL);
}
