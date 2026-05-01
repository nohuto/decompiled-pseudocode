/*
 * XREFs of ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x18007EBC8
 * Callers:
 *     ?GetShellState@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@PEAE1PEAW4CoreKeyboardModality@45678@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@8@@Z @ 0x18007E590 (-GetShellState@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreKeyboardViewType@Core@Text@Intern.c)
 *     ?CheckRequest@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NAEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@@Z @ 0x18007FA70 (-CheckRequest@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NAEBUCoreKeyboardPositionAndSizeRequest@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MonitorInfoUsedForCreatingOptions@_KAEAURect@Foundation@Windows@@AEAW4DEVICE_SCALE_FACTOR@@_KAEAU123@AEAW44@_KAEAU123@AEAW44@AEA_NAEA_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEA_KAEAURect@Foundation@Windows@@AEAW4DEVICE_SCALE_FACTOR@@012012AEA_N3@Z @ 0x180080194 (--$MonitorInfoUsedForCreatingOptions@_KAEAURect@Foundation@Windows@@AEAW4DEVICE_SCALE_FACTOR@@_K.c)
 *     ?LoadFloatingBottomPositionFromRegistryIfNecessary@TabTipAdapterPolicy@KeyboardHosting@@AEAAXI@Z @ 0x18014002C (-LoadFloatingBottomPositionFromRegistryIfNecessary@TabTipAdapterPolicy@KeyboardHosting@@AEAAXI@Z.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IURelativePositionOnScreen@KeyboardHosting@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x18014046C (--$_Try_emplace@AEBI$$V@-$map@IURelativePositionOnScreen@KeyboardHosting@@U-$less@I@std@@V-$allo.c)
 *     ?GetForegroundAppRect@ViewRectHelper@KeyboardHosting@@SAJAEAURect@Foundation@Windows@@@Z @ 0x180255238 (-GetForegroundAppRect@ViewRectHelper@KeyboardHosting@@SAJAEAURect@Foundation@Windows@@@Z.c)
 *     ?GetFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXPEAUPoint@Foundation@Windows@@I@Z @ 0x1802553FC (-GetFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXPEAUPoint@Foundation@Window.c)
 *     ?UpdateMonitorInfo@PositionAndSizeOptionsProvider@KeyboardHosting@@QEAAXAEBUMonitorInformation@2@00@Z @ 0x180255C48 (-UpdateMonitorInfo@PositionAndSizeOptionsProvider@KeyboardHosting@@QEAAXAEBUMonitorInformation@2.c)
 *     ?GetPositionAndSizeOptions@PositionAndSizeOptionsProvider@KeyboardHosting@@UEAAJURect@Foundation@Windows@@00_NPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@@Z @ 0x1802576C0 (-GetPositionAndSizeOptions@PositionAndSizeOptionsProvider@KeyboardHosting@@UEAAJURect@Foundation.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802916C8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??0MonitorInformation@KeyboardHosting@@QEAA@AEBU01@@Z @ 0x180479DCC (--0MonitorInformation@KeyboardHosting@@QEAA@AEBU01@@Z.c)
 *     ?GetSnapshot@MonitorInformation@KeyboardHosting@@QEBA?AUMonitorInformationSnapshot@2@XZ @ 0x18047A2B4 (-GetSnapshot@MonitorInformation@KeyboardHosting@@QEBA-AUMonitorInformationSnapshot@2@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details@wil@@QEAA_NXZ @ 0x18047A5A8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details.c)
 *     ??$MonitorInfoUsedForCreatingOptions@_KAEBURect@Foundation@Windows@@AEBW4DEVICE_SCALE_FACTOR@@_KAEBU123@AEBW44@_KAEBU123@AEBW44@AEA_NAEA_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEA_KAEBURect@Foundation@Windows@@AEBW4DEVICE_SCALE_FACTOR@@012012AEA_N3@Z @ 0x180484F24 (--$MonitorInfoUsedForCreatingOptions@_KAEBURect@Foundation@Windows@@AEBW4DEVICE_SCALE_FACTOR@@_K.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::GetPositionAndSizeOptions(
        KeyboardHosting::TabTipAdapterPolicy *this,
        _QWORD *a2)
{
  char IsEnabled; // al
  char v5; // cl
  char v6; // di
  const struct KeyboardHosting::MonitorInformation *v7; // r14
  const struct KeyboardHosting::MonitorInformation *v8; // r9
  const struct KeyboardHosting::MonitorInformation *v9; // rdx
  const struct KeyboardHosting::MonitorInformation *v10; // r8
  const struct KeyboardHosting::MonitorInformation *v11; // rdx
  const struct KeyboardHosting::MonitorInformation *v12; // rdx
  HMONITOR v13; // rax
  int PositionAndSizeOptions; // ebx
  __int64 v15; // rdx
  const char *v17; // r9
  int ForegroundAppRect; // eax
  __int128 v19; // xmm0
  char v20; // al
  __int128 v21; // xmm1
  __int64 v22; // rcx
  __int128 v23; // xmm0
  unsigned int v24[4]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v25; // [rsp+70h] [rbp-90h] BYREF
  __int128 v26; // [rsp+80h] [rbp-80h] BYREF
  POINT pt[2]; // [rsp+90h] [rbp-70h] BYREF
  struct tagMONITORINFO mi; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v29; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v30[20]; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v31[52]; // [rsp+10Ch] [rbp+Ch] BYREF
  __int64 v32; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v33[20]; // [rsp+148h] [rbp+48h] BYREF
  _BYTE v34[52]; // [rsp+15Ch] [rbp+5Ch] BYREF
  _BYTE v35[176]; // [rsp+190h] [rbp+90h] BYREF
  _BYTE v36[176]; // [rsp+240h] [rbp+140h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+338h] [rbp+238h]

  *a2 = 0LL;
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl);
  v5 = *((_BYTE *)this + 860);
  if ( IsEnabled )
  {
    v6 = *((_BYTE *)this + 808);
    v7 = (KeyboardHosting::TabTipAdapterPolicy *)((char *)this + (v5 != 0 ? 400LL : 232LL));
    KeyboardHosting::MonitorInformation::GetSnapshot((char *)this + 232, &v32);
    KeyboardHosting::MonitorInformation::GetSnapshot((char *)this + 568, &v29);
    KeyboardHosting::MonitorInformation::GetSnapshot((char *)this + 400, &mi);
    pt[0] = *(POINT *)&mi.cbSize;
    *(_QWORD *)&v25 = v29;
    *(_QWORD *)&v26 = v32;
    TouchKeyboardExperienceTelemetryLogger::MonitorInfoUsedForCreatingOptions<unsigned __int64,Windows::Foundation::Rect const &,enum DEVICE_SCALE_FACTOR const &,unsigned __int64,Windows::Foundation::Rect const &,enum DEVICE_SCALE_FACTOR const &,unsigned __int64,Windows::Foundation::Rect const &,enum DEVICE_SCALE_FACTOR const &,bool &,bool &>(
      &v26,
      v34,
      v33,
      &v25,
      v31,
      v30,
      pt,
      &mi.rcWork.right,
      &mi.rcMonitor.top,
      (char *)this + 860,
      (char *)this + 808);
    v8 = (KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 568);
    v9 = v7;
    v10 = (KeyboardHosting::TabTipAdapterPolicy *)((char *)this + (-(__int64)(v6 != 0) & 0xFFFFFFFFFFFFFEB0uLL) + 568);
  }
  else
  {
    if ( v5 )
      v11 = (KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 400);
    else
      v11 = (KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 232);
    KeyboardHosting::MonitorInformation::MonitorInformation((KeyboardHosting::MonitorInformation *)v36, v11);
    if ( *((_BYTE *)this + 808) )
      v12 = (KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 232);
    else
      v12 = (KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 568);
    KeyboardHosting::MonitorInformation::MonitorInformation((KeyboardHosting::MonitorInformation *)v35, v12);
    *(_QWORD *)&v26 = *((_QWORD *)this + 50);
    pt[0] = *(POINT *)((char *)this + 568);
    *(_QWORD *)&v25 = *((_QWORD *)this + 29);
    TouchKeyboardExperienceTelemetryLogger::MonitorInfoUsedForCreatingOptions<unsigned __int64,Windows::Foundation::Rect &,enum DEVICE_SCALE_FACTOR &,unsigned __int64,Windows::Foundation::Rect &,enum DEVICE_SCALE_FACTOR &,unsigned __int64,Windows::Foundation::Rect &,enum DEVICE_SCALE_FACTOR &,bool &,bool &>(
      &v25,
      (char *)this + 240,
      (char *)this + 272,
      pt,
      (char *)this + 576,
      (char *)this + 608,
      &v26,
      (char *)this + 408,
      (char *)this + 440,
      (char *)this + 860,
      (char *)this + 808);
    v8 = (KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 568);
    v10 = (const struct KeyboardHosting::MonitorInformation *)v35;
    v9 = (const struct KeyboardHosting::MonitorInformation *)v36;
  }
  KeyboardHosting::PositionAndSizeOptionsProvider::UpdateMonitorInfo(
    *((KeyboardHosting::PositionAndSizeOptionsProvider **)this + 27),
    v9,
    v10,
    v8);
  v24[0] = *((_DWORD *)this + 230);
  KeyboardHosting::TabTipAdapterPolicy::LoadFloatingBottomPositionFromRegistryIfNecessary(this, v24[0]);
  if ( !*(_BYTE *)(*(_QWORD *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
                                (char *)this + 824,
                                &v26,
                                v24)
                 + 40LL) )
    goto LABEL_16;
  *(_QWORD *)&v25 = 0LL;
  KeyboardHosting::TabTipAdapterPolicy::GetFloatingBottomPosition(
    this,
    (struct Windows::Foundation::Point *)&v25,
    v24[0]);
  pt[0].x = (int)*(float *)&v25;
  pt[0].y = (int)*((float *)&v25 + 1);
  v13 = MonitorFromPoint(pt[0], 2u);
  if ( !v13 )
  {
    PositionAndSizeOptions = -2147418113;
    v15 = 1526LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)(unsigned int)PositionAndSizeOptions);
    return (unsigned int)PositionAndSizeOptions;
  }
  memset(&mi, 0, sizeof(mi));
  mi.cbSize = 40;
  if ( !GetMonitorInfoW(v13, &mi) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x5F9,
             (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
             v17);
LABEL_16:
  v26 = 0LL;
  ForegroundAppRect = KeyboardHosting::ViewRectHelper::GetForegroundAppRect((struct Windows::Foundation::Rect *)&v26);
  if ( ForegroundAppRect < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x5FD,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)(unsigned int)ForegroundAppRect);
  v19 = v26;
  v20 = *((_BYTE *)this + 869);
  v21 = *((_OWORD *)this + 9);
  v22 = *((_QWORD *)this + 27);
  *((_OWORD *)this + 12) = v26;
  v26 = v19;
  v23 = *((_OWORD *)this + 11);
  v25 = v21;
  *(_OWORD *)&pt[0].x = v23;
  PositionAndSizeOptions = KeyboardHosting::PositionAndSizeOptionsProvider::GetPositionAndSizeOptions(
                             v22,
                             (unsigned int)&v25,
                             (unsigned int)pt,
                             (unsigned int)&v26,
                             v20,
                             (__int64)a2);
  if ( PositionAndSizeOptions < 0 )
  {
    v15 = 1536LL;
    goto LABEL_13;
  }
  return 0LL;
}
