/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_BluetoothControl_DeferOnNotifyUntilRegistration@@@details@wil@@QEAA_NXZ @ 0x1800D96E4
 * Callers:
 *     ?OnNotify@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@UEAAJKPEBU_GUID@@@Z @ 0x18007AA00 (-OnNotify@-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@Blueto.c)
 *     ?OnNotify@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@UEAAJKPEBU_GUID@@@Z @ 0x1800D5C00 (-OnNotify@-$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothC.c)
 *     ?RegisterForNotifications@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@UEAAJXZ @ 0x1800D6140 (-RegisterForNotifications@-$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothContr.c)
 *     ?RegisterForNotifications@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@UEAAJXZ @ 0x1800D61D0 (-RegisterForNotifications@-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothC.c)
 *     ?_Do_call@?$_Func_impl_no_alloc@V_lambda_1d5316dfea7a7918102eba328e746dc2_@@X$$V@std@@EEAAXXZ @ 0x1800D8C60 (-_Do_call@-$_Func_impl_no_alloc@V_lambda_1d5316dfea7a7918102eba328e746dc2_@@X$$V@std@@EEAAXXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_BluetoothControl_DeferOnNotifyUntilRegistration@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800D3A2C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_BluetoothContr.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_BluetoothControl_DeferOnNotifyUntilRegistration@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800D678C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_BluetoothControl_DeferOnNotifyU.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_BluetoothControl_DeferOnNotifyUntilRegistration>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_BluetoothControl_DeferOnNotifyUntilRegistration>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_BluetoothControl_DeferOnNotifyUntilRegistration>::ReportUsage(
    a1,
    v6 & 1,
    v3,
    v4);
  return v2;
}
