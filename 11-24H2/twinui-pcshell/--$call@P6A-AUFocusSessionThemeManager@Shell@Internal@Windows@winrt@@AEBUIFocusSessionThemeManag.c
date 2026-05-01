/*
 * XREFs of ??$call@P6A?AUFocusSessionThemeManager@Shell@Internal@Windows@winrt@@AEBUIFocusSessionThemeManagerStatics@2345@@Z@?$factory_cache_entry@UFocusSessionThemeManager@Shell@Internal@Windows@winrt@@UIFocusSessionThemeManagerStatics@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AUFocusSessionThemeManager@Shell@Internal@Windows@2@AEBUIFocusSessionThemeManagerStatics@4562@@Z@Z @ 0x180217DA4
 * Callers:
 *     ?GetDefault@FocusSessionThemeManager@Shell@Internal@Windows@winrt@@SA@XZ @ 0x1802A2CE4 (-GetDefault@FocusSessionThemeManager@Shell@Internal@Windows@winrt@@SA@XZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802DB14D (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??$get_activation_factory@UIFocusSessionThemeManagerStatics@Shell@Internal@Windows@winrt@@@winrt@@YA?AUIFocusSessionThemeManagerStatics@Shell@Internal@Windows@0@AEBUhstring@param@0@@Z @ 0x1802DEBC4 (--$get_activation_factory@UIFocusSessionThemeManagerStatics@Shell@Internal@Windows@winrt@@@winrt.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::Internal::Shell::FocusSessionThemeManager,winrt::Windows::Internal::Shell::IFocusSessionThemeManagerStatics>::call<winrt::Windows::Internal::Shell::FocusSessionThemeManager (*)(winrt::Windows::Internal::Shell::IFocusSessionThemeManagerStatics const &)>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        __int64 a2,
        void (__fastcall **a3)(__int64, __int64 *))
{
  __int64 v6[2]; // [rsp+28h] [rbp-38h] BYREF
  _DWORD *v7; // [rsp+38h] [rbp-28h] BYREF
  _DWORD v8[4]; // [rsp+40h] [rbp-20h] BYREF
  const wchar_t *v9; // [rsp+50h] [rbp-10h]
  void (__fastcall ***v10)(_QWORD, __int64 *, __int64 *); // [rsp+80h] [rbp+20h] BYREF
  __int64 v11; // [rsp+98h] [rbp+38h] BYREF

  v10 = a1;
  if ( aWindowsInterna_54[47] )
    abort();
  v8[0] = 1;
  v8[1] = 47;
  v9 = L"Windows.Internal.Shell.FocusSessionThemeManager";
  v7 = v8;
  winrt::get_activation_factory<winrt::Windows::Internal::Shell::IFocusSessionThemeManagerStatics>(&v10, &v7);
  if ( v10 && (v11 = 0LL, (**v10)(v10, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v11), (v6[0] = v11) != 0) )
  {
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v6);
    v6[1] = (__int64)&qword_1808C8D98;
    _InterlockedIncrement64(&qword_1808C8D98);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::FocusSessionThemeManager,winrt::Windows::Internal::Shell::IFocusSessionThemeManagerStatics>,
            (signed __int64)v10,
            0LL) )
    {
      v10 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1808C8DA0);
    }
    (*a3)(
      a2,
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::FocusSessionThemeManager,winrt::Windows::Internal::Shell::IFocusSessionThemeManagerStatics>);
    _InterlockedDecrement64(&qword_1808C8D98);
  }
  else
  {
    (*a3)(a2, (__int64 *)&v10);
  }
  if ( v10 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v10);
  return a2;
}
