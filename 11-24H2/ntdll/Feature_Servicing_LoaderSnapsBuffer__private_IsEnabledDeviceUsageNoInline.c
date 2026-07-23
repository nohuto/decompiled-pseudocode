/*
 * XREFs of Feature_Servicing_LoaderSnapsBuffer__private_IsEnabledDeviceUsageNoInline @ 0x18011B080
 * Callers:
 *     LdrpInitializeProcess @ 0x1800AEF54 (LdrpInitializeProcess.c)
 * Callees:
 *     <none>
 */

__int64 Feature_Servicing_LoaderSnapsBuffer__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_LoaderSnapsBuffer__private_featureState & 0x10) != 0 )
    return Feature_Servicing_LoaderSnapsBuffer__private_featureState & 1;
  else
    return Feature_Servicing_LoaderSnapsBuffer__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_LoaderSnapsBuffer__private_featureState,
             3u);
}
