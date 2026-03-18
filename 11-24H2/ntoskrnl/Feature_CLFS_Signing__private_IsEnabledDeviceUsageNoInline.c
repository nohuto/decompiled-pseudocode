/*
 * XREFs of Feature_CLFS_Signing__private_IsEnabledDeviceUsageNoInline @ 0x140668394
 * Callers:
 *     CmpInitCmRM @ 0x140AE4D94 (CmpInitCmRM.c)
 *     CmpStartRMLog @ 0x140AE5884 (CmpStartRMLog.c)
 *     CmpStartCLFSLog @ 0x140AE5E28 (CmpStartCLFSLog.c)
 * Callees:
 *     Feature_CLFS_Signing__private_IsEnabledFallback @ 0x1406683CC (Feature_CLFS_Signing__private_IsEnabledFallback.c)
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
