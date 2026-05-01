/*
 * XREFs of ?ControlLost@VoiceAssistantPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x18050A9B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003068C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x18003EE68 (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18009B530 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800A24F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180296A94 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Par.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??1VAPositioner_ControlLostActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ @ 0x18050A208 (--1VAPositioner_ControlLostActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ.c)
 *     ?ControlLostHelper@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18050AC08 (-ControlLostHelper@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?CreateFromPropertySet@PropertySetHelper@ShellHelpers@Internal@Windows@@SAJAEAV1234@@Z @ 0x18050B350 (-CreateFromPropertySet@PropertySetHelper@ShellHelpers@Internal@Windows@@SAJAEAV1234@@Z.c)
 *     ?HideView@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18050BCE0 (-HideView@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?StartActivity@VAPositioner_ControlLostActivity@VoiceAssistantPositionerTelemetry@@QEAAXW4SHELL_POSITIONER_TYPE@@@Z @ 0x18050D19C (-StartActivity@VAPositioner_ControlLostActivity@VoiceAssistantPositionerTelemetry@@QEAAXW4SHELL_.c)
 *     ?Stop@VAPositioner_ControlLostActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIApplicationView@@@Z @ 0x18050DBC4 (-Stop@VAPositioner_ControlLostActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIApplicationV.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall VoiceAssistantPositioner::ControlLost(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  int v8; // eax
  char v9; // bl
  __int64 v10; // r8
  int v11; // eax
  int v12; // eax
  int (__fastcall *v13)(__int64, _QWORD, GUID *, __int64 *); // rbx
  __int64 *v14; // rax
  VoiceAssistantPositioner *v15; // rcx
  int v16; // eax
  int v17; // eax
  __int64 v18; // rax
  int v19; // [rsp+20h] [rbp-E0h]
  struct IUnknown *v20; // [rsp+30h] [rbp-D0h] BYREF
  int v21; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+40h] [rbp-C0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+60h] [rbp-A0h]
  _QWORD v25[42]; // [rsp+70h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+108h]

  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v25,
    (__int64)"VAPositioner_ControlLostActivity");
  v25[0] = &VoiceAssistantPositionerTelemetry::VAPositioner_ControlLostActivity::`vftable';
  VoiceAssistantPositionerTelemetry::VAPositioner_ControlLostActivity::StartActivity(v25, a3);
  v22 = 0LL;
  v8 = Windows::Internal::ShellHelpers::PropertySetHelper::CreateFromPropertySet((struct Windows::Internal::ShellHelpers::PropertySetHelper *)&v22);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1BF,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
      (const char *)(unsigned int)v8,
      v19);
  v9 = *(_BYTE *)(a1 + 305);
  v24 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"VoicePositionerMinimising",
    0x1Au,
    0x19u);
  v11 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(&v22, v24, v10, v9);
  if ( v11 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1C0,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
      (const char *)(unsigned int)v11,
      v19);
  *(_BYTE *)(a1 + 305) = 0;
  v21 = 0;
  v12 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 24LL))(a2, &v21);
  if ( v12 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1C6,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
      (const char *)(unsigned int)v12);
  if ( v21 != 1 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1C7,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
      (const char *)0x80070057LL);
  v20 = 0LL;
  v13 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)a2 + 32LL);
  v14 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&v20);
  if ( v13(a2, 0LL, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v14) >= 0 )
  {
    if ( !a3 && SHIsSameObject(v20, *(struct IUnknown **)(a1 + 256)) )
    {
      v16 = VoiceAssistantPositioner::HideView(v15, (struct IApplicationView *)v20);
      if ( v16 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1D0,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
          (const char *)(unsigned int)v16);
    }
    v17 = VoiceAssistantPositioner::ControlLostHelper(
            (VoiceAssistantPositioner *)(a1 - 120),
            (struct IApplicationView *)v20);
    if ( v17 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1D2,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
        (const char *)(unsigned int)v17);
  }
  VoiceAssistantPositionerTelemetry::VAPositioner_ControlLostActivity::Stop(
    (VoiceAssistantPositionerTelemetry::VAPositioner_ControlLostActivity *)v25,
    (struct IApplicationView *)v20);
  v18 = v22;
  v22 = 0LL;
  *a4 = v18;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v20);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
  VoiceAssistantPositionerTelemetry::VAPositioner_ControlLostActivity::~VAPositioner_ControlLostActivity((VoiceAssistantPositionerTelemetry::VAPositioner_ControlLostActivity *)v25);
}
