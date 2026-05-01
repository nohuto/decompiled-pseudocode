/*
 * XREFs of ?CompleteHide@CControlCenterExperienceManager@@AEAAJXZ @ 0x180374038
 * Callers:
 *     ?OnEventQueued@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800E4500 (-OnEventQueued@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e42ff9ffcd3368a4558d518826f3b602___::Run @ 0x180376710 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e42ff9ffcd3368a4558d518826f3b602___--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x1800AEAEC (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 *     ?Stop@?$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800E4FF4 (-Stop@-$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ??0?$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800E63E8 (--0-$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?StartActivity@EM_CompleteHide@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXXZ @ 0x18021D8FC (-StartActivity@EM_CompleteHide@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??1EM_CompleteHide@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x180373658 (--1EM_CompleteHide@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ.c)
 *     ?ReturnFocus@CControlCenterExperienceManager@@AEAAJXZ @ 0x1803765B0 (-ReturnFocus@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     ?WasVisible@EM_CompleteHide@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXXZ @ 0x18037726C (-WasVisible@EM_CompleteHide@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CControlCenterExperienceManager::CompleteHide(CControlCenterExperienceManager *this)
{
  int v2; // eax
  int v3; // eax
  unsigned int v4; // ebx
  int v6[2]; // [rsp+20h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v6,
    (__int64)"EM_CompleteHide");
  *(_QWORD *)v6 = &ControlCenterUITelemetry::ControlCenterTelemetry::EM_CompleteHide::`vftable';
  ControlCenterUITelemetry::ControlCenterTelemetry::EM_CompleteHide::StartActivity((ControlCenterUITelemetry::ControlCenterTelemetry::EM_CompleteHide *)v6);
  if ( *((_DWORD *)this + 40) != 2 )
    goto LABEL_6;
  ControlCenterUITelemetry::ControlCenterTelemetry::EM_CompleteHide::WasVisible((ControlCenterUITelemetry::ControlCenterTelemetry::EM_CompleteHide *)v6);
  v2 = CControlCenterExperienceManager::ReturnFocus(this);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x4DA,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  v3 = CSingleViewShellExperience::Hide((__int64)this + 120, 0LL);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4DB,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
  }
  else
  {
LABEL_6:
    *(_OWORD *)((char *)this + 664) = 0LL;
    wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v6, 0);
    v4 = 0;
  }
  ControlCenterUITelemetry::ControlCenterTelemetry::EM_CompleteHide::~EM_CompleteHide((volatile signed __int32 **)v6);
  return v4;
}
