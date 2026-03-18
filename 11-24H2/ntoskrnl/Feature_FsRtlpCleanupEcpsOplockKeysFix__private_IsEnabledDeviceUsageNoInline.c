/*
 * XREFs of Feature_FsRtlpCleanupEcpsOplockKeysFix__private_IsEnabledDeviceUsageNoInline @ 0x1405967D4
 * Callers:
 *     IopCreateFile @ 0x14096CD60 (IopCreateFile.c)
 * Callees:
 *     Feature_FsRtlpCleanupEcpsOplockKeysFix__private_IsEnabledFallback @ 0x14059680C (Feature_FsRtlpCleanupEcpsOplockKeysFix__private_IsEnabledFallback.c)
 */

__int64 Feature_FsRtlpCleanupEcpsOplockKeysFix__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_FsRtlpCleanupEcpsOplockKeysFix__private_featureState & 0x10) != 0 )
    return Feature_FsRtlpCleanupEcpsOplockKeysFix__private_featureState & 1;
  else
    return Feature_FsRtlpCleanupEcpsOplockKeysFix__private_IsEnabledFallback(
             (unsigned int)Feature_FsRtlpCleanupEcpsOplockKeysFix__private_featureState,
             3LL);
}
