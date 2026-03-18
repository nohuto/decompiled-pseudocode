/*
 * XREFs of Feature_NpuProcessAttribution__private_IsEnabledDeviceUsageNoInline @ 0x14006FFE0
 * Callers:
 *     ?ComputeQueryInterface@@YAJPEAU_DXGKCOMPUTE_INTERFACE@@PEAK@Z @ 0x14006F17C (-ComputeQueryInterface@@YAJPEAU_DXGKCOMPUTE_INTERFACE@@PEAK@Z.c)
 * Callees:
 *     Feature_NpuProcessAttribution__private_IsEnabledFallback @ 0x140070018 (Feature_NpuProcessAttribution__private_IsEnabledFallback.c)
 */

__int64 Feature_NpuProcessAttribution__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_NpuProcessAttribution__private_featureState & 0x10) != 0 )
    return Feature_NpuProcessAttribution__private_featureState & 1;
  else
    return Feature_NpuProcessAttribution__private_IsEnabledFallback(
             (unsigned int)Feature_NpuProcessAttribution__private_featureState,
             3LL);
}
