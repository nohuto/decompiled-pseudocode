/*
 * XREFs of ?UpdateCurrentMonitorIfNecessary@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@@Z @ 0x180255B78
 * Callers:
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IEPEAIPEAURect@Foundation@8@PEAE@Z @ 0x180255CA0 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 * Callees:
 *     ?IsRectNull@KeyboardHosting@@YA_NAEBURect@Foundation@Windows@@@Z @ 0x18013D890 (-IsRectNull@KeyboardHosting@@YA_NAEBURect@Foundation@Windows@@@Z.c)
 *     ?SetMonitor@MonitorInformation@KeyboardHosting@@QEAAXPEAUHMONITOR__@@@Z @ 0x1801DAB34 (-SetMonitor@MonitorInformation@KeyboardHosting@@QEAAXPEAUHMONITOR__@@@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802916C8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?GetMonitorHandle@MonitorInformation@KeyboardHosting@@QEBAPEAUHMONITOR__@@XZ @ 0x18047A200 (-GetMonitorHandle@MonitorInformation@KeyboardHosting@@QEBAPEAUHMONITOR__@@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details@wil@@QEAA_NXZ @ 0x18047A5A8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::UpdateCurrentMonitorIfNecessary(
        RTL_SRWLOCK *this,
        const struct Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeRequest *a2)
{
  const char *v3; // r9
  HMONITOR v5; // rdi
  KeyboardHosting::MonitorInformation *v6; // rbx
  HMONITOR MonitorHandle; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct tagPOINT Point; // [rsp+38h] [rbp+10h] BYREF

  if ( *(_DWORD *)a2 == 6 && KeyboardHosting::IsRectNull((KeyboardHosting *)&this[22], a2) )
  {
    Point = 0LL;
    if ( !GetCursorPos(&Point) )
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0x2CB,
               (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
               v3);
    v5 = MonitorFromPoint(Point, 2u);
    KeyboardHosting::MonitorInformation::SetMonitor(this + 29, v5);
    v6 = (KeyboardHosting::MonitorInformation *)&this[71];
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl) )
      MonitorHandle = KeyboardHosting::MonitorInformation::GetMonitorHandle(v6);
    else
      MonitorHandle = *(HMONITOR *)v6;
    if ( MonitorHandle != v5 )
      KeyboardHosting::MonitorInformation::SetMonitor((RTL_SRWLOCK *)v6, v5);
  }
  return 0LL;
}
