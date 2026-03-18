/*
 * XREFs of Feature_EnumDisplaySettings_PerfImprovements__private_IsEnabledDeviceUsageNoInline @ 0x1400679F0
 * Callers:
 *     ?SetCachedStereoStates@ADAPTER_DISPLAY@@QEAAJIW4_TRISTATE@@0@Z @ 0x14019AEA0 (-SetCachedStereoStates@ADAPTER_DISPLAY@@QEAAJIW4_TRISTATE@@0@Z.c)
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1401C49D4 (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@AEAVDXGAUTOPUSHLOCK@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAPEBU_D3DKMT_DISPLAYMODE@@PEAE@Z @ 0x1401C8810 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@AEAVDXGAUTOPUSHLOCK@@EAEAU_D.c)
 *     ?DxgkWin32kQueryInterface@@YAJPEAU_DXGKWIN32K_INTERFACE@@PEAK@Z @ 0x1403AABF0 (-DxgkWin32kQueryInterface@@YAJPEAU_DXGKWIN32K_INTERFACE@@PEAK@Z.c)
 *     ?GetCachedStereoStates@ADAPTER_DISPLAY@@QEBAJIPEAE0@Z @ 0x140407D40 (-GetCachedStereoStates@ADAPTER_DISPLAY@@QEBAJIPEAE0@Z.c)
 *     ?SetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x140408210 (-SetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 * Callees:
 *     Feature_EnumDisplaySettings_PerfImprovements__private_IsEnabledFallback @ 0x140067A28 (Feature_EnumDisplaySettings_PerfImprovements__private_IsEnabledFallback.c)
 */

__int64 Feature_EnumDisplaySettings_PerfImprovements__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_EnumDisplaySettings_PerfImprovements__private_featureState & 0x10) != 0 )
    return Feature_EnumDisplaySettings_PerfImprovements__private_featureState & 1;
  else
    return Feature_EnumDisplaySettings_PerfImprovements__private_IsEnabledFallback(
             (unsigned int)Feature_EnumDisplaySettings_PerfImprovements__private_featureState,
             3LL);
}
