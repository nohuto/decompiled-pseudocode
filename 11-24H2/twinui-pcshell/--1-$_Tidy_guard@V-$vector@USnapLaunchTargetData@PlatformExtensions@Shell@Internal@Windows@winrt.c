/*
 * XREFs of ??1?$_Tidy_guard@V?$vector@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@QEAA@XZ @ 0x1805B8A40
 * Callers:
 *     ??0?$vector@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1805B84E4 (--0-$vector@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@V-$allocator@.c)
 *     ?LaunchSnappedWindows@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXU?$array_view@$$CBUSnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@7@@Z @ 0x1805B9454 (-LaunchSnappedWindows@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windo.c)
 *     _std::vector_winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData_std::allocator_winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData___::vector_winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData_std::allocator_winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData____::_1_::dtor$0 @ 0x1806F8C97 (_std--vector_winrt--Windows--Internal--Shell--PlatformExtensions--SnapLaunchTargetData_std--allo.c)
 *     _winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::LaunchSnappedWindows_::_1_::dtor$3 @ 0x1806F8DE1 (_winrt--Windows--Internal--Shell--SnapComponent--implementation--DesktopSnapLayoutM_ea_1806F8DE1.c)
 * Callees:
 *     ?_Tidy@?$vector@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAXXZ @ 0x1805BA978 (-_Tidy@-$vector@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@V-$alloca.c)
 */

__int64 __fastcall std::_Tidy_guard<std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData>>::~_Tidy_guard<std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData>>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData>::_Tidy(v1);
  return result;
}
