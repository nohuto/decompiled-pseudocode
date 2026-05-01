/*
 * XREFs of _lambda_0c5affb431bf714a4aabb516927c6336_::__lambda_0c5affb431bf714a4aabb516927c6336_ @ 0x180234E68
 * Callers:
 *     std::function_void___cdecl(winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension)_::function_void___cdecl(winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension)___lambda_0c5affb431bf714a4aabb516927c6336__0_ @ 0x18022E70C (std--function_void___cdecl(winrt--WindowsUdk--UI--Shell--Dashboard--DashboardExtension)_--functi.c)
 *     _std::function_void___cdecl(winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension)_::function_void___cdecl(winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension)___lambda_0c5affb431bf714a4aabb516927c6336__0__::_1_::dtor$0 @ 0x18022E76A (_std--function_void___cdecl(winrt--WindowsUdk--UI--Shell--Dashboard--DashboardExtension)_--funct.c)
 *     std::_Func_impl_no_alloc__lambda_0c5affb431bf714a4aabb516927c6336__void_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension_::_Delete_this @ 0x1802480F0 (std--_Func_impl_no_alloc__lambda_0c5affb431bf714a4aabb516927c6336__void_winrt--Wind_ea_1802480F0.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

__int64 __fastcall lambda_0c5affb431bf714a4aabb516927c6336_::__lambda_0c5affb431bf714a4aabb516927c6336_(__int64 a1)
{
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 144));
  std::wstring::_Tidy_deallocate(a1 + 80);
  return std::wstring::_Tidy_deallocate(a1 + 48);
}
