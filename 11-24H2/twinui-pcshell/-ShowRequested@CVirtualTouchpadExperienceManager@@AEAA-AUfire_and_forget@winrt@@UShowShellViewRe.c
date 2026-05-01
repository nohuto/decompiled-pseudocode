/*
 * XREFs of ?ShowRequested@CVirtualTouchpadExperienceManager@@AEAA?AUfire_and_forget@winrt@@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x1803A03FC
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_341c9eb6bde2f5519c2c695a2218853a___::Invoke @ 0x18039ECD0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_18039ECD0.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     CVirtualTouchpadExperienceManager::ShowRequested$_InitCoro$2 @ 0x1803A01C0 (CVirtualTouchpadExperienceManager--ShowRequested$_InitCoro$2.c)
 */

_BYTE *__fastcall CVirtualTouchpadExperienceManager::ShowRequested(__int64 a1, _BYTE *a2, __int64 *a3)
{
  void *v6; // rax
  int v8; // [rsp+B8h] [rbp+10h] BYREF

  v6 = operator new(0x70uLL);
  v8 = 0;
  CVirtualTouchpadExperienceManager::ShowRequested__InitCoro_2(&v8, (__int64)v6, a2, a3, a1);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)a3);
  return a2;
}
