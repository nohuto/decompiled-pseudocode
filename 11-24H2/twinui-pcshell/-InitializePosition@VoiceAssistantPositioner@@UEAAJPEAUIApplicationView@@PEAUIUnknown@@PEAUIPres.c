/*
 * XREFs of ?InitializePosition@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x18050BDD0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180020A48 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180296A94 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Par.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??1VAPositioner_InitializePositionActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ @ 0x18050A2B8 (--1VAPositioner_InitializePositionActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ.c)
 *     ?CacheViewToManage@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18050A464 (-CacheViewToManage@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?StartActivity@VAPositioner_InitializePositionActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18050D444 (-StartActivity@VAPositioner_InitializePositionActivity@VoiceAssistantPositionerTelemetry@@QEAAXP.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18050D9FC (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0BAAAAAA@U_TlgReflectorTag_.c)
 *     ?UpdateManagedView@VoiceAssistantPositioner@@AEAAJXZ @ 0x18050FEE0 (-UpdateManagedView@VoiceAssistantPositioner@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VoiceAssistantPositioner::InitializePosition(
        VoiceAssistantPositioner *this,
        struct IApplicationView *a2,
        struct IUnknown *a3,
        struct IPresentationRequestedArgs *a4)
{
  int updated; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  int v11[2]; // [rsp+20h] [rbp-178h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+0h]

  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v11,
    (__int64)"VAPositioner_InitializePositionActivity");
  *(_QWORD *)v11 = &VoiceAssistantPositionerTelemetry::VAPositioner_InitializePositionActivity::`vftable';
  VoiceAssistantPositionerTelemetry::VAPositioner_InitializePositionActivity::StartActivity(
    (VoiceAssistantPositionerTelemetry::VAPositioner_InitializePositionActivity *)v11,
    a2,
    a3);
  updated = VoiceAssistantPositioner::CacheViewToManage(
              (VoiceAssistantPositioner *)((char *)this - 120),
              (struct IUnknown *)a2);
  v8 = updated;
  if ( updated >= 0 )
  {
    updated = VoiceAssistantPositioner::UpdateManagedView((VoiceAssistantPositioner *)((char *)this - 120));
    v8 = updated;
    if ( updated >= 0 )
    {
      Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 36, (__int64)a2);
      wil::ActivityBase<WindowManagementLogging,1,70368744177664,4,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v11);
      v8 = 0;
      goto LABEL_7;
    }
    v9 = 342LL;
  }
  else
  {
    v9 = 341LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
    (const char *)(unsigned int)updated);
LABEL_7:
  VoiceAssistantPositionerTelemetry::VAPositioner_InitializePositionActivity::~VAPositioner_InitializePositionActivity((VoiceAssistantPositionerTelemetry::VAPositioner_InitializePositionActivity *)v11);
  return v8;
}
