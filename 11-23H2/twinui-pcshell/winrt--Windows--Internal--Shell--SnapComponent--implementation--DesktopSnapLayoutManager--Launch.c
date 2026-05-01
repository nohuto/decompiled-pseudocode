/*
 * XREFs of winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::LaunchSnappedWindowsInternalAsync$_InitCoro$2 @ 0x18022A728
 * Callers:
 *     ?LaunchSnappedWindowsInternalAsync@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@CA?AUfire_and_forget@7@V?$vector@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@U?$com_ptr@UIServiceProvider@@@7@AEBUCRect@Geometry@@I@Z @ 0x18022AF10 (-LaunchSnappedWindowsInternalAsync@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@I.c)
 * Callees:
 *     _winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::LaunchSnappedWindowsInternalAsync_::_34_::_parameters_::_parameters_ @ 0x18022A03C (_winrt--Windows--Internal--Shell--SnapComponent--implementation--DesktopSnapLayoutManager--Launc.c)
 *     winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::LaunchSnappedWindowsInternalAsync$_ResumeCoro$1 @ 0x18022A840 (winrt--Windows--Internal--Shell--SnapComponent--implementation--DesktopSnapLayoutMa_ea_18022A840.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::LaunchSnappedWindowsInternalAsync__InitCoro_2(
        _BYTE *a1,
        _DWORD *a2,
        _DWORD *a3,
        __int64 *a4,
        __int64 *a5,
        __int64 a6,
        int *a7)
{
  winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::LaunchSnappedWindowsInternalAsync_::_34_::_parameters_::_parameters_(
    (__int64)a3 + 193,
    a4,
    a5,
    a6,
    *a7);
  *(_QWORD *)a3 = winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::LaunchSnappedWindowsInternalAsync__ResumeCoro_1;
  a3[2] = *a2 != 0 ? 2 : 65538;
  *a1 = 0;
  *((_BYTE *)a3 + 192) = 0;
  return winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::LaunchSnappedWindowsInternalAsync__ResumeCoro_1(a3);
}
