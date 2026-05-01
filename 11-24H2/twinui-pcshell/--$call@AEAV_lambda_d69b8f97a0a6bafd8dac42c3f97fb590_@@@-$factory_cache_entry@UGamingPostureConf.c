/*
 * XREFs of ??$call@AEAV_lambda_d69b8f97a0a6bafd8dac42c3f97fb590_@@@?$factory_cache_entry@UGamingPostureConfiguration@Posture@GamingExperiences@Internal@Windows@winrt@@UIGamingPostureConfigurationStatics@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_d69b8f97a0a6bafd8dac42c3f97fb590_@@@Z @ 0x180368C60
 * Callers:
 *     ?ConfigurationChanged@GamingPostureConfiguration@Posture@GamingExperiences@Internal@Windows@winrt@@SA@Uauto_revoke_t@6@AEBU?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@56@@Z @ 0x180369158 (-ConfigurationChanged@GamingPostureConfiguration@Posture@GamingExperiences@Internal@Windows@winr.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801CAB80 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802DB14D (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??$?RAEBUIGamingPostureConfigurationStatics@Posture@GamingExperiences@Internal@Windows@winrt@@@_lambda_d69b8f97a0a6bafd8dac42c3f97fb590_@@QEBA?A_PAEBUIGamingPostureConfigurationStatics@Posture@GamingExperiences@Internal@Windows@winrt@@@Z @ 0x1803689AC (--$-RAEBUIGamingPostureConfigurationStatics@Posture@GamingExperiences@Internal@Windows@winrt@@@_.c)
 *     ??$get_activation_factory@UIGamingPostureConfigurationStatics@Posture@GamingExperiences@Internal@Windows@winrt@@@winrt@@YA?AUIGamingPostureConfigurationStatics@Posture@GamingExperiences@Internal@Windows@0@AEBUhstring@param@0@@Z @ 0x180368E84 (--$get_activation_factory@UIGamingPostureConfigurationStatics@Posture@GamingExperiences@Internal.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 *__fastcall winrt::impl::factory_cache_entry<winrt::Windows::Internal::GamingExperiences::Posture::GamingPostureConfiguration,winrt::Windows::Internal::GamingExperiences::Posture::IGamingPostureConfigurationStatics>::call<_lambda_d69b8f97a0a6bafd8dac42c3f97fb590_ &>(
        __int64 a1,
        __int64 *a2,
        _QWORD *a3)
{
  _QWORD *v4; // rbx
  void (__fastcall **v5)(_QWORD *, __int64 *, __int64 *); // rax
  _QWORD *v6; // rcx
  __int64 v8[2]; // [rsp+28h] [rbp-38h] BYREF
  _BYTE v9[40]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v10; // [rsp+80h] [rbp+20h] BYREF
  _QWORD *v11; // [rsp+90h] [rbp+30h] BYREF
  __int64 v12; // [rsp+98h] [rbp+38h] BYREF

  v11 = a3;
  v10 = a1;
  v8[1] = 69LL;
  v8[0] = (__int64)L"Windows.Internal.GamingExperiences.Posture.GamingPostureConfiguration";
  winrt::param::hstring::hstring((__int64)v9, v8);
  winrt::get_activation_factory<winrt::Windows::Internal::GamingExperiences::Posture::IGamingPostureConfigurationStatics>(
    &v11,
    v9);
  v4 = v11;
  if ( v11
    && (v5 = (void (__fastcall **)(_QWORD *, __int64 *, __int64 *))*v11,
        v10 = 0LL,
        (*v5)(v11, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v10),
        (v12 = v10) != 0) )
  {
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v12);
    _InterlockedIncrement64(&qword_1808CA708);
    v6 = v11;
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::GamingExperiences::Posture::GamingPostureConfiguration,winrt::Windows::Internal::GamingExperiences::Posture::IGamingPostureConfigurationStatics>,
            (signed __int64)v11,
            0LL) )
    {
      v11 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1808CA710);
    }
    _lambda_d69b8f97a0a6bafd8dac42c3f97fb590_::operator()<winrt::Windows::Internal::GamingExperiences::Posture::IGamingPostureConfigurationStatics const &>(
      (__int64)v6,
      a2);
    _InterlockedDecrement64(&qword_1808CA708);
  }
  else
  {
    *a2 = (__int64)v4;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a2);
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v11);
  return a2;
}
