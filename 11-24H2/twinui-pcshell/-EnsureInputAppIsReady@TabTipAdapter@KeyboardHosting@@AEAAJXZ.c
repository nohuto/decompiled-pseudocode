/*
 * XREFs of ?EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x18005508C
 * Callers:
 *     ?RefreshHardwareKeyboardUIState@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1800567B0 (-RefreshHardwareKeyboardUIState@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?RelaunchInputAppAfterTermination@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x1802A8C88 (-RelaunchInputAppAfterTermination@TabTipAdapter@KeyboardHosting@@QEAAJXZ.c)
 *     _lambda_07c09ec2b66b1cd0a67fc9fd25c7941f_::operator() @ 0x18046D680 (_lambda_07c09ec2b66b1cd0a67fc9fd25c7941f_--operator().c)
 *     ?OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJII@Z @ 0x18047F130 (-OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJII@Z.c)
 *     ?OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@QEBGPEA_N@Z @ 0x18047F3FC (-OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Tex.c)
 * Callees:
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180024590 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTa.c)
 *     ??1EnsureInputAppIsReady@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x180026850 (--1EnsureInputAppIsReady@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentInputAppId@TabTipAdapter@KeyboardHosting@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x180054CF8 (-GetCurrentInputAppId@TabTipAdapter@KeyboardHosting@@AEAA-AV-$basic_string@GU-$char_traits@G@std.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180055520 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_P.c)
 *     ?InvokeEnsureInputAppIsActivated@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x180056314 (-InvokeEnsureInputAppIsActivated@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?StartActivity@EnsureInputAppIsReady@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z @ 0x1800814A0 (-StartActivity@EnsureInputAppIsReady@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?InvokeActivateInputApp@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x18021A8F8 (-InvokeActivateInputApp@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall KeyboardHosting::TabTipAdapter::EnsureInputAppIsReady(KeyboardHosting::TabTipAdapter *this)
{
  const unsigned __int16 *v2; // rbx
  int v3; // eax
  DWORD v4; // edx
  unsigned int v5; // ebx
  __int64 v6; // rdx
  unsigned __int16 *v8[4]; // [rsp+20h] [rbp-188h] BYREF
  _QWORD v9[42]; // [rsp+40h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+0h]

  KeyboardHosting::TabTipAdapter::GetCurrentInputAppId((__int64)this, (__int64)v8);
  v2 = (const unsigned __int16 *)v8;
  if ( v8[3] > (unsigned __int16 *)7 )
    v2 = v8[0];
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v9);
  v9[0] = &TouchKeyboardExperienceTelemetryLogger::EnsureInputAppIsReady::`vftable';
  TouchKeyboardExperienceTelemetryLogger::EnsureInputAppIsReady::StartActivity(
    (TouchKeyboardExperienceTelemetryLogger::EnsureInputAppIsReady *)v9,
    v2);
  if ( v8[2] )
  {
    v3 = KeyboardHosting::TabTipAdapter::InvokeEnsureInputAppIsActivated(this);
    v5 = v3;
    if ( v3 < 0 )
    {
      v6 = 2331LL;
      goto LABEL_8;
    }
LABEL_9:
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
      (__int64)v9,
      v4);
    v5 = 0;
    goto LABEL_10;
  }
  v3 = KeyboardHosting::TabTipAdapter::InvokeActivateInputApp(this);
  v5 = v3;
  if ( v3 >= 0 )
    goto LABEL_9;
  v6 = 2326LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v3);
LABEL_10:
  TouchKeyboardExperienceTelemetryLogger::EnsureInputAppIsReady::~EnsureInputAppIsReady((TouchKeyboardExperienceTelemetryLogger::EnsureInputAppIsReady *)v9);
  std::wstring::_Tidy_deallocate(v8);
  return v5;
}
