/*
 * XREFs of ??0AcrylicBrush@Media@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x1805978A4
 * Callers:
 *     ?CreateXamlContent@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@@Z @ 0x180598574 (-CreateXamlContent@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180051814 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??$call@AEAV_lambda_9385b473f465738bc2d277d457f6f118_@@@?$factory_cache_entry@UAcrylicBrush@Media@Xaml@UI@Windows@winrt@@UIAcrylicBrushFactory@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_9385b473f465738bc2d277d457f6f118_@@@Z @ 0x180596DBC (--$call@AEAV_lambda_9385b473f465738bc2d277d457f6f118_@@@-$factory_cache_entry@UAcrylicBrush@Medi.c)
 *     ??R_lambda_9385b473f465738bc2d277d457f6f118_@@QEBA@AEBUIAcrylicBrushFactory@Media@Xaml@UI@Windows@winrt@@@Z @ 0x180597EF4 (--R_lambda_9385b473f465738bc2d277d457f6f118_@@QEBA@AEBUIAcrylicBrushFactory@Media@Xaml@UI@Window.c)
 */

winrt::Windows::UI::Xaml::Media::AcrylicBrush *__fastcall winrt::Windows::UI::Xaml::Media::AcrylicBrush::AcrylicBrush(
        winrt::Windows::UI::Xaml::Media::AcrylicBrush *this)
{
  _QWORD v3[4]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v4; // [rsp+68h] [rbp+20h] BYREF
  __int64 v5; // [rsp+70h] [rbp+28h] BYREF
  __int64 v6; // [rsp+78h] [rbp+30h] BYREF

  *(_QWORD *)this = 0LL;
  v6 = 0LL;
  v4 = 0LL;
  v3[0] = &v6;
  v3[1] = &v4;
  _InterlockedIncrement64(&qword_1808CC208);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Media::AcrylicBrush,winrt::Windows::UI::Xaml::Media::IAcrylicBrushFactory> )
  {
    _lambda_9385b473f465738bc2d277d457f6f118_::operator()(
      v3,
      &v5,
      &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Media::AcrylicBrush,winrt::Windows::UI::Xaml::Media::IAcrylicBrushFactory>);
    _InterlockedDecrement64(&qword_1808CC208);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808CC208);
    winrt::impl::factory_cache_entry<winrt::Windows::UI::Xaml::Media::AcrylicBrush,winrt::Windows::UI::Xaml::Media::IAcrylicBrushFactory>::call<_lambda_9385b473f465738bc2d277d457f6f118_ &>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))this,
      (__int64)&v5,
      (__int64)v3);
  }
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this, &v5);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v5);
  if ( v4 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v4);
  if ( v6 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v6);
  return this;
}
