/*
 * XREFs of Feature_CLFS_Signing__private_IsEnabledDeviceUsageNoInline @ 0x14065C8C4
 * Callers:
 *     CmpInitCmRM @ 0x140AD3ED8 (CmpInitCmRM.c)
 *     CmpStartRMLog @ 0x140AD49C8 (CmpStartRMLog.c)
 *     CmpStartCLFSLog @ 0x140AD5500 (CmpStartCLFSLog.c)
 * Callees:
 *     Feature_CLFS_Signing__private_IsEnabledFallback @ 0x14065C8FC (Feature_CLFS_Signing__private_IsEnabledFallback.c)
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
