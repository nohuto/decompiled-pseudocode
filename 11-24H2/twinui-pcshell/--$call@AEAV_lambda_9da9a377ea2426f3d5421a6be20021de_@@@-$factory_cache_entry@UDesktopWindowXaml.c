/*
 * XREFs of ??$call@AEAV_lambda_9da9a377ea2426f3d5421a6be20021de_@@@?$factory_cache_entry@UDesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@winrt@@UIDesktopWindowXamlSourceFactory@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_9da9a377ea2426f3d5421a6be20021de_@@@Z @ 0x1804513C0
 * Callers:
 *     ??0DesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@winrt@@QEAA@XZ @ 0x180451958 (--0DesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801CAB80 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ??R_lambda_9da9a377ea2426f3d5421a6be20021de_@@QEBA@AEBUIDesktopWindowXamlSourceFactory@Hosting@Xaml@UI@Microsoft@winrt@@@Z @ 0x1801D0980 (--R_lambda_9da9a377ea2426f3d5421a6be20021de_@@QEBA@AEBUIDesktopWindowXamlSourceFactory@Hosting@X.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802DB14D (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??$get_activation_factory@UIDesktopWindowXamlSourceFactory@Hosting@Xaml@UI@Microsoft@winrt@@@winrt@@YA?AUIDesktopWindowXamlSourceFactory@Hosting@Xaml@UI@Microsoft@0@AEBUhstring@param@0@@Z @ 0x180451724 (--$get_activation_factory@UIDesktopWindowXamlSourceFactory@Hosting@Xaml@UI@Microsoft@winrt@@@win.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSource,winrt::Microsoft::UI::Xaml::Hosting::IDesktopWindowXamlSourceFactory>::call<_lambda_9da9a377ea2426f3d5421a6be20021de_ &>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        __int64 a2,
        _QWORD *a3)
{
  __int64 v6[2]; // [rsp+28h] [rbp-48h] BYREF
  __int64 v7[2]; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v8[40]; // [rsp+48h] [rbp-28h] BYREF
  void (__fastcall ***v9)(_QWORD, __int64 *, __int64 *); // [rsp+80h] [rbp+10h] BYREF
  __int64 v10; // [rsp+98h] [rbp+28h] BYREF

  v9 = a1;
  v7[0] = (__int64)L"Microsoft.UI.Xaml.Hosting.DesktopWindowXamlSource";
  v7[1] = 49LL;
  winrt::param::hstring::hstring((__int64)v8, v7);
  winrt::get_activation_factory<winrt::Microsoft::UI::Xaml::Hosting::IDesktopWindowXamlSourceFactory>(&v9, v8);
  if ( v9 && (v10 = 0LL, (**v9)(v9, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v10), (v6[0] = v10) != 0) )
  {
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v6);
    v6[1] = (__int64)&qword_1808CB898;
    _InterlockedIncrement64(&qword_1808CB898);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSource,winrt::Microsoft::UI::Xaml::Hosting::IDesktopWindowXamlSourceFactory>,
            (signed __int64)v9,
            0LL) )
    {
      v9 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1808CB8A0);
    }
    _lambda_9da9a377ea2426f3d5421a6be20021de_::operator()(
      a3,
      a2,
      (__int64)&winrt::impl::factory_cache_entry_v<winrt::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSource,winrt::Microsoft::UI::Xaml::Hosting::IDesktopWindowXamlSourceFactory>);
    _InterlockedDecrement64(&qword_1808CB898);
  }
  else
  {
    _lambda_9da9a377ea2426f3d5421a6be20021de_::operator()(a3, a2, (__int64)&v9);
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v9);
  return a2;
}
