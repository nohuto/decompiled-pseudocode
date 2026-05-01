/*
 * XREFs of ?RuntimeClassInitialize@AccessibilityExperienceManager@@QEAAJXZ @ 0x180174AD8
 * Callers:
 *     ??$MakeAndInitialize@VAccessibilityExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAccessibilityExperienceManager@@@Z @ 0x1801749FC (--$MakeAndInitialize@VAccessibilityExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAc.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18001C8F0 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJAEBU_GUID@@@Z @ 0x1800460A4 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJAEBU_GUID@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@@012@@Z @ 0x1800785EC (--$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJV-$ComPtrRef@V-.c)
 *     ??$make_wnf_subscription_state@K@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBK@Z@wistd@@KPEAPEAU?$wnf_subscription_state@K@01@@Z @ 0x1800EE87C (--$make_wnf_subscription_state@K@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV-$function@$$A6AXAEB.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800EEF7C (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_b_ea_1800EEF7C.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800EEFFC (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ??$Initialize@UIEyeControlManager@Input@Internal@UI@Windows@@@AgileGitPtr@@QEAAJAEBV?$ComPtr@UIEyeControlManager@Input@Internal@UI@Windows@@@WRL@Microsoft@@@Z @ 0x180174EDC (--$Initialize@UIEyeControlManager@Input@Internal@UI@Windows@@@AgileGitPtr@@QEAAJAEBV-$ComPtr@UIE.c)
 *     ?EnsureInputDeviceWatcher@AccessibilityExperienceManager@@AEAAJXZ @ 0x180174FCC (-EnsureInputDeviceWatcher@AccessibilityExperienceManager@@AEAAJXZ.c)
 *     ?Subscribe@WnfHelper@@QEAAJPEAUIWnfCallback@@@Z @ 0x180235F1C (-Subscribe@WnfHelper@@QEAAJPEAUIWnfCallback@@@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802B7C4C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$make_shared@VWnfHelper@@$$V@std@@YA?AV?$shared_ptr@VWnfHelper@@@0@XZ @ 0x1802C9004 (--$make_shared@VWnfHelper@@$$V@std@@YA-AV-$shared_ptr@VWnfHelper@@@0@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     _lambda_383a1ad20d5032ad96979058c699feb6_::_lambda_383a1ad20d5032ad96979058c699feb6_ @ 0x1802E03CC (_lambda_383a1ad20d5032ad96979058c699feb6_--_lambda_383a1ad20d5032ad96979058c699feb6_.c)
 *     wistd::function_void___cdecl(unsigned_long_const_&)_::function_void___cdecl(unsigned_long_const_&)___lambda_383a1ad20d5032ad96979058c699feb6__void_ @ 0x18048CC5C (wistd--function_void___cdecl(unsigned_long_const_-)_--function_void___cdecl(unsigned_long_const_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall AccessibilityExperienceManager::RuntimeClassInitialize(AccessibilityExperienceManager *this)
{
  HWND Window; // rax
  char *v3; // rdi
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  int v7; // eax
  HRESULT v8; // eax
  int v9; // edx
  unsigned int v10; // r8d
  HSTRING v11; // rbx
  int ActivationFactory; // eax
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, char *, char *); // r14
  int v17; // eax
  __int64 *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  std::_Ref_count_base *v21; // rcx
  WnfHelper *v22; // rcx
  __int64 v23; // rax
  int wnf_subscription; // eax
  wil::details *v25; // rcx
  struct wil::details::wnf_subscription_state_base *v26; // rdx
  __int64 v28; // rcx
  __int64 v29; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v30; // [rsp+68h] [rbp-98h] BYREF
  wil::details *v31; // [rsp+70h] [rbp-90h] BYREF
  __int64 v32; // [rsp+78h] [rbp-88h] BYREF
  WNDCLASSEXW v33; // [rsp+80h] [rbp-80h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+D0h] [rbp-30h] BYREF
  HSTRING string; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v36[112]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v37; // [rsp+160h] [rbp+60h]
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  memset_0(&v33, 0, sizeof(v33));
  v33.cbSize = 80;
  v33.lpfnWndProc = (WNDPROC)_AccessibilityEMWndProc;
  v33.lpszClassName = L"AccessibilityEMWndClass";
  RegisterClassExW(&v33);
  Window = CreateWindowExW(
             0,
             L"AccessibilityEMWndClass",
             L"AccessibilityEMWnd",
             0,
             0,
             0,
             0,
             0,
             HWND_MESSAGE,
             0LL,
             0LL,
             0LL);
  *((_QWORD *)this + 53) = Window;
  SetWindowLongPtrW(Window, -21, (LONG_PTR)this);
  qword_1808CBCF0 = (__int64)L"Microsoft.ECApp_8wekyb3d8bbwe!App";
  v3 = (char *)this + 144;
  v32 = (__int64)this + 144;
  if ( this != (AccessibilityExperienceManager *)-144LL )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v3 + 8LL))((char *)this + 144);
  v30 = 0LL;
  v4 = AgileGitPtr::Initialize<Windows::UI::Internal::Input::IEyeControlManager>(&v30, &v32);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 103LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
LABEL_33:
    Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>(&v30);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
    return v5;
  }
  v7 = CImmersiveShellComponent::RegisterServiceInformation(
         (AccessibilityExperienceManager *)((char *)this + 48),
         (const struct _GUID *)&SID_AccessibilityExperienceManager);
  v5 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x69,
      (int)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v30);
    if ( this != (AccessibilityExperienceManager *)-144LL )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v3 + 16LL))((char *)this + 144);
    return v5;
  }
  v4 = Microsoft::WRL::Details::MakeAndInitialize<CreationThreadDispatcher,CreationThreadDispatcher,>((__int64)this + 288);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 107LL;
    goto LABEL_11;
  }
  v29 = 0LL;
  string = 0LL;
  v8 = WindowsCreateStringReference(L"Windows.UI.Internal.Input.EyeControlApp", 0x27u, &hstringHeader, &string);
  if ( v8 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v8, v9, v10);
    __debugbreak();
  }
  v11 = string;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v29);
  ActivationFactory = RoGetActivationFactory(v11, &GUID_fc3ec75f_fb9f_4147_93fc_59b58dbf65be, &v29);
  v5 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v13 = (unsigned int)ActivationFactory;
    v14 = 110LL;
LABEL_32:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)v13);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v29);
    goto LABEL_33;
  }
  v15 = v29;
  v16 = *(__int64 (__fastcall **)(__int64, char *, char *))(*(_QWORD *)v29 + 48LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 51);
  v17 = v16(v15, (char *)this + 144, (char *)this + 408);
  v5 = v17;
  if ( v17 < 0 )
  {
    v13 = (unsigned int)v17;
    v14 = 111LL;
    goto LABEL_32;
  }
  v18 = (__int64 *)std::make_shared<WnfHelper,>(&hstringHeader);
  v19 = *v18;
  v20 = v18[1];
  *v18 = 0LL;
  v18[1] = 0LL;
  *((_QWORD *)this + 37) = v19;
  v21 = (std::_Ref_count_base *)*((_QWORD *)this + 38);
  *((_QWORD *)this + 38) = v20;
  if ( v21 )
    std::_Ref_count_base::_Decref(v21);
  if ( *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] )
    std::_Ref_count_base::_Decref(*(std::_Ref_count_base **)&hstringHeader.Reserved.Reserved2[8]);
  v22 = (WnfHelper *)*((_QWORD *)this + 37);
  if ( v22 )
    WnfHelper::Subscribe(
      v22,
      (struct IWnfCallback *)(((unsigned __int64)this + 136) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
  v23 = lambda_383a1ad20d5032ad96979058c699feb6_::_lambda_383a1ad20d5032ad96979058c699feb6_(&hstringHeader, &v30);
  wistd::function_void___cdecl_unsigned_long_const____::function_void___cdecl_unsigned_long_const______lambda_383a1ad20d5032ad96979058c699feb6__void_(
    v36,
    v23);
  v31 = 0LL;
  wnf_subscription = wil::details::make_wnf_subscription_state<unsigned long>(
                       &WNF_SHEL_LOCKSCREEN_ACTIVE,
                       (__int64)v36,
                       0,
                       &v31);
  v25 = 0LL;
  if ( wnf_subscription >= 0 )
    v25 = v31;
  v31 = v25;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>>::operator=(
    (wil::details **)this + 39,
    &v31);
  if ( v31 )
    wil::details::delete_wnf_subscription_state(v31, v26);
  if ( v37 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 24LL))(v37);
  if ( !*((_QWORD *)this + 39) )
  {
    v5 = -2147467259;
    v13 = 2147500037LL;
    v14 = 130LL;
    goto LABEL_32;
  }
  AccessibilityExperienceManager::EnsureInputDeviceWatcher(this);
  v28 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v30);
  if ( this != (AccessibilityExperienceManager *)-144LL )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v3 + 16LL))((char *)this + 144);
  return 0LL;
}
