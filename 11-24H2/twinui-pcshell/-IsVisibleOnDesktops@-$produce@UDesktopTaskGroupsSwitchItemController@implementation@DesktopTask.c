/*
 * XREFs of ?IsVisibleOnDesktops@?$produce@UDesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@UIPlatformTaskGroupsSwitchItemController@TaskGroups@4567@@impl@winrt@@UEAAHPEAXHPEA_N@Z @ 0x18058A220
 * Callers:
 *     <none>
 * Callees:
 *     ?IsVisibleOnDesktops@DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@QEAA_NAEBUISwitchItem@Multitasking@ComposableShell@567@AEBW4VirtualDesktopsScope@TaskGroups@4567@@Z @ 0x18058A264 (-IsVisibleOnDesktops@DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shel.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController,winrt::Windows::Internal::Shell::TaskGroups::IPlatformTaskGroupsSwitchItemController>::IsVisibleOnDesktops(
        __int64 a1,
        __int64 a2,
        int a3,
        _BYTE *a4)
{
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF
  int v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = a3;
  v5 = a2;
  *a4 = winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController::IsVisibleOnDesktops(
          (winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController *)((a1 - 16) & -(__int64)(a1 != 0)),
          (const struct winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem *)&v5,
          (const enum winrt::Windows::Internal::Shell::TaskGroups::VirtualDesktopsScope *)&v6);
  return 0LL;
}
