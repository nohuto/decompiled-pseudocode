/*
 * XREFs of ??$call@P6A_NAEBUIIntegratedServicesGeographicRegionPoliciesStatics7@Profile@System@WindowsUdk@winrt@@@Z@?$factory_cache_entry@UIntegratedServicesGeographicRegionPolicies@Profile@System@WindowsUdk@winrt@@UIIntegratedServicesGeographicRegionPoliciesStatics7@2345@@impl@winrt@@QEAA?A_P$$QEAP6A_NAEBUIIntegratedServicesGeographicRegionPoliciesStatics7@Profile@System@WindowsUdk@2@@Z@Z @ 0x18061DE88
 * Callers:
 *     ??$call_factory_cast@P6A_NAEBUIIntegratedServicesGeographicRegionPoliciesStatics7@Profile@System@WindowsUdk@winrt@@@ZUIntegratedServicesGeographicRegionPolicies@2345@U12345@V_lambda_45962ca3e1ade70bce395d2c61b5b2dd_@@@impl@winrt@@YA?A_P$$QEAV_lambda_45962ca3e1ade70bce395d2c61b5b2dd_@@@Z @ 0x18061DFC8 (--$call_factory_cast@P6A_NAEBUIIntegratedServicesGeographicRegionPoliciesStatics7@Profile@System.c)
 *     ??$call_factory_cast@P6A_NAEBUIIntegratedServicesGeographicRegionPoliciesStatics7@Profile@System@WindowsUdk@winrt@@@ZUIntegratedServicesGeographicRegionPolicies@2345@U12345@V_lambda_4e5520e07e2a58037a4a6cdfef71092b_@@@impl@winrt@@YA?A_P$$QEAV_lambda_4e5520e07e2a58037a4a6cdfef71092b_@@@Z @ 0x18061E060 (--$call_factory_cast@P6A_NAEBUIIntegratedServicesGeographicRegionPoliciesStatics7@P_ea_18061E060.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801CAB80 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ??$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x1801F6FB0 (--$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUg.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802DB14D (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall winrt::impl::factory_cache_entry<winrt::WindowsUdk::System::Profile::IntegratedServicesGeographicRegionPolicies,winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics7>::call<bool (*)(winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics7 const &)>(
        __int64 a1,
        __int64 (__fastcall **a2)(__int64 *))
{
  char v3; // bl
  void (__fastcall ***v5)(_QWORD, __int64 *, __int64 *); // [rsp+20h] [rbp-19h] BYREF
  __int64 v6; // [rsp+28h] [rbp-11h] BYREF
  __int64 v7; // [rsp+30h] [rbp-9h] BYREF
  __int64 v8[3]; // [rsp+38h] [rbp-1h] BYREF
  int v9; // [rsp+50h] [rbp+17h] BYREF
  __int128 v10; // [rsp+58h] [rbp+1Fh]
  __int64 v11[5]; // [rsp+68h] [rbp+2Fh] BYREF
  __int64 v12; // [rsp+A0h] [rbp+67h] BYREF
  int v13; // [rsp+B0h] [rbp+77h] BYREF
  void (__fastcall ***v14)(_QWORD, _QWORD, _QWORD); // [rsp+B8h] [rbp+7Fh] BYREF

  v12 = a1;
  v8[0] = (__int64)L"WindowsUdk.System.Profile.IntegratedServicesGeographicRegionPolicies";
  v8[1] = 68LL;
  winrt::param::hstring::hstring((__int64)v11, v8);
  v5 = 0LL;
  v9 = 0;
  v10 = 0LL;
  winrt::impl::get_runtime_activation_factory_impl<0>(
    &v12,
    v11,
    (__int64)&winrt::impl::guid_v<winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics7>,
    (__int64)&v5);
  winrt::check_hresult(&v13, v12, (__int64)&v9);
  v14 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v5;
  if ( v5 && (v6 = 0LL, (**v5)(v5, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v6), (v7 = v6) != 0) )
  {
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v7);
    v8[2] = (__int64)&qword_1808CB038;
    _InterlockedIncrement64(&qword_1808CB038);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::System::Profile::IntegratedServicesGeographicRegionPolicies,winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics7>,
            (signed __int64)v14,
            0LL) )
    {
      v14 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1808CB040);
    }
    v3 = (*a2)(&winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::System::Profile::IntegratedServicesGeographicRegionPolicies,winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics7>);
    _InterlockedDecrement64(&qword_1808CB038);
  }
  else
  {
    v3 = (*a2)((__int64 *)&v14);
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v14);
  return v3;
}
