/*
 * XREFs of ??R_lambda_70b051b147a59718249e2c684009dcdc_@@QEBA@AEBUIApplicationActivationStatics@Private@Activation@ApplicationModel@Windows@winrt@@@Z @ 0x18032D62C
 * Callers:
 *     ??$call@AEAV_lambda_70b051b147a59718249e2c684009dcdc_@@@?$factory_cache_entry@UApplicationActivation@Private@Activation@ApplicationModel@Windows@winrt@@UIApplicationActivationStatics@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_70b051b147a59718249e2c684009dcdc_@@@Z @ 0x18032A74C (--$call@AEAV_lambda_70b051b147a59718249e2c684009dcdc_@@@-$factory_cache_entry@UApplicationActiva.c)
 *     ?ActivateApplicationByAumid@ApplicationActivation@Private@Activation@ApplicationModel@Windows@winrt@@SA@AEBUUser@System@56@AEBUhstring@param@6@1AEBUIApplicationActivationProperties@23456@@Z @ 0x18032DBA4 (-ActivateApplicationByAumid@ApplicationActivation@Private@Activation@ApplicationModel@Windows@wi.c)
 * Callees:
 *     ?ActivateApplicationByAumid@?$consume_Windows_ApplicationModel_Activation_Private_IApplicationActivationStatics@UIApplicationActivationStatics@Private@Activation@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@AEBUUser@System@Windows@3@AEBUhstring@param@3@1AEBUIApplicationActivationProperties@Private@Activation@ApplicationModel@63@@Z @ 0x18032DB18 (-ActivateApplicationByAumid@-$consume_Windows_ApplicationModel_Activation_Private_IApplicationAc.c)
 */

__int64 __fastcall _lambda_70b051b147a59718249e2c684009dcdc_::operator()(_QWORD *a1, __int64 a2, int a3)
{
  winrt::impl::consume_Windows_ApplicationModel_Activation_Private_IApplicationActivationStatics<winrt::Windows::ApplicationModel::Activation::Private::IApplicationActivationStatics>::ActivateApplicationByAumid(
    a3,
    a2,
    *a1,
    a1[1],
    a1[2],
    a1[3]);
  return a2;
}
