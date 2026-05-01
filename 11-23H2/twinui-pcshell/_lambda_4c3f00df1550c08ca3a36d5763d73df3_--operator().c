/*
 * XREFs of _lambda_4c3f00df1550c08ca3a36d5763d73df3_::operator() @ 0x18005C8E4
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Microsoft::UI::Xaml::ResourceManagerRequestedEventArgs___lambda_4c3f00df1550c08ca3a36d5763d73df3___::Invoke @ 0x18005C8A0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Foundation--.c)
 * Callees:
 *     ??$as@UIResourceManager@Resources@ApplicationModel@Windows@Microsoft@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@6@$0A@@impl@winrt@@YA?AUIResourceManager@Resources@ApplicationModel@Windows@Microsoft@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x18005C9DC (--$as@UIResourceManager@Resources@ApplicationModel@Windows@Microsoft@winrt@@Utype@-$abi@UIUnknow.c)
 *     ?GetMicrosoftResourceManager@?$consume_Windows_ApplicationModel_Resources_Core_Internal_ISystemResourceManagerStatics@UISystemResourceManagerStatics@Internal@Core@Resources@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18005CA64 (-GetMicrosoftResourceManager@-$consume_Windows_ApplicationModel_Resources_Core_Internal_ISystemR.c)
 *     ??$call@P6A?AUIInspectable@Foundation@Windows@winrt@@AEBUISystemResourceManagerStatics@Internal@Core@Resources@ApplicationModel@34@@Z@?$factory_cache_entry@USystemResourceManager@Internal@Core@Resources@ApplicationModel@Windows@winrt@@UISystemResourceManagerStatics@234567@@impl@winrt@@QEAA?A_P$$QEAP6A?AUIInspectable@Foundation@Windows@2@AEBUISystemResourceManagerStatics@Internal@Core@Resources@ApplicationModel@52@@Z@Z @ 0x18005CAD8 (--$call@P6A-AUIInspectable@Foundation@Windows@winrt@@AEBUISystemResourceManagerStatics@Internal@.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall lambda_4c3f00df1550c08ca3a36d5763d73df3_::operator()(__int64 a1, __int64 a2, __int64 **a3)
{
  __int64 *v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rbx
  int v7; // eax
  _QWORD v8[2]; // [rsp+20h] [rbp-38h] BYREF
  const struct winrt::Windows::ApplicationModel::Resources::Core::Internal::ISystemResourceManagerStatics *(__fastcall *v9)(const struct winrt::Windows::ApplicationModel::Resources::Core::Internal::ISystemResourceManagerStatics *, __int64); // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+38h] [rbp-20h] BYREF

  v8[1] = &qword_18098E8B8;
  _InterlockedIncrement64(&qword_18098E8B8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::ApplicationModel::Resources::Core::Internal::SystemResourceManager,winrt::Windows::ApplicationModel::Resources::Core::Internal::ISystemResourceManagerStatics> )
  {
    winrt::impl::consume_Windows_ApplicationModel_Resources_Core_Internal_ISystemResourceManagerStatics<winrt::Windows::ApplicationModel::Resources::Core::Internal::ISystemResourceManagerStatics>::GetMicrosoftResourceManager(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::ApplicationModel::Resources::Core::Internal::SystemResourceManager,winrt::Windows::ApplicationModel::Resources::Core::Internal::ISystemResourceManagerStatics>,
      &v10);
    _InterlockedDecrement64(&qword_18098E8B8);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098E8B8);
    v9 = _lambda_218f5c44447043d3f5f5578f41148c65_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::ApplicationModel::Resources::Core::Internal::SystemResourceManager,winrt::Windows::ApplicationModel::Resources::Core::Internal::ISystemResourceManagerStatics>::call<winrt::Windows::Foundation::IInspectable (*)(winrt::Windows::ApplicationModel::Resources::Core::Internal::ISystemResourceManagerStatics const &)>(
      a1,
      &v10,
      &v9);
  }
  winrt::impl::as<winrt::Microsoft::Windows::ApplicationModel::Resources::IResourceManager,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    v8,
    v10);
  v4 = *a3;
  v5 = **a3;
  v6 = v8[0];
  v7 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v5 + 56))(v4, v8[0]);
  if ( v7 < 0 )
    winrt::throw_hresult((unsigned int)v7);
  if ( v6 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v8);
  if ( v10 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v10);
}
