/*
 * XREFs of std::_Func_impl_no_alloc__lambda_a44a1a72576a729f64e0a6d83c71a024__void_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension_::_Delete_this @ 0x1805DAC10
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_a44a1a72576a729f64e0a6d83c71a024__void_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension_::_Delete_this(
        char *a1,
        char a2)
{
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 72));
  if ( a2 )
    operator delete(a1, (const struct std::nothrow_t *)0x50);
}
