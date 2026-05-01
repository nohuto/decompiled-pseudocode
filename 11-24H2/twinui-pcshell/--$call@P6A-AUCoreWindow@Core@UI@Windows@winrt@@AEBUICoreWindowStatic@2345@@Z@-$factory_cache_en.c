/*
 * XREFs of ??$call@P6A?AUCoreWindow@Core@UI@Windows@winrt@@AEBUICoreWindowStatic@2345@@Z@?$factory_cache_entry@UCoreWindow@Core@UI@Windows@winrt@@UICoreWindowStatic@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AUCoreWindow@Core@UI@Windows@2@AEBUICoreWindowStatic@4562@@Z@Z @ 0x18023674C
 * Callers:
 *     ?GetForCurrentThread@CoreWindow@Core@UI@Windows@winrt@@SA@XZ @ 0x1800C6E6C (-GetForCurrentThread@CoreWindow@Core@UI@Windows@winrt@@SA@XZ.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802DB14D (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??$get_activation_factory@UICoreWindowStatic@Core@UI@Windows@winrt@@@winrt@@YA?AUICoreWindowStatic@Core@UI@Windows@0@AEBUhstring@param@0@@Z @ 0x180453C04 (--$get_activation_factory@UICoreWindowStatic@Core@UI@Windows@winrt@@@winrt@@YA-AUICoreWindowStat.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::UI::Core::CoreWindow,winrt::Windows::UI::Core::ICoreWindowStatic>::call<winrt::Windows::UI::Core::CoreWindow (*)(winrt::Windows::UI::Core::ICoreWindowStatic const &)>(
        __int64 a1,
        __int64 a2,
        void (__fastcall **a3)(__int64, __int64 *))
{
  __int64 v6; // [rsp+20h] [rbp-50h] BYREF
  __int64 v7; // [rsp+28h] [rbp-48h] BYREF
  _DWORD *v8; // [rsp+38h] [rbp-38h] BYREF
  _DWORD v9[4]; // [rsp+40h] [rbp-30h] BYREF
  const wchar_t *v10; // [rsp+50h] [rbp-20h]
  __int64 *v11; // [rsp+58h] [rbp-18h]
  void (__fastcall ***v12)(_QWORD, __int64 *, __int64 *); // [rsp+60h] [rbp-10h] BYREF

  v6 = a2;
  v9[0] = 1;
  v9[1] = 26;
  v10 = L"Windows.UI.Core.CoreWindow";
  v8 = v9;
  winrt::get_activation_factory<winrt::Windows::UI::Core::ICoreWindowStatic>(&v12, &v8);
  if ( v12 && (v7 = 0LL, (**v12)(v12, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v7), (v6 = v7) != 0) )
  {
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v6);
    v11 = &qword_1808CA8F8;
    _InterlockedIncrement64(&qword_1808CA8F8);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Core::CoreWindow,winrt::Windows::UI::Core::ICoreWindowStatic>,
            (signed __int64)v12,
            0LL) )
    {
      v12 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1808CA900);
    }
    (*a3)(
      a2,
      &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Core::CoreWindow,winrt::Windows::UI::Core::ICoreWindowStatic>);
    _InterlockedDecrement64(&qword_1808CA8F8);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v12);
  }
  else
  {
    (*a3)(a2, (__int64 *)&v12);
    if ( v12 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v12);
  }
  return a2;
}
