/*
 * XREFs of ?RegisterForCompositionCapabilitiesChange@AcrylicPolicyManager@@AEAAJXZ @ 0x180113310
 * Callers:
 *     ?SubscribeToServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801130F0 (-SubscribeToServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18001C8F0 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800EEF7C (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_b_ea_1800EEF7C.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800EEFFC (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ??$Initialize@UICompositionCapabilitiesChangedHandler@@@AgileGitPtr@@QEAAJAEBV?$ComPtr@UICompositionCapabilitiesChangedHandler@@@WRL@Microsoft@@@Z @ 0x1801134BC (--$Initialize@UICompositionCapabilitiesChangedHandler@@@AgileGitPtr@@QEAAJAEBV-$ComPtr@UIComposi.c)
 *     ??$make_wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@KPEAPEAU?$wnf_subscription_state@Uempty_wnf_state@details@wil@@@01@@Z @ 0x1801136F4 (--$make_wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@YAJAEBU_WNF_STATE_NAM.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     wistd::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_0c47c778364085ea81fae706b8ebeb3b__void_ @ 0x1802DFF94 (wistd--function_void___cdecl(void)_--function_void___cdecl(void)___lambda_0c47c778364085ea81fae7.c)
 *     _lambda_383a1ad20d5032ad96979058c699feb6_::_lambda_383a1ad20d5032ad96979058c699feb6_ @ 0x1802E03CC (_lambda_383a1ad20d5032ad96979058c699feb6_--_lambda_383a1ad20d5032ad96979058c699feb6_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AcrylicPolicyManager::RegisterForCompositionCapabilitiesChange(wil::details **this)
{
  unsigned __int64 v2; // rbx
  int v3; // eax
  unsigned int v4; // edi
  __int64 v6; // rax
  int v7; // eax
  wil::details *v8; // rcx
  struct wil::details::wnf_subscription_state_base *v9; // rdx
  __int64 v10; // [rsp+28h] [rbp-49h] BYREF
  wil::details *v11; // [rsp+30h] [rbp-41h] BYREF
  unsigned __int64 v12; // [rsp+38h] [rbp-39h] BYREF
  _BYTE v13[8]; // [rsp+40h] [rbp-31h] BYREF
  _BYTE v14[112]; // [rsp+48h] [rbp-29h] BYREF
  __int64 v15; // [rsp+B8h] [rbp+47h]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v2 = (unsigned __int64)(this + 18) & -(__int64)(this != 0LL);
  v12 = v2;
  if ( v2 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v2 + 8LL))((unsigned __int64)(this + 18) & -(__int64)(this != 0LL));
  v10 = 0LL;
  v3 = AgileGitPtr::Initialize<ICompositionCapabilitiesChangedHandler>(&v10, &v12);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBD,
      (int)"pcshell\\twinui\\acrylicmanager\\lib\\acrylicpolicymanager.cpp",
      (const char *)(unsigned int)v3);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
    if ( v2 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v2 + 16LL))(v2);
    return v4;
  }
  v6 = lambda_383a1ad20d5032ad96979058c699feb6_::_lambda_383a1ad20d5032ad96979058c699feb6_(v13, &v10);
  wistd::function_void___cdecl_void__::function_void___cdecl_void____lambda_0c47c778364085ea81fae706b8ebeb3b__void_(
    v14,
    v6);
  v11 = 0LL;
  v7 = wil::details::make_wnf_subscription_state<wil::details::empty_wnf_state>(
         &WNF_DWM_COMPOSITIONCAPABILITIES,
         v14,
         0LL,
         &v11);
  v8 = 0LL;
  if ( v7 >= 0 )
    v8 = v11;
  v11 = v8;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>>::operator=(
    this + 43,
    &v11);
  if ( v11 )
    wil::details::delete_wnf_subscription_state(v11, v9);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 24LL))(v15);
  if ( !this[43] )
  {
    v4 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC8,
      (int)"pcshell\\twinui\\acrylicmanager\\lib\\acrylicpolicymanager.cpp",
      (const char *)0x8007000ELL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
    if ( v2 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v2 + 16LL))(v2);
    return v4;
  }
  Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>(&v10);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v12);
  return 0LL;
}
