/*
 * XREFs of Feature_DisplayMux_PostGA_BugBundle_1__private_IsEnabledDeviceUsageNoInline @ 0x14006E0E8
 * Callers:
 *     ?UpdateMuxPosition@DISPLAY_MUX_PAIRING@@QEAAXXZ @ 0x140088134 (-UpdateMuxPosition@DISPLAY_MUX_PAIRING@@QEAAXXZ.c)
 *     DpiMdmProcessAdapterBrightness @ 0x140088794 (DpiMdmProcessAdapterBrightness.c)
 *     DpiMdmProcessStartAdapter @ 0x140088D14 (DpiMdmProcessStartAdapter.c)
 *     ?DxgkLogDisplayMuxDiagPacketToDisplayRingbuffer@@YAJXZ @ 0x1401C07B0 (-DxgkLogDisplayMuxDiagPacketToDisplayRingbuffer@@YAJXZ.c)
 *     DpiFdoSetAdapterPowerState @ 0x14040AB28 (DpiFdoSetAdapterPowerState.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x14041AC88 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     DxgkEscape @ 0x14041D630 (DxgkEscape.c)
 *     ?DpiBrightness3Set@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_SET_IN@@@Z @ 0x140428830 (-DpiBrightness3Set@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_SET_IN@@@Z.c)
 * Callees:
 *     Feature_DisplayMux_PostGA_BugBundle_1__private_IsEnabledFallback @ 0x14006E120 (Feature_DisplayMux_PostGA_BugBundle_1__private_IsEnabledFallback.c)
 */

__int64 Feature_DisplayMux_PostGA_BugBundle_1__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DisplayMux_PostGA_BugBundle_1__private_featureState & 0x10) != 0 )
    return Feature_DisplayMux_PostGA_BugBundle_1__private_featureState & 1;
  else
    return Feature_DisplayMux_PostGA_BugBundle_1__private_IsEnabledFallback(
             (unsigned int)Feature_DisplayMux_PostGA_BugBundle_1__private_featureState,
             3LL);
}
