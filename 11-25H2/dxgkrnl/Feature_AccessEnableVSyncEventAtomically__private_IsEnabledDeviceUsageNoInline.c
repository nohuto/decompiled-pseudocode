/*
 * XREFs of Feature_AccessEnableVSyncEventAtomically__private_IsEnabledDeviceUsageNoInline @ 0x140091EB0
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x14027A168 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 *     ?EnableVSyncEventSignaling@BLTQUEUE@@QEAAXXZ @ 0x14032AC44 (-EnableVSyncEventSignaling@BLTQUEUE@@QEAAXXZ.c)
 *     ?EnableVSyncEventWorker@BLTQUEUE@@AEAAXXZ @ 0x14042E128 (-EnableVSyncEventWorker@BLTQUEUE@@AEAAXXZ.c)
 * Callees:
 *     Feature_AccessEnableVSyncEventAtomically__private_IsEnabledFallback @ 0x140091EE8 (Feature_AccessEnableVSyncEventAtomically__private_IsEnabledFallback.c)
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
