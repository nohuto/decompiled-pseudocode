/*
 * XREFs of ??$call_factory_cast@P6A_NAEBUIIntegratedServicesGeographicRegionPoliciesStatics10@Profile@System@WindowsUdk@winrt@@@ZUIntegratedServicesGeographicRegionPolicies@2345@U12345@V_lambda_4a76f4c353a24e2395a591da54beacae_@@@impl@winrt@@YA?A_P$$QEAV_lambda_4a76f4c353a24e2395a591da54beacae_@@@Z @ 0x1805C4424
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::RunWidgetCanvasDelayedInitializeAsync$_ResumeCoro$1 @ 0x1805D67E0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--RunWidgetCanvasD_ea_1805D67E0.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$call@P6A_NAEBUIIntegratedServicesGeographicRegionPoliciesStatics10@Profile@System@WindowsUdk@winrt@@@Z@?$factory_cache_entry@UIntegratedServicesGeographicRegionPolicies@Profile@System@WindowsUdk@winrt@@UIIntegratedServicesGeographicRegionPoliciesStatics10@2345@@impl@winrt@@QEAA?A_P$$QEAP6A_NAEBUIIntegratedServicesGeographicRegionPoliciesStatics10@Profile@System@WindowsUdk@2@@Z@Z @ 0x1805C41BC (--$call@P6A_NAEBUIIntegratedServicesGeographicRegionPoliciesStatics10@Profile@System@WindowsUdk@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char winrt::impl::call_factory_cast<bool (*)(winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics10 const &),winrt::WindowsUdk::System::Profile::IntegratedServicesGeographicRegionPolicies,winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics10,_lambda_4a76f4c353a24e2395a591da54beacae_>()
{
  int v0; // eax
  int v2; // [rsp+20h] [rbp-28h] BYREF
  __int128 v3; // [rsp+28h] [rbp-20h]
  char (__fastcall *v4)(__int64 *); // [rsp+58h] [rbp+10h] BYREF
  int v5; // [rsp+68h] [rbp+20h] BYREF

  _InterlockedIncrement64(&qword_1808CB078);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::System::Profile::IntegratedServicesGeographicRegionPolicies,winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics10> )
  {
    LOBYTE(v4) = 0;
    v2 = 0;
    v3 = 0LL;
    v0 = (*(__int64 (__fastcall **)(__int64, char (__fastcall **)(__int64 *)))(*(_QWORD *)winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::System::Profile::IntegratedServicesGeographicRegionPolicies,winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics10>
                                                                             + 48LL))(
           winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::System::Profile::IntegratedServicesGeographicRegionPolicies,winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics10>,
           &v4);
    winrt::check_hresult(&v5, v0, (__int64)&v2);
    _InterlockedDecrement64(&qword_1808CB078);
    return (char)v4;
  }
  else
  {
    _InterlockedDecrement64(&qword_1808CB078);
    v4 = winrt::impl::consume_WindowsUdk_UI_Shell_IWebSearchProvider<winrt::WindowsUdk::UI::Shell::IWebSearchProvider>::IsSystemProvided;
    return winrt::impl::factory_cache_entry<winrt::WindowsUdk::System::Profile::IntegratedServicesGeographicRegionPolicies,winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics10>::call<bool (*)(winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics10 const &)>(
             0LL,
             (__int64 (__fastcall **)(__int64 *))&v4);
  }
}
