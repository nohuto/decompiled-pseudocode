/*
 * XREFs of ?ControlGainedForActivation@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x18050A7F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18009B530 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180296A94 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Par.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??1VAPositioner_ControlGainedForActivationActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ @ 0x18050A1DC (--1VAPositioner_ControlGainedForActivationActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ.c)
 *     ?CacheViewToManage@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18050A464 (-CacheViewToManage@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?EnableVoicePositionerScenario@VoiceAssistantPositioner@@AEAAJXZ @ 0x18050B560 (-EnableVoicePositionerScenario@VoiceAssistantPositioner@@AEAAJXZ.c)
 *     ?SetForegroundOnView@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18050CDA8 (-SetForegroundOnView@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?StartActivity@VAPositioner_ControlGainedForActivationActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18050D09C (-StartActivity@VAPositioner_ControlGainedForActivationActivity@VoiceAssistantPositionerTelemetry.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18050D9FC (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0BAAAAAA@U_TlgReflectorTag_.c)
 *     ?UpdateManagedView@VoiceAssistantPositioner@@AEAAJXZ @ 0x18050FEE0 (-UpdateManagedView@VoiceAssistantPositioner@@AEAAJXZ.c)
 *     ?VAPositioner_TryPositionPendingView@VAPositioner_ControlGainedForActivationActivity@VoiceAssistantPositionerTelemetry@@QEAAXXZ @ 0x180510384 (-VAPositioner_TryPositionPendingView@VAPositioner_ControlGainedForActivationActivity@VoiceAssist.c)
 *     ?VAPositioner_ViewHandledByInitializePosition@VAPositioner_ControlGainedForActivationActivity@VoiceAssistantPositionerTelemetry@@QEAAXXZ @ 0x1805103E4 (-VAPositioner_ViewHandledByInitializePosition@VAPositioner_ControlGainedForActivationActivity@Vo.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VoiceAssistantPositioner::ControlGainedForActivation(
        __int64 a1,
        struct IApplicationView *a2,
        __int64 a3,
        struct IUnknown *a4)
{
  struct IUnknown *v7; // rdx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  VoiceAssistantPositioner *v11; // rbx
  int updated; // edi
  __int64 v13; // rdx
  int v15[2]; // [rsp+20h] [rbp-178h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+0h]

  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v15,
    (__int64)"VAPositioner_ControlGainedForActivationActivity");
  *(_QWORD *)v15 = &VoiceAssistantPositionerTelemetry::VAPositioner_ControlGainedForActivationActivity::`vftable';
  VoiceAssistantPositionerTelemetry::VAPositioner_ControlGainedForActivationActivity::StartActivity(
    (VoiceAssistantPositionerTelemetry::VAPositioner_ControlGainedForActivationActivity *)v15,
    a2,
    a4);
  if ( !SHIsSameObject((struct IUnknown *)a2, *(struct IUnknown **)(a1 + 288)) )
  {
    v11 = (VoiceAssistantPositioner *)(a1 - 120);
    updated = VoiceAssistantPositioner::CacheViewToManage((VoiceAssistantPositioner *)(a1 - 120), (struct IUnknown *)a2);
    if ( updated >= 0 )
    {
      updated = VoiceAssistantPositioner::EnableVoicePositionerScenario(v11);
      if ( updated >= 0 )
      {
        updated = VoiceAssistantPositioner::UpdateManagedView(v11);
        if ( updated >= 0 )
        {
          v8 = VoiceAssistantPositioner::SetForegroundOnView(v11, a2);
          v9 = v8;
          if ( v8 < 0 )
          {
            v10 = 404LL;
            goto LABEL_8;
          }
          goto LABEL_20;
        }
        v13 = 403LL;
      }
      else
      {
        v13 = 402LL;
      }
    }
    else
    {
      v13 = 401LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
      (const char *)(unsigned int)updated);
    v9 = updated;
    goto LABEL_21;
  }
  VoiceAssistantPositionerTelemetry::VAPositioner_ControlGainedForActivationActivity::VAPositioner_ViewHandledByInitializePosition((VoiceAssistantPositionerTelemetry::VAPositioner_ControlGainedForActivationActivity *)v15);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 288));
  v7 = *(struct IUnknown **)(a1 + 296);
  if ( !v7
    || !SHIsSameObject((struct IUnknown *)a2, v7)
    || (VoiceAssistantPositionerTelemetry::VAPositioner_ControlGainedForActivationActivity::VAPositioner_TryPositionPendingView((VoiceAssistantPositionerTelemetry::VAPositioner_ControlGainedForActivationActivity *)v15),
        v8 = VoiceAssistantPositioner::UpdateManagedView((VoiceAssistantPositioner *)(a1 - 120)),
        v9 = v8,
        v8 >= 0) )
  {
    v8 = VoiceAssistantPositioner::EnableVoicePositionerScenario((VoiceAssistantPositioner *)(a1 - 120));
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 394LL;
      goto LABEL_8;
    }
    v8 = VoiceAssistantPositioner::SetForegroundOnView((VoiceAssistantPositioner *)(a1 - 120), a2);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 395LL;
      goto LABEL_8;
    }
LABEL_20:
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,4,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v15);
    v9 = 0;
    goto LABEL_21;
  }
  v10 = 392LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
    (const char *)(unsigned int)v8);
LABEL_21:
  VoiceAssistantPositionerTelemetry::VAPositioner_ControlGainedForActivationActivity::~VAPositioner_ControlGainedForActivationActivity((VoiceAssistantPositionerTelemetry::VAPositioner_ControlGainedForActivationActivity *)v15);
  return v9;
}
