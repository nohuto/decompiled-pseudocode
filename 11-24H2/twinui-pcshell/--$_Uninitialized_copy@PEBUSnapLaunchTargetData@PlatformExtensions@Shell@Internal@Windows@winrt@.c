/*
 * XREFs of ??$_Uninitialized_copy@PEBUSnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@PEBU123456@V?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@YAPEAUSnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@PEBU123456@0PEAU123456@AEAV?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@0@@Z @ 0x1805B77A0
 * Callers:
 *     ??0?$vector@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1805B84E4 (--0-$vector@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@V-$allocator@.c)
 *     ?LaunchSnappedWindows@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXU?$array_view@$$CBUSnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@7@@Z @ 0x1805B9454 (-LaunchSnappedWindows@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windo.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@YAXPEAUSnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAU123456@AEAV?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@0@@Z @ 0x1805B6CC0 (--$_Destroy_range@V-$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@w.c)
 *     ??0SnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@AEBU012345@@Z @ 0x1805B88A8 (--0SnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@AEBU012345@@Z.c)
 */

// Hidden C++ exception states: #wind=1
winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData *__fastcall std::_Uninitialized_copy<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData const *,winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData const *,std::allocator<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData>>(
        struct winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData *a1,
        const struct winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData *a2,
        winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData *a3)
{
  const struct winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData *i; // rdi

  for ( i = a1;
        i != a2;
        i = (const struct winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData *)((char *)i + 40) )
  {
    winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData::SnapLaunchTargetData(a3, i);
    a3 = (winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData *)((char *)a3 + 40);
  }
  std::_Destroy_range<std::allocator<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData>>(a3, a3);
  return a3;
}
