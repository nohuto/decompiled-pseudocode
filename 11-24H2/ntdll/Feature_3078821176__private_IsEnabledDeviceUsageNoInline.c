/*
 * XREFs of Feature_3078821176__private_IsEnabledDeviceUsageNoInline @ 0x18015B304
 * Callers:
 *     PsspDuplicateSnapshotLocalToRemote @ 0x180118458 (PsspDuplicateSnapshotLocalToRemote.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x180118A0C (PsspDuplicateSnapshotRemoteToRemote.c)
 * Callees:
 *     <none>
 */

__int64 Feature_3078821176__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_3078821176__private_featureState & 0x10) != 0 )
    return Feature_3078821176__private_featureState & 1;
  else
    return Feature_3078821176__private_IsEnabledFallback((unsigned int)Feature_3078821176__private_featureState, 3LL);
}
