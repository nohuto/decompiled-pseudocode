/*
 * XREFs of ?HandleSwitchToView@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x18050BC10
 * Callers:
 *     ?HandleSwitchToView@VoiceAssistantPositioner@@W7EAAJPEAUIApplicationView@@@Z @ 0x18050BCD0 (-HandleSwitchToView@VoiceAssistantPositioner@@W7EAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180296A94 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Par.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??1VAPositioner_HandleSwitchToViewActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ @ 0x18050A28C (--1VAPositioner_HandleSwitchToViewActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ.c)
 *     ?SetForegroundOnView@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18050CDA8 (-SetForegroundOnView@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?StartActivity@VAPositioner_HandleSwitchToViewActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIApplicationView@@@Z @ 0x18050D390 (-StartActivity@VAPositioner_HandleSwitchToViewActivity@VoiceAssistantPositionerTelemetry@@QEAAXP.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18050D9FC (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0BAAAAAA@U_TlgReflectorTag_.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VoiceAssistantPositioner::HandleSwitchToView(
        VoiceAssistantPositioner *this,
        struct IApplicationView *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v7[2]; // [rsp+20h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v7,
    (__int64)"VAPositioner_HandleSwitchToViewActivity");
  *(_QWORD *)v7 = &VoiceAssistantPositionerTelemetry::VAPositioner_HandleSwitchToViewActivity::`vftable';
  VoiceAssistantPositionerTelemetry::VAPositioner_HandleSwitchToViewActivity::StartActivity(
    (VoiceAssistantPositionerTelemetry::VAPositioner_HandleSwitchToViewActivity *)v7,
    a2);
  v4 = VoiceAssistantPositioner::SetForegroundOnView((VoiceAssistantPositioner *)((char *)this - 104), a2);
  v5 = v4;
  if ( v4 >= 0 )
  {
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,4,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v7);
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x128,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
      (const char *)(unsigned int)v4);
  }
  VoiceAssistantPositionerTelemetry::VAPositioner_HandleSwitchToViewActivity::~VAPositioner_HandleSwitchToViewActivity((VoiceAssistantPositionerTelemetry::VAPositioner_HandleSwitchToViewActivity *)v7);
  return v5;
}
