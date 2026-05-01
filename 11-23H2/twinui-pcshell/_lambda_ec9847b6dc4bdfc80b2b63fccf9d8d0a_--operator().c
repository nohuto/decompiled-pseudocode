/*
 * XREFs of _lambda_ec9847b6dc4bdfc80b2b63fccf9d8d0a_::operator() @ 0x18023788C
 * Callers:
 *     _anonymous_namespace_::IsWidgetsThirdPartyFeedEnabledByRegionalPolicy @ 0x18024002C (_anonymous_namespace_--IsWidgetsThirdPartyFeedEnabledByRegionalPolicy.c)
 * Callees:
 *     ??$call_factory_cast@P6A_NAEBUIIntegratedServicesGeographicRegionPoliciesStatics@Profile@System@WindowsUdk@winrt@@@ZUIntegratedServicesGeographicRegionPolicies@2345@U12345@V_lambda_d40a3c21b753ac56a0209c4a8237fefe_@@@impl@winrt@@YA?A_P$$QEAV_lambda_d40a3c21b753ac56a0209c4a8237fefe_@@@Z @ 0x18022FEC4 (--$call_factory_cast@P6A_NAEBUIIntegratedServicesGeographicRegionPoliciesStatics@Pr_ea_18022FEC4.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_IntegratedServicesPolicyControl@@@details@wil@@QEAA_NXZ @ 0x180698974 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_IntegratedServicesPo_ea_180698974.c)
 */

char lambda_ec9847b6dc4bdfc80b2b63fccf9d8d0a_::operator()()
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
      byte_18098D704 = result;
    }
    catch ( ... )
    {
      return wil::details::in1diag3::Log_CaughtException(
               retaddr,
               (void *)0xAE,
               (unsigned int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
               v1);
    }
  }
  return result;
}
