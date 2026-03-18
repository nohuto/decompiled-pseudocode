/*
 * XREFs of Feature_AccessEnableVSyncEventAtomically__private_IsEnabledDeviceUsageNoInline @ 0x14009430C
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x140093270 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 *     ?EnableVSyncEventSignaling@BLTQUEUE@@QEAAXXZ @ 0x14030D2F4 (-EnableVSyncEventSignaling@BLTQUEUE@@QEAAXXZ.c)
 *     ?EnableVSyncEventWorker@BLTQUEUE@@AEAAXXZ @ 0x140430030 (-EnableVSyncEventWorker@BLTQUEUE@@AEAAXXZ.c)
 * Callees:
 *     Feature_AccessEnableVSyncEventAtomically__private_IsEnabledFallback @ 0x140094344 (Feature_AccessEnableVSyncEventAtomically__private_IsEnabledFallback.c)
 */

__int64 Feature_AccessEnableVSyncEventAtomically__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_AccessEnableVSyncEventAtomically__private_featureState & 0x10) != 0 )
    return Feature_AccessEnableVSyncEventAtomically__private_featureState & 1;
  else
    return Feature_AccessEnableVSyncEventAtomically__private_IsEnabledFallback(
             (unsigned int)Feature_AccessEnableVSyncEventAtomically__private_featureState,
             3LL);
}
