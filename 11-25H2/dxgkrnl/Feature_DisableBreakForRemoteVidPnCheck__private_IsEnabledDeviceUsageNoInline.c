/*
 * XREFs of Feature_DisableBreakForRemoteVidPnCheck__private_IsEnabledDeviceUsageNoInline @ 0x140067D24
 * Callers:
 *     ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x14040E0D4 (-AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE.c)
 * Callees:
 *     Feature_DisableBreakForRemoteVidPnCheck__private_IsEnabledFallback @ 0x140067D5C (Feature_DisableBreakForRemoteVidPnCheck__private_IsEnabledFallback.c)
 */

__int64 Feature_DisableBreakForRemoteVidPnCheck__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DisableBreakForRemoteVidPnCheck__private_featureState & 0x10) != 0 )
    return Feature_DisableBreakForRemoteVidPnCheck__private_featureState & 1;
  else
    return Feature_DisableBreakForRemoteVidPnCheck__private_IsEnabledFallback(
             (unsigned int)Feature_DisableBreakForRemoteVidPnCheck__private_featureState,
             3LL);
}
