/*
 * XREFs of ??$call@AEAV_lambda_70b051b147a59718249e2c684009dcdc_@@@?$factory_cache_entry@UApplicationActivation@Private@Activation@ApplicationModel@Windows@winrt@@UIApplicationActivationStatics@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_70b051b147a59718249e2c684009dcdc_@@@Z @ 0x18032A74C
 * Callers:
 *     ?ActivateApplicationByAumid@ApplicationActivation@Private@Activation@ApplicationModel@Windows@winrt@@SA@AEBUUser@System@56@AEBUhstring@param@6@1AEBUIApplicationActivationProperties@23456@@Z @ 0x18032DBA4 (-ActivateApplicationByAumid@ApplicationActivation@Private@Activation@ApplicationModel@Windows@wi.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801CAB80 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802DB14D (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??$get_activation_factory@UIApplicationActivationStatics@Private@Activation@ApplicationModel@Windows@winrt@@@winrt@@YA?AUIApplicationActivationStatics@Private@Activation@ApplicationModel@Windows@0@AEBUhstring@param@0@@Z @ 0x18032AA1C (--$get_activation_factory@UIApplicationActivationStatics@Private@Activation@ApplicationModel@Win.c)
 *     ??R_lambda_70b051b147a59718249e2c684009dcdc_@@QEBA@AEBUIApplicationActivationStatics@Private@Activation@ApplicationModel@Windows@winrt@@@Z @ 0x18032D62C (--R_lambda_70b051b147a59718249e2c684009dcdc_@@QEBA@AEBUIApplicationActivationStatics@Private@Act.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::ApplicationModel::Activation::Private::ApplicationActivation,winrt::Windows::ApplicationModel::Activation::Private::IApplicationActivationStatics>::call<_lambda_70b051b147a59718249e2c684009dcdc_ &>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        __int64 a2,
        __int64 a3)
{
  __int64 v6[2]; // [rsp+28h] [rbp-48h] BYREF
  __int64 v7[2]; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v8[40]; // [rsp+48h] [rbp-28h] BYREF
  void (__fastcall ***v9)(_QWORD, __int64 *, __int64 *); // [rsp+80h] [rbp+10h] BYREF
  __int64 v10; // [rsp+98h] [rbp+28h] BYREF

  v9 = a1;
  v7[0] = (__int64)L"Windows.ApplicationModel.Activation.Private.ApplicationActivation";
  v7[1] = 65LL;
  winrt::param::hstring::hstring((__int64)v8, v7);
  winrt::get_activation_factory<winrt::Windows::ApplicationModel::Activation::Private::IApplicationActivationStatics>(
    &v9,
    v8);
  if ( v9 && (v10 = 0LL, (**v9)(v9, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v10), (v6[0] = v10) != 0) )
  {
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v6);
    v6[1] = (__int64)&qword_1808CA418;
    _InterlockedIncrement64(&qword_1808CA418);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::ApplicationModel::Activation::Private::ApplicationActivation,winrt::Windows::ApplicationModel::Activation::Private::IApplicationActivationStatics>,
            (signed __int64)v9,
            0LL) )
    {
      v9 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1808CA420);
    }
    _lambda_70b051b147a59718249e2c684009dcdc_::operator()(
      a3,
      a2,
      &winrt::impl::factory_cache_entry_v<winrt::Windows::ApplicationModel::Activation::Private::ApplicationActivation,winrt::Windows::ApplicationModel::Activation::Private::IApplicationActivationStatics>);
    _InterlockedDecrement64(&qword_1808CA418);
  }
  else
  {
    _lambda_70b051b147a59718249e2c684009dcdc_::operator()(a3, a2, &v9);
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v9);
  return a2;
}
