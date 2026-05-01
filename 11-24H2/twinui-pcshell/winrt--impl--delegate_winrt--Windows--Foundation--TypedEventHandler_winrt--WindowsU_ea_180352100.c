/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs___lambda_a9ee4d933fe310b4143213a3fe399024___::Invoke @ 0x180352100
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$As@UIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180340DCC (--$As@UIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@@WeakRef@WRL@Microsoft@@Q.c)
 *     ?HandleShellViewDismissRequested@GamingOverlayExperienceManager@@AEAAXAEBUDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@@Z @ 0x180351898 (-HandleShellViewDismissRequested@GamingOverlayExperienceManager@@AEAAXAEBUDismissShellViewReques.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs___lambda_a9ee4d933fe310b4143213a3fe399024___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  struct IInspectable *v6; // [rsp+28h] [rbp-20h] BYREF

  v5 = a3;
  v6 = 0LL;
  if ( (int)Microsoft::WRL::WeakRef::As<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager>(
              (Microsoft::WRL::WeakRef *)(a1 + 24),
              &v6) >= 0
    && v6 )
  {
    GamingOverlayExperienceManager::HandleShellViewDismissRequested(
      *(GamingOverlayExperienceManager **)(a1 + 16),
      (const struct winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs *)&v5);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v6);
  result = 0LL;
  while ( 2 )
  {
    try
    {
    }
    catch ( ... )
    {
      LODWORD(v6) = *winrt::to_hresult(&v6);
      result = (unsigned int)v6;
      continue;
    }
    break;
  }
  return result;
}
