/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::DashboardManager::RunWidgetCanvasDelayedInitializeAsync$_ResumeCoro$1_::_1_::dtor$12 @ 0x1806FAED5
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::RunWidgetCanvasDelayedInitializeAsync__ResumeCoro_1_::_1_::dtor_12(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 120) = *(_QWORD *)(a2 + 64) + 536LL;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(*(winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension **)(a2 + 120));
}
