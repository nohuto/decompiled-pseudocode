/*
 * XREFs of ?OnTargetWithFocusChanged@ControllerProcessor@@UEAAJPEAUIInputTarget@@0@Z @ 0x180089C60
 * Callers:
 *     <none>
 * Callees:
 *     ?StopAutoRepeatTimer@ControllerProcessor@@AEAAJXZ @ 0x18006ED2C (-StopAutoRepeatTimer@ControllerProcessor@@AEAAJXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_GamepadVKeyRoutingOptIn@@@details@wil@@QEAA_NXZ @ 0x18013259C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_GamepadVKeyRoutingOptIn@@@details.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad@@@details@wil@@QEAA_NXZ @ 0x1801325D8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad@@@.c)
 *     ?UpdateFocusedProcessId@ControllerProcessor@@AEAAXPEAUIInputTarget@@@Z @ 0x18017B368 (-UpdateFocusedProcessId@ControllerProcessor@@AEAAXPEAUIInputTarget@@@Z.c)
 */

__int64 __fastcall ControllerProcessor::OnTargetWithFocusChanged(
        ControllerProcessor *this,
        struct IInputTarget *a2,
        struct IInputTarget *a3)
{
  ControllerProcessor::StopAutoRepeatTimer((ControllerProcessor *)((char *)this - 8));
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_GamepadVKeyRoutingOptIn>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_GamepadVKeyRoutingOptIn>::GetImpl'::`2'::impl)
    || (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad>::GetImpl'::`2'::impl) )
  {
    ControllerProcessor::UpdateFocusedProcessId((ControllerProcessor *)((char *)this - 8), a3);
  }
  return NonPointerProcessor::OnTargetWithFocusChanged(this, a2, a3);
}
