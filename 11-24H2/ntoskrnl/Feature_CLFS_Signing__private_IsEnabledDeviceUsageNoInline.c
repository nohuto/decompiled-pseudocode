/*
 * XREFs of Feature_CLFS_Signing__private_IsEnabledDeviceUsageNoInline @ 0x140666C84
 * Callers:
 *     CmpInitCmRM @ 0x140AE6674 (CmpInitCmRM.c)
 *     CmpStartRMLog @ 0x140AE7164 (CmpStartRMLog.c)
 *     CmpStartCLFSLog @ 0x140AE7708 (CmpStartCLFSLog.c)
 * Callees:
 *     Feature_CLFS_Signing__private_IsEnabledFallback @ 0x140666CBC (Feature_CLFS_Signing__private_IsEnabledFallback.c)
 */

__int64 Feature_CLFS_Signing__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_CLFS_Signing__private_featureState & 0x10) != 0 )
    return Feature_CLFS_Signing__private_featureState & 1;
  else
    return Feature_CLFS_Signing__private_IsEnabledFallback(
             (unsigned int)Feature_CLFS_Signing__private_featureState,
             3LL);
}
