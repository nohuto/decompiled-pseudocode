/*
 * XREFs of ??1SnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1805B8B98
 * Callers:
 *     ??$_Destroy_range@V?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@YAXPEAUSnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAU123456@AEAV?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@0@@Z @ 0x1805B6CC0 (--$_Destroy_range@V-$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@w.c)
 *     ?_Destroy@?$_Ref_count_obj2@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@EEAAXXZ @ 0x180652BF0 (-_Destroy@-$_Ref_count_obj2@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@.c)
 *     ?GetRemoteDesktopInformation@?$produce@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@UIRemoteSessionWindowManager@3456@@impl@winrt@@UEAAHPEAUstruct_Windows_Internal_Shell_RemoteDesktopInformation@23@@Z @ 0x18065A6D0 (-GetRemoteDesktopInformation@-$produce@URemoteSessionWindowManager@implementation@Shell@Internal.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData::~SnapLaunchTargetData(
        volatile signed __int32 **this)
{
  winrt::handle_type<winrt::impl::hstring_traits>::close(this + 2);
  winrt::handle_type<winrt::impl::hstring_traits>::close(this + 1);
}
