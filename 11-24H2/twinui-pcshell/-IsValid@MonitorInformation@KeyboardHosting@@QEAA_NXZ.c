/*
 * XREFs of ?IsValid@MonitorInformation@KeyboardHosting@@QEAA_NXZ @ 0x180254D7C
 * Callers:
 *     ?HandleDisplayChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x18021D2E0 (-HandleDisplayChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@Text@Shell.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?GetMonitorHandle@MonitorInformation@KeyboardHosting@@QEBAPEAUHMONITOR__@@XZ @ 0x18047A200 (-GetMonitorHandle@MonitorInformation@KeyboardHosting@@QEBAPEAUHMONITOR__@@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details@wil@@QEAA_NXZ @ 0x18047A5A8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details.c)
 */

bool __fastcall KeyboardHosting::MonitorInformation::IsValid(KeyboardHosting::MonitorInformation *this)
{
  HMONITOR MonitorHandle; // rcx
  struct tagMONITORINFO mi; // [rsp+20h] [rbp-38h] BYREF

  memset(&mi, 0, 32);
  mi.cbSize = 40;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl) )
  {
    *(_QWORD *)&mi.rcWork.bottom = 0LL;
    MonitorHandle = KeyboardHosting::MonitorInformation::GetMonitorHandle(this);
  }
  else
  {
    MonitorHandle = *(HMONITOR *)this;
    *(_QWORD *)&mi.rcWork.bottom = 0LL;
  }
  return GetMonitorInfoW(MonitorHandle, &mi);
}
