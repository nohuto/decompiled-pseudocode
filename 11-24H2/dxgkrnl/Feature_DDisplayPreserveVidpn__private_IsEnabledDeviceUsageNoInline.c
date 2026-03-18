/*
 * XREFs of Feature_DDisplayPreserveVidpn__private_IsEnabledDeviceUsageNoInline @ 0x14006CA9C
 * Callers:
 *     ?GetOwnedSourceAndPixelFormatFromTarget@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAIAEAW4_D3DDDIFORMAT@@AEAW4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@@Z @ 0x1401C7194 (-GetOwnedSourceAndPixelFormatFromTarget@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAIAEAW4_D3DDDIF.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140380FF4 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403C9B44 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     DxgkDispMgrSourceOperation @ 0x140414C50 (DxgkDispMgrSourceOperation.c)
 *     DxgkDispMgrTargetOperation @ 0x1404150A0 (DxgkDispMgrTargetOperation.c)
 * Callees:
 *     Feature_DDisplayPreserveVidpn__private_IsEnabledFallback @ 0x14006CAD4 (Feature_DDisplayPreserveVidpn__private_IsEnabledFallback.c)
 */

__int64 Feature_DDisplayPreserveVidpn__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DDisplayPreserveVidpn__private_featureState & 0x10) != 0 )
    return Feature_DDisplayPreserveVidpn__private_featureState & 1;
  else
    return Feature_DDisplayPreserveVidpn__private_IsEnabledFallback(
             (unsigned int)Feature_DDisplayPreserveVidpn__private_featureState,
             3LL);
}
