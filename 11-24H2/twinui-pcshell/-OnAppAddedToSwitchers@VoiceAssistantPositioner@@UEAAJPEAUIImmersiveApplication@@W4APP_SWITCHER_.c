/*
 * XREFs of ?OnAppAddedToSwitchers@VoiceAssistantPositioner@@UEAAJPEAUIImmersiveApplication@@W4APP_SWITCHER_FLAGS@@@Z @ 0x1801FFFA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801068A4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x18017F364 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180509F98 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0BAAAAAA@U_TlgReflectorTag_Par.c)
 *     ??1VAPositioner_AppAddedToTaskbarActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ @ 0x18050A1B0 (--1VAPositioner_AppAddedToTaskbarActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@VAPositioner_AppAddedToTaskbarActivity@VoiceAssistantPositionerTelemetry@@QEAAXXZ @ 0x18050CF90 (-StartActivity@VAPositioner_AppAddedToTaskbarActivity@VoiceAssistantPositionerTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18050D9FC (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0BAAAAAA@U_TlgReflectorTag_.c)
 *     ?UpdateManagedView@VoiceAssistantPositioner@@AEAAJXZ @ 0x18050FEE0 (-UpdateManagedView@VoiceAssistantPositioner@@AEAAJXZ.c)
 *     ?VAPositioner_PositionPendingViewBelongsToAppAdded@VAPositioner_AppAddedToTaskbarActivity@VoiceAssistantPositionerTelemetry@@QEAAXXZ @ 0x180510324 (-VAPositioner_PositionPendingViewBelongsToAppAdded@VAPositioner_AppAddedToTaskbarActivity@VoiceA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VoiceAssistantPositioner::OnAppAddedToSwitchers(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rdi
  void (__fastcall *v6)(__int64, void **); // rbx
  void **v7; // rax
  int updated; // eax
  unsigned int v9; // ebx
  int v11; // [rsp+20h] [rbp-E0h] BYREF
  void *v12; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v13[42]; // [rsp+30h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  if ( a3 == 2 && *(_QWORD *)(a1 + 272) )
  {
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,4,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,4,16777216,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v13);
    v13[0] = &VoiceAssistantPositionerTelemetry::VAPositioner_AppAddedToTaskbarActivity::`vftable';
    VoiceAssistantPositionerTelemetry::VAPositioner_AppAddedToTaskbarActivity::StartActivity((VoiceAssistantPositionerTelemetry::VAPositioner_AppAddedToTaskbarActivity *)v13);
    v12 = 0LL;
    v5 = *(_QWORD *)(a1 + 272);
    v6 = *(void (__fastcall **)(__int64, void **))(*(_QWORD *)v5 + 136LL);
    v7 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put(&v12);
    v6(v5, v7);
    v11 = 0;
    (*(void (__fastcall **)(__int64, void *, int *))(*(_QWORD *)a2 + 88LL))(a2, v12, &v11);
    if ( v11 )
    {
      VoiceAssistantPositionerTelemetry::VAPositioner_AppAddedToTaskbarActivity::VAPositioner_PositionPendingViewBelongsToAppAdded((VoiceAssistantPositionerTelemetry::VAPositioner_AppAddedToTaskbarActivity *)v13);
      updated = VoiceAssistantPositioner::UpdateManagedView((VoiceAssistantPositioner *)(a1 - 144));
      v9 = updated;
      if ( updated < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x224,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
          (const char *)(unsigned int)updated);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v12);
        VoiceAssistantPositionerTelemetry::VAPositioner_AppAddedToTaskbarActivity::~VAPositioner_AppAddedToTaskbarActivity((VoiceAssistantPositionerTelemetry::VAPositioner_AppAddedToTaskbarActivity *)v13);
        return v9;
      }
    }
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,4,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v13);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v12);
    VoiceAssistantPositionerTelemetry::VAPositioner_AppAddedToTaskbarActivity::~VAPositioner_AppAddedToTaskbarActivity((VoiceAssistantPositionerTelemetry::VAPositioner_AppAddedToTaskbarActivity *)v13);
  }
  return 0LL;
}
