/*
 * XREFs of Feature_FolderEncryptionMasterArm64Fix__private_IsEnabledDeviceUsageNoInline @ 0x180098EDC
 * Callers:
 *     SdbpGetVelocityState @ 0x18009B2D0 (SdbpGetVelocityState.c)
 * Callees:
 *     <none>
 */

__int64 Feature_FolderEncryptionMasterArm64Fix__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_FolderEncryptionMasterArm64Fix__private_featureState & 0x10) != 0 )
    return Feature_FolderEncryptionMasterArm64Fix__private_featureState & 1;
  else
    return Feature_FolderEncryptionMasterArm64Fix__private_IsEnabledFallback(
             (unsigned int)Feature_FolderEncryptionMasterArm64Fix__private_featureState,
             3LL);
}
