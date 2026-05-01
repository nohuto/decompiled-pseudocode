/*
 * XREFs of ?ActivateApplicationByAumid@ApplicationActivation@Private@Activation@ApplicationModel@Windows@winrt@@SA@AEBUUser@System@56@AEBUhstring@param@6@1AEBUIApplicationActivationProperties@23456@@Z @ 0x18032DBA4
 * Callers:
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::TryLaunchGamingAppAsync$_ResumeCoro$1 @ 0x1803349A0 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_1803349A0.c)
 * Callees:
 *     ??$call@AEAV_lambda_70b051b147a59718249e2c684009dcdc_@@@?$factory_cache_entry@UApplicationActivation@Private@Activation@ApplicationModel@Windows@winrt@@UIApplicationActivationStatics@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_70b051b147a59718249e2c684009dcdc_@@@Z @ 0x18032A74C (--$call@AEAV_lambda_70b051b147a59718249e2c684009dcdc_@@@-$factory_cache_entry@UApplicationActiva.c)
 *     ??R_lambda_70b051b147a59718249e2c684009dcdc_@@QEBA@AEBUIApplicationActivationStatics@Private@Activation@ApplicationModel@Windows@winrt@@@Z @ 0x18032D62C (--R_lambda_70b051b147a59718249e2c684009dcdc_@@QEBA@AEBUIApplicationActivationStatics@Private@Act.c)
 */

// Hidden C++ exception states: #wind=1
const struct winrt::Windows::System::User *__fastcall winrt::Windows::ApplicationModel::Activation::Private::ApplicationActivation::ActivateApplicationByAumid(
        const struct winrt::Windows::System::User *a1,
        const struct winrt::param::hstring *a2,
        const struct winrt::param::hstring *a3,
        const struct winrt::Windows::ApplicationModel::Activation::Private::IApplicationActivationProperties *a4,
        __int64 a5)
{
  _QWORD v7[6]; // [rsp+28h] [rbp-30h] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v7[3] = a5;
  _InterlockedIncrement64(&qword_1808CA418);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::ApplicationModel::Activation::Private::ApplicationActivation,winrt::Windows::ApplicationModel::Activation::Private::IApplicationActivationStatics> )
  {
    _lambda_70b051b147a59718249e2c684009dcdc_::operator()(
      v7,
      (__int64)a1,
      (int)&winrt::impl::factory_cache_entry_v<winrt::Windows::ApplicationModel::Activation::Private::ApplicationActivation,winrt::Windows::ApplicationModel::Activation::Private::IApplicationActivationStatics>);
    _InterlockedDecrement64(&qword_1808CA418);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808CA418);
    winrt::impl::factory_cache_entry<winrt::Windows::ApplicationModel::Activation::Private::ApplicationActivation,winrt::Windows::ApplicationModel::Activation::Private::IApplicationActivationStatics>::call<_lambda_70b051b147a59718249e2c684009dcdc_ &>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))a1,
      (__int64)a1,
      (__int64)v7);
  }
  return a1;
}
