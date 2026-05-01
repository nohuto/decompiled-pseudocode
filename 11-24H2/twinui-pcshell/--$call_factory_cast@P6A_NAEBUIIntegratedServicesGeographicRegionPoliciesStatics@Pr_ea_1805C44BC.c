/*
 * XREFs of ??$call_factory_cast@P6A_NAEBUIIntegratedServicesGeographicRegionPoliciesStatics@Profile@System@WindowsUdk@winrt@@@ZUIntegratedServicesGeographicRegionPolicies@2345@U12345@V_lambda_d40a3c21b753ac56a0209c4a8237fefe_@@@impl@winrt@@YA?A_P$$QEAV_lambda_d40a3c21b753ac56a0209c4a8237fefe_@@@Z @ 0x1805C44BC
 * Callers:
 *     _lambda_692b63f75af38559e360d1dcc70f234c_::operator() @ 0x1805CBC40 (_lambda_692b63f75af38559e360d1dcc70f234c_--operator().c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$call@P6A_NAEBUIIntegratedServicesGeographicRegionPoliciesStatics@Profile@System@WindowsUdk@winrt@@@Z@?$factory_cache_entry@UIntegratedServicesGeographicRegionPolicies@Profile@System@WindowsUdk@winrt@@UIIntegratedServicesGeographicRegionPoliciesStatics@2345@@impl@winrt@@QEAA?A_P$$QEAP6A_NAEBUIIntegratedServicesGeographicRegionPoliciesStatics@Profile@System@WindowsUdk@2@@Z@Z @ 0x1803B0688 (--$call@P6A_NAEBUIIntegratedServicesGeographicRegionPoliciesStatics@Profile@System@WindowsUdk@wi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
char winrt::impl::call_factory_cast<bool (*)(winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics const &),winrt::WindowsUdk::System::Profile::IntegratedServicesGeographicRegionPolicies,winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics,_lambda_d40a3c21b753ac56a0209c4a8237fefe_>()
{
  int v0; // eax
  int v2; // [rsp+20h] [rbp-28h] BYREF
  __int128 v3; // [rsp+28h] [rbp-20h]
  char (__fastcall *v4)(const struct winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics *); // [rsp+58h] [rbp+10h] BYREF
  int v5; // [rsp+68h] [rbp+20h] BYREF

  _InterlockedIncrement64(&qword_1808CB058);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::System::Profile::IntegratedServicesGeographicRegionPolicies,winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics> )
  {
    LOBYTE(v4) = 0;
    v2 = 0;
    v3 = 0LL;
    v0 = (*(__int64 (__fastcall **)(__int64, char (__fastcall **)(const struct winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics *)))(*(_QWORD *)winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::System::Profile::IntegratedServicesGeographicRegionPolicies,winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics> + 152LL))(
           winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::System::Profile::IntegratedServicesGeographicRegionPolicies,winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics>,
           &v4);
    winrt::check_hresult(&v5, v0, (__int64)&v2);
    _InterlockedDecrement64(&qword_1808CB058);
    return (char)v4;
  }
  else
  {
    _InterlockedDecrement64(&qword_1808CB058);
    v4 = _lambda_d40a3c21b753ac56a0209c4a8237fefe_::_lambda_invoker_cdecl_;
    return winrt::impl::factory_cache_entry<winrt::WindowsUdk::System::Profile::IntegratedServicesGeographicRegionPolicies,winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics>::call<bool (*)(winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics const &)>(
             0LL,
             (__int64 (__fastcall **)(__int64 *))&v4);
  }
}
