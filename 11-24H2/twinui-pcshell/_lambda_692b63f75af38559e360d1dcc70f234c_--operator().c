/*
 * XREFs of _lambda_692b63f75af38559e360d1dcc70f234c_::operator() @ 0x1805CBC40
 * Callers:
 *     _anonymous_namespace_::IsWidgetsThirdPartyFeedEnabledByRegionalPolicy @ 0x1805D4EA4 (_anonymous_namespace_--IsWidgetsThirdPartyFeedEnabledByRegionalPolicy.c)
 * Callees:
 *     ??$call_factory_cast@P6A_NAEBUIIntegratedServicesGeographicRegionPoliciesStatics@Profile@System@WindowsUdk@winrt@@@ZUIntegratedServicesGeographicRegionPolicies@2345@U12345@V_lambda_d40a3c21b753ac56a0209c4a8237fefe_@@@impl@winrt@@YA?A_P$$QEAV_lambda_d40a3c21b753ac56a0209c4a8237fefe_@@@Z @ 0x1805C44BC (--$call_factory_cast@P6A_NAEBUIIntegratedServicesGeographicRegionPoliciesStatics@Pr_ea_1805C44BC.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_IntegratedServicesPolicyControl@@@details@wil@@QEAA_NXZ @ 0x1805DB4DC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_IntegratedServicesPo_ea_1805DB4DC.c)
 */

char lambda_692b63f75af38559e360d1dcc70f234c_::operator()()
{
  char result; // al
  const char *v1; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  result = wil::details::FeatureImpl<__WilFeatureTraits_Feature_IntegratedServicesPolicyControl>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_IntegratedServicesPolicyControl>::GetImpl'::`2'::impl);
  if ( result )
  {
    try
    {
      result = winrt::impl::call_factory_cast<bool (*)(winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics const &),winrt::WindowsUdk::System::Profile::IntegratedServicesGeographicRegionPolicies,winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics,_lambda_d40a3c21b753ac56a0209c4a8237fefe_>();
      byte_1808CC5A0 = result;
    }
    catch ( ... )
    {
      return wil::details::in1diag3::Log_CaughtException(
               retaddr,
               (void *)0xA6,
               (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
               v1);
    }
  }
  return result;
}
