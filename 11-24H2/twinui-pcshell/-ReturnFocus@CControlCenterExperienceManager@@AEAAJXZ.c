/*
 * XREFs of ?ReturnFocus@CControlCenterExperienceManager@@AEAAJXZ @ 0x1803765B0
 * Callers:
 *     ?CompleteHide@CControlCenterExperienceManager@@AEAAJXZ @ 0x180374038 (-CompleteHide@CControlCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18003ED20 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?Stop@?$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800E4FF4 (-Stop@-$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ??0?$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800E63E8 (--0-$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??1EM_ReturnFocusActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x1803736B0 (--1EM_ReturnFocusActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ.c)
 *     ?ReturnedToActiveApp@EM_ReturnFocusActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXXZ @ 0x1803766AC (-ReturnedToActiveApp@EM_ReturnFocusActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEA.c)
 *     ?StartActivity@EM_ReturnFocusActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXXZ @ 0x1803769E8 (-StartActivity@EM_ReturnFocusActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CControlCenterExperienceManager::ReturnFocus(ExperienceManagerUtils **this)
{
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v2; // rdx
  HWND v3; // rbx
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // edx
  int v8[2]; // [rsp+20h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v8,
    (__int64)"EM_ReturnFocusActivity");
  *(_QWORD *)v8 = &ControlCenterUITelemetry::ControlCenterTelemetry::EM_ReturnFocusActivity::`vftable';
  ControlCenterUITelemetry::ControlCenterTelemetry::EM_ReturnFocusActivity::StartActivity((ControlCenterUITelemetry::ControlCenterTelemetry::EM_ReturnFocusActivity *)v8);
  v3 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(this[18], v2);
  if ( GetForegroundWindow() != v3 )
  {
    v6 = -2147418113;
    goto LABEL_6;
  }
  v4 = (*(__int64 (__fastcall **)(ExperienceManagerUtils *, __int64))(*(_QWORD *)this[60] + 24LL))(this[60], 0xFFFFLL);
  v5 = v4;
  if ( v4 >= 0 )
  {
    ControlCenterUITelemetry::ControlCenterTelemetry::EM_ReturnFocusActivity::ReturnedToActiveApp((ControlCenterUITelemetry::ControlCenterTelemetry::EM_ReturnFocusActivity *)v8);
    v6 = 0;
LABEL_6:
    wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v8, v6);
    v5 = 0;
    goto LABEL_7;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4EB,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
LABEL_7:
  ControlCenterUITelemetry::ControlCenterTelemetry::EM_ReturnFocusActivity::~EM_ReturnFocusActivity((volatile signed __int32 **)v8);
  return v5;
}
