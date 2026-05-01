/*
 * XREFs of ?OnDismiss@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180472D50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180084E08 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Pa.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801AED44 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??1OnLightDismiss@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18046CA50 (--1OnLightDismiss@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?StartActivity@OnLightDismiss@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x1804748D0 (-StartActivity@OnLightDismiss@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 *     ?OnLightDismiss@TabTipAdapter@KeyboardHosting@@QEAAJI@Z @ 0x18047E390 (-OnLightDismiss@TabTipAdapter@KeyboardHosting@@QEAAJI@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::OnDismiss(TouchKeyboardExperienceManager *this)
{
  KeyboardHosting::TabTipAdapter *v2; // rcx
  unsigned int v3; // edx
  int v4; // eax
  unsigned int v5; // ebx
  int v7[2]; // [rsp+20h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v7,
    (__int64)"OnLightDismiss");
  *(_QWORD *)v7 = &TouchKeyboardExperienceTelemetryLogger::OnLightDismiss::`vftable';
  TouchKeyboardExperienceTelemetryLogger::OnLightDismiss::StartActivity((TouchKeyboardExperienceTelemetryLogger::OnLightDismiss *)v7);
  v2 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 53);
  if ( !v2
    || (v3 = *((_DWORD *)this + 112), v3 == -1)
    || (v4 = KeyboardHosting::TabTipAdapter::OnLightDismiss(v2, v3), v5 = v4, v4 >= 0) )
  {
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
      (__int64)v7,
      0);
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEB3,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  }
  TouchKeyboardExperienceTelemetryLogger::OnLightDismiss::~OnLightDismiss((TouchKeyboardExperienceTelemetryLogger::OnLightDismiss *)v7);
  return v5;
}
