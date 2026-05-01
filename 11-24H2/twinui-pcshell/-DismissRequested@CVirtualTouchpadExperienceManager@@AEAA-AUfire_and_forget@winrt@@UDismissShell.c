/*
 * XREFs of ?DismissRequested@CVirtualTouchpadExperienceManager@@AEAA?AUfire_and_forget@winrt@@UDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x18039E5D8
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs___lambda_66a952acffac4749430ca95fe1c551e0___::Invoke @ 0x18039EC50 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_18039EC50.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     CVirtualTouchpadExperienceManager::DismissRequested$_InitCoro$2 @ 0x18039E3E8 (CVirtualTouchpadExperienceManager--DismissRequested$_InitCoro$2.c)
 */

_BYTE *__fastcall CVirtualTouchpadExperienceManager::DismissRequested(__int64 a1, _BYTE *a2, __int64 *a3)
{
  void *v6; // rax
  int v8; // [rsp+98h] [rbp+10h] BYREF

  v6 = operator new(0x50uLL);
  v8 = 0;
  CVirtualTouchpadExperienceManager::DismissRequested__InitCoro_2(&v8, (__int64)v6, a2, a3, a1);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)a3);
  return a2;
}
