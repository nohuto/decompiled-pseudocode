/*
 * XREFs of ?PinUnpinToAllDesktops@?$produce@UDesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@UIPlatformTaskGroupsSwitchItemController@TaskGroups@4567@@impl@winrt@@UEAAHPEAX@Z @ 0x18058A5A0
 * Callers:
 *     <none>
 * Callees:
 *     ?PinUnpinToAllDesktops@DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@QEAAXAEBUISwitchItem@Multitasking@ComposableShell@567@@Z @ 0x18058A5D4 (-PinUnpinToAllDesktops@DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Sh.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController,winrt::Windows::Internal::Shell::TaskGroups::IPlatformTaskGroupsSwitchItemController>::PinUnpinToAllDesktops(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController::PinUnpinToAllDesktops(
    (winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController *)((a1 - 16) & -(__int64)(a1 != 0)),
    (const struct winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem *)&v3);
  return 0LL;
}
