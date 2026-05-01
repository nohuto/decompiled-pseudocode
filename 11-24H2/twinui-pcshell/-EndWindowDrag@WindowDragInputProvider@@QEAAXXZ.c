/*
 * XREFs of ?EndWindowDrag@WindowDragInputProvider@@QEAAXXZ @ 0x1805BE9B4
 * Callers:
 *     SnapFlyoutHost::InternalShutdownAsync$_ResumeCoro$1 @ 0x180272010 (SnapFlyoutHost--InternalShutdownAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180051814 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?EndWindowDrag@WindowDragInputProviderTelemetry@@SAXXZ @ 0x1802D09CC (-EndWindowDrag@WindowDragInputProviderTelemetry@@SAXXZ.c)
 */

void __fastcall WindowDragInputProvider::EndWindowDrag(WindowDragInputProvider *this)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  WindowDragInputProviderTelemetry::EndWindowDrag();
  v2 = 0LL;
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 5, &v2);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v2);
  v2 = 0LL;
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 7, &v2);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v2);
}
