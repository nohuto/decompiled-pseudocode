/*
 * XREFs of ?GetForegroundAppRect@ViewRectHelper@KeyboardHosting@@SAJAEAURect@Foundation@Windows@@@Z @ 0x180255238
 * Callers:
 *     ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x18007EBC8 (-GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU-$IVectorView@UCoreK.c)
 * Callees:
 *     ?PhysicalRectToRelative@ScalingHelper@KeyboardHosting@@SA?AURect@Foundation@Windows@@AEBU345@W4DEVICE_SCALE_FACTOR@@@Z @ 0x18013C248 (-PhysicalRectToRelative@ScalingHelper@KeyboardHosting@@SA-AURect@Foundation@Windows@@AEBU345@W4D.c)
 *     ??0MonitorInformation@KeyboardHosting@@QEAA@PEAUHMONITOR__@@@Z @ 0x180254CB0 (--0MonitorInformation@KeyboardHosting@@QEAA@PEAUHMONITOR__@@@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802916C8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?GetScaleFactor@MonitorInformation@KeyboardHosting@@QEBA?AW4DEVICE_SCALE_FACTOR@@XZ @ 0x18047A280 (-GetScaleFactor@MonitorInformation@KeyboardHosting@@QEBA-AW4DEVICE_SCALE_FACTOR@@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details@wil@@QEAA_NXZ @ 0x18047A5A8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details.c)
 */

__int64 __fastcall KeyboardHosting::ViewRectHelper::GetForegroundAppRect(struct Windows::Foundation::Rect *a1)
{
  HWND ForegroundWindow; // rax
  const char *v3; // r9
  HMONITOR v5; // rax
  enum DEVICE_SCALE_FACTOR ScaleFactor; // r8d
  float v7[4]; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v8[40]; // [rsp+30h] [rbp-D0h] BYREF
  enum DEVICE_SCALE_FACTOR v9; // [rsp+58h] [rbp-A8h]
  struct tagRECT Rect; // [rsp+E0h] [rbp-20h] BYREF
  float v11[4]; // [rsp+F0h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+18h]

  *(_OWORD *)a1 = 0LL;
  ForegroundWindow = GetForegroundWindow();
  if ( ForegroundWindow )
  {
    Rect = 0LL;
    if ( !GetWindowRect(ForegroundWindow, &Rect) )
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0x1F,
               (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\viewrecthelper.cpp",
               v3);
    v5 = MonitorFromRect(&Rect, 2u);
    if ( !v5 )
      return 2147549183LL;
    KeyboardHosting::MonitorInformation::MonitorInformation((KeyboardHosting::MonitorInformation *)v8, v5);
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl) )
      ScaleFactor = KeyboardHosting::MonitorInformation::GetScaleFactor((KeyboardHosting::MonitorInformation *)v8);
    else
      ScaleFactor = v9;
    v11[0] = (float)Rect.left;
    v11[2] = (float)(Rect.right - Rect.left);
    v11[1] = (float)Rect.top;
    v11[3] = (float)(Rect.bottom - Rect.top);
    *(__m128i *)a1 = _mm_loadu_si128((const __m128i *)KeyboardHosting::ScalingHelper::PhysicalRectToRelative(
                                                        v7,
                                                        v11,
                                                        ScaleFactor));
  }
  return 0LL;
}
