/*
 * XREFs of _SnapFlyoutHost::ShowSnapBarOnMonitorAsync$_ResumeCoro$1_::_1_::dtor$4 @ 0x1806F86BA
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall SnapFlyoutHost::ShowSnapBarOnMonitorAsync__ResumeCoro_1_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 112) = *(_QWORD *)(a2 + 240) + 96LL;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(*(winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension **)(a2 + 112));
}
