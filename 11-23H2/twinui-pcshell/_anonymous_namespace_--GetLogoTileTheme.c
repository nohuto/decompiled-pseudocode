/*
 * XREFs of _anonymous_namespace_::GetLogoTileTheme @ 0x1806A1A64
 * Callers:
 *     _anonymous_namespace_::TryGetPackagedAppTileLogo @ 0x1806A776C (_anonymous_namespace_--TryGetPackagedAppTileLogo.c)
 * Callees:
 *     ??$call@P6A?AW4VisualTheme@Themes@UI@WindowsUdk@winrt@@AEBUISystemVisualThemeStatics@2345@@Z@?$factory_cache_entry@USystemVisualTheme@Themes@UI@WindowsUdk@winrt@@UISystemVisualThemeStatics@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AW4VisualTheme@Themes@UI@WindowsUdk@2@AEBUISystemVisualThemeStatics@4562@@Z@Z @ 0x18007F560 (--$call@P6A-AW4VisualTheme@Themes@UI@WindowsUdk@winrt@@AEBUISystemVisualThemeStatics@2345@@Z@-$f.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 anonymous_namespace_::GetLogoTileTheme()
{
  signed int v0; // eax
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 (__fastcall *v6)(const struct winrt::WindowsUdk::UI::Themes::ISystemVisualThemeStatics *); // [rsp+38h] [rbp+10h] BYREF
  __int64 *v7; // [rsp+40h] [rbp+18h]

  v7 = &qword_18098EA98;
  _InterlockedIncrement64(&qword_18098EA98);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Themes::SystemVisualTheme,winrt::WindowsUdk::UI::Themes::ISystemVisualThemeStatics> )
  {
    v5 = 0;
    v0 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Themes::SystemVisualTheme,winrt::WindowsUdk::UI::Themes::ISystemVisualThemeStatics>
                                                   + 48LL))(
           winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Themes::SystemVisualTheme,winrt::WindowsUdk::UI::Themes::ISystemVisualThemeStatics>,
           &v5);
    if ( v0 < 0 )
      winrt::throw_hresult(v0);
    v1 = v5;
    _InterlockedDecrement64(&qword_18098EA98);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098EA98);
    v6 = _lambda_95a7ded9384efa6b54b5506927790237_::_lambda_invoker_cdecl_;
    v1 = winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Themes::SystemVisualTheme,winrt::WindowsUdk::UI::Themes::ISystemVisualThemeStatics>::call<enum winrt::WindowsUdk::UI::Themes::VisualTheme (*)(winrt::WindowsUdk::UI::Themes::ISystemVisualThemeStatics const &)>(
           0LL,
           (__int64 (__fastcall **)(__int64 *))&v6);
  }
  if ( !v1 )
    return 3LL;
  v2 = v1 - 1;
  if ( !v2 )
    return 4LL;
  v3 = v2 - 1;
  if ( !v3 )
    return 1LL;
  if ( v3 == 1 )
    return 2LL;
  return 0LL;
}
