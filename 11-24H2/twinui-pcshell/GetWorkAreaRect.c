/*
 * XREFs of GetWorkAreaRect @ 0x1804886C8
 * Callers:
 *     ?GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundation@Windows@@00UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@5@W4CoreKeyboardEditControlLineType@789UI@5@_NPEAU345@PEA_N5@Z @ 0x180256970 (-GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundatio.c)
 * Callees:
 *     ?PhysicalRectToRelative@ScalingHelper@KeyboardHosting@@SA?AURect@Foundation@Windows@@AEBU345@W4DEVICE_SCALE_FACTOR@@@Z @ 0x18013C248 (-PhysicalRectToRelative@ScalingHelper@KeyboardHosting@@SA-AURect@Foundation@Windows@@AEBU345@W4D.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029730C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details@wil@@QEAA_NXZ @ 0x18047A5A8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details.c)
 */

_OWORD *__fastcall GetWorkAreaRect(_OWORD *a1, __int64 a2)
{
  const char *v4; // r9
  HMONITOR v5; // rcx
  int v6; // r8d
  float v8[4]; // [rsp+20h] [rbp-50h] BYREF
  float v9[4]; // [rsp+30h] [rbp-40h] BYREF
  struct tagMONITORINFO mi; // [rsp+40h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1B,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\viewrectprovider.cpp",
      v4);
  v5 = *(HMONITOR *)a2;
  memset(&mi, 0, sizeof(mi));
  mi.cbSize = 40;
  if ( GetMonitorInfoW(v5, &mi) )
  {
    v6 = *(_DWORD *)(a2 + 40);
    v9[0] = (float)mi.rcWork.left;
    v9[1] = (float)mi.rcWork.top;
    v9[2] = (float)(mi.rcWork.right - mi.rcWork.left);
    v9[3] = (float)(mi.rcWork.bottom - mi.rcWork.top);
    *a1 = *(_OWORD *)KeyboardHosting::ScalingHelper::PhysicalRectToRelative(v8, v9, v6);
  }
  else
  {
    *a1 = *(_OWORD *)(a2 + 8);
  }
  return a1;
}
