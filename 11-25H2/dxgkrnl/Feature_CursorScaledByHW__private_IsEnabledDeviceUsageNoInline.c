/*
 * XREFs of Feature_CursorScaledByHW__private_IsEnabledDeviceUsageNoInline @ 0x14006B7E8
 * Callers:
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x14038F660 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     Feature_CursorScaledByHW__private_IsEnabledFallback @ 0x14006B820 (Feature_CursorScaledByHW__private_IsEnabledFallback.c)
 */

__int64 Feature_CursorScaledByHW__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_CursorScaledByHW__private_featureState & 0x10) != 0 )
    return Feature_CursorScaledByHW__private_featureState & 1;
  else
    return Feature_CursorScaledByHW__private_IsEnabledFallback(
             (unsigned int)Feature_CursorScaledByHW__private_featureState,
             3LL);
}
