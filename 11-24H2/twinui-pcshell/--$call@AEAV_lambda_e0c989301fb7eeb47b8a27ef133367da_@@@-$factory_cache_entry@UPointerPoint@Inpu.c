/*
 * XREFs of ??$call@AEAV_lambda_e0c989301fb7eeb47b8a27ef133367da_@@@?$factory_cache_entry@UPointerPoint@Input@UI@Windows@winrt@@UIPointerPointStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_e0c989301fb7eeb47b8a27ef133367da_@@@Z @ 0x18058EE14
 * Callers:
 *     ?GetCurrentPoint@PointerPoint@Input@UI@Windows@winrt@@SA@I@Z @ 0x180590E98 (-GetCurrentPoint@PointerPoint@Input@UI@Windows@winrt@@SA@I@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801CAB80 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802DB14D (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??$get_activation_factory@UIPointerPointStatics@Input@UI@Windows@winrt@@@winrt@@YA?AUIPointerPointStatics@Input@UI@Windows@0@AEBUhstring@param@0@@Z @ 0x18058F534 (--$get_activation_factory@UIPointerPointStatics@Input@UI@Windows@winrt@@@winrt@@YA-AUIPointerPoi.c)
 *     ??R_lambda_e0c989301fb7eeb47b8a27ef133367da_@@QEBA@AEBUIPointerPointStatics@Input@UI@Windows@winrt@@@Z @ 0x18058FE5C (--R_lambda_e0c989301fb7eeb47b8a27ef133367da_@@QEBA@AEBUIPointerPointStatics@Input@UI@Windows@win.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::UI::Input::PointerPoint,winrt::Windows::UI::Input::IPointerPointStatics>::call<_lambda_e0c989301fb7eeb47b8a27ef133367da_ &>(
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
  v7[0] = (__int64)L"Windows.UI.Input.PointerPoint";
  v7[1] = 29LL;
  winrt::param::hstring::hstring((__int64)v8, v7);
  winrt::get_activation_factory<winrt::Windows::UI::Input::IPointerPointStatics>(&v9, v8);
  if ( v9 && (v10 = 0LL, (**v9)(v9, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v10), (v6[0] = v10) != 0) )
  {
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v6);
    v6[1] = (__int64)&qword_1808CA918;
    _InterlockedIncrement64(&qword_1808CA918);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Input::PointerPoint,winrt::Windows::UI::Input::IPointerPointStatics>,
            (signed __int64)v9,
            0LL) )
    {
      v9 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1808CA920);
    }
    _lambda_e0c989301fb7eeb47b8a27ef133367da_::operator()(
      a3,
      a2,
      &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Input::PointerPoint,winrt::Windows::UI::Input::IPointerPointStatics>);
    _InterlockedDecrement64(&qword_1808CA918);
  }
  else
  {
    _lambda_e0c989301fb7eeb47b8a27ef133367da_::operator()(a3, a2, &v9);
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v9);
  return a2;
}
