/*
 * XREFs of ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x180179368
 * Callers:
 *     ?Create@ControllerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1801790B0 (-Create@ControllerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ @ 0x180024020 (-GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x1800392B0 (-IsEdition@@YA_N_K@Z.c)
 *     ?RefreshCursorMagnetismRegistrySettings@ControllerProcessor@@AEAAXXZ @ 0x18007AE70 (-RefreshCursorMagnetismRegistrySettings@ControllerProcessor@@AEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z @ 0x18008ECDC (-Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad@@@details@wil@@QEAA_NXZ @ 0x1801325D8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad@@@.c)
 *     ?RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z @ 0x1801757C4 (-RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z.c)
 *     ?Attach@InjectionDevice@@QEAAJXZ @ 0x1801788C8 (-Attach@InjectionDevice@@QEAAJXZ.c)
 *     ?NavigationEnableGlobally@ControllerProcessor@@QEAAJXZ @ 0x180179BAC (-NavigationEnableGlobally@ControllerProcessor@@QEAAJXZ.c)
 *     ?RefreshCursorSpeedRegistrySettings@ControllerProcessor@@AEAAXXZ @ 0x180179F70 (-RefreshCursorSpeedRegistrySettings@ControllerProcessor@@AEAAXXZ.c)
 *     ?UpdateControllerNavigationMode@ControllerProcessor@@AEAAXXZ @ 0x18017B210 (-UpdateControllerNavigationMode@ControllerProcessor@@AEAAXXZ.c)
 *     ?UpdateControllerVirtualKeyMappingEnabled@ControllerProcessor@@AEAAXXZ @ 0x18017B2E8 (-UpdateControllerVirtualKeyMappingEnabled@ControllerProcessor@@AEAAXXZ.c)
 *     ?Create@ViewMenuChordedKeyHandler@@SAJP6AJPEAXAEAV?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@_N@Z0AEBV23@PEAPEAV1@@Z @ 0x18017C6EC (-Create@ViewMenuChordedKeyHandler@@SAJP6AJPEAXAEAV-$vector@U-$pair@G_N@std@@V-$allocator@U-$pair.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ControllerProcessor::Initialize(ControllerProcessor *this)
{
  char v2; // r15
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, __int64 (__fastcall *)(ControllerProcessor *), ControllerProcessor *, char *); // rsi
  HKEY v9; // rcx
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, __int64 (__fastcall *)(void *), ControllerProcessor *, char *); // rsi
  int v12; // eax
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, __int64 (__fastcall *)(ControllerProcessor *), ControllerProcessor *, char *); // rsi
  int v15; // eax
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, __int64 (__fastcall *)(__int64), ControllerProcessor *, char *); // rsi
  int v18; // eax
  ControllerNavigationManager *ControllerNavigationManager; // rax
  int v20; // eax
  HKEY v21; // rcx
  HKEY v22; // rcx
  struct ControllerNavigationManager *v23; // rbx
  HKEY v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // r8
  int v27; // eax
  __int64 v28; // rsi
  __int64 (__fastcall *v29)(__int64, char *); // rdi
  int v30; // eax
  int v31; // [rsp+20h] [rbp-10h]
  int v32; // [rsp+20h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  int v34; // [rsp+68h] [rbp+38h] BYREF
  __int64 v35; // [rsp+70h] [rbp+40h] BYREF
  __int64 v36; // [rsp+78h] [rbp+48h] BYREF

  v2 = 0;
  v35 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v35);
  v3 = CoreUICreate(&v35);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 247LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v3);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v35);
    return v4;
  }
  v6 = v35;
  v7 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(ControllerProcessor *), ControllerProcessor *, char *))(*(_QWORD *)v35 + 144LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 36);
  v3 = v7(v6, ControllerProcessor::OnAutoRepeatTimerStatic, this, (char *)this + 288);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 252LL;
    goto LABEL_5;
  }
  InjectionDevice::Attach((ControllerProcessor *)((char *)this + 1272));
  InjectionDevice::Attach((ControllerProcessor *)((char *)this + 5952));
  ControllerProcessor::RefreshCursorSpeedRegistrySettings(this);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 969);
  RegistryWatcher::Create(
    v9,
    L"Software\\Microsoft\\Input\\Settings\\ControllerProcessor\\CursorSpeed",
    (HKEY)this,
    (void (*)(void *, HKEY))lambda_b12fa00c1928b9bf49ed577602750a33_::_lambda_invoker_cdecl_,
    (struct RegistryWatcher **)this + 969);
  v10 = v35;
  v11 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(void *), ControllerProcessor *, char *))(*(_QWORD *)v35 + 144LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 37);
  v12 = v11(v10, ControllerProcessor::OnSendGameControllerAsPointerAndManipulationStatic, this, (char *)this + 296);
  if ( v12 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x111,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v12,
      v31);
  v13 = v35;
  v14 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(ControllerProcessor *), ControllerProcessor *, char *))(*(_QWORD *)v35 + 144LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 961);
  v15 = v14(v13, lambda_9acb6a30c2b0d5ba7ab65b24b73eef63_::_lambda_invoker_cdecl_, this, (char *)this + 7688);
  if ( v15 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x119,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v15,
      v31);
  v16 = v35;
  v17 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(__int64), ControllerProcessor *, char *))(*(_QWORD *)v35 + 144LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 962);
  v18 = v17(v16, lambda_8e01662f3c9310d444dda3dc493b17b5_::_lambda_invoker_cdecl_, this, (char *)this + 7696);
  if ( v18 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x121,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v18,
      v31);
  ControllerNavigationManager = ISMStatics::GetControllerNavigationManager();
  v20 = ControllerNavigationManager::RegisterControllerProcessor(
          ControllerNavigationManager,
          **((_DWORD **)this + 5),
          this);
  if ( v20 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x123,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v20,
      v31);
  ControllerProcessor::RefreshCursorMagnetismRegistrySettings(this);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 970);
  RegistryWatcher::Create(
    v21,
    L"Software\\Microsoft\\Input\\Settings\\ControllerProcessor\\CursorMagnetism",
    (HKEY)this,
    (void (*)(void *, HKEY))lambda_828562b8234057b7c70d01bfff3fe312_::_lambda_invoker_cdecl_,
    (struct RegistryWatcher **)this + 970);
  ControllerProcessor::UpdateControllerVirtualKeyMappingEnabled(this);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 972);
  RegistryWatcher::Create(
    v22,
    L"Software\\Microsoft\\Input\\Settings\\ControllerProcessor\\ControllerToVKMapping",
    (HKEY)this,
    (void (*)(void *, HKEY))lambda_e82e8f5a3f31cf71ee9f5897f2a02386_::_lambda_invoker_cdecl_,
    (struct RegistryWatcher **)this + 972);
  if ( IsEdition(8778LL) )
  {
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad>::GetImpl'::`2'::impl) )
    {
      v23 = ISMStatics::GetControllerNavigationManager();
      if ( !IsEdition(253345LL)
        && (*(unsigned __int8 (__fastcall **)(__int64))(*((_QWORD *)v23 + 1) + 24LL))((__int64)v23 + 8) )
      {
        ControllerProcessor::NavigationEnableGlobally(this);
      }
    }
    else
    {
      ControllerProcessor::UpdateControllerNavigationMode(this);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 971);
      RegistryWatcher::Create(
        v24,
        L"Software\\Microsoft\\Input\\Settings\\ControllerProcessor\\PointerModeOnDesktop",
        (HKEY)this,
        (void (*)(void *, HKEY))lambda_b2f25491a96761d2c95f2464bc62d8e1_::_lambda_invoker_cdecl_,
        (struct RegistryWatcher **)this + 971);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 973);
    v27 = ViewMenuChordedKeyHandler::Create(v25, this, v26, (char *)this + 7784);
    if ( v27 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x15D,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v27,
        v32);
  }
  v28 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 64LL))(*((_QWORD *)this + 4));
  v29 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v28 + 72LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 939);
  v30 = v29(v28, (char *)this + 7512);
  if ( v30 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x160,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v30,
      v32);
  v36 = 0LL;
  v34 = 0;
  RtlGetDeviceFamilyInfoEnum(&v36, &v34, 0LL);
  if ( v34 == 5 || (unsigned int)(v34 - 11) <= 1 )
    v2 = 1;
  *((_BYTE *)this + 7521) = v2;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v35);
  return 0LL;
}
