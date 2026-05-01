/*
 * XREFs of ?SnapAssistSnappedWindows@?$consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistCompletedArgs@UIGuidedSnapAssistCompletedArgs@WindowSnapping@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18026F618
 * Callers:
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlAltTabViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18007CCC0 (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@XamlAltTabViewController@@UE$AAAXPE$AAUISwi.c)
 *     ?IsWindowInTaskGroup@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@AEAA_NUWindowId@WindowManagement@ApplicationModel@567@AEBUTaskGroup@34567@@Z @ 0x180588158 (-IsWindowInTaskGroup@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@.c)
 *     ?IsWindowValidForGroupInclusion@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA_NUWindowId@WindowManagement@ApplicationModel@567@AEBUTaskGroup@34567@@Z @ 0x1805881FC (-IsWindowValidForGroupInclusion@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Win.c)
 *     ?OnGuidedSnapAssistCompletedEvent@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@AEAAXAEBUIGuidedSnapAssistController@WindowSnapping@4567@AEBUGuidedSnapAssistCompletedArgs@94567@@Z @ 0x180588B10 (-OnGuidedSnapAssistCompletedEvent@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@W.c)
 *     ?IsGroupVisibleOnDesktop@DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@AEAA_NAEBUTaskGroup@TaskGroups@4567@PEAUIVirtualDesktop@@@Z @ 0x180589EE8 (-IsGroupVisibleOnDesktop@DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@.c)
 *     ?IsTaskGroupPinned@DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@AEAA_NAEBUTaskGroup@TaskGroups@4567@@Z @ 0x18058A020 (-IsTaskGroupPinned@DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@.c)
 *     ?MoveToDesktop@DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@QEAAXAEBUISwitchItem@Multitasking@ComposableShell@567@AEBUIVirtualDesktop@9ComposableShell@567@@Z @ 0x18058A3E0 (-MoveToDesktop@DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Inte.c)
 *     ?PinUnpinToAllDesktops@DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@QEAAXAEBUISwitchItem@Multitasking@ComposableShell@567@@Z @ 0x18058A5D4 (-PinUnpinToAllDesktops@DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Sh.c)
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1806B4444 (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwit.c)
 *     _lambda_e3e19fb8e3910b5b1b332ab74641bcf6_::operator() @ 0x1806BA3B8 (_lambda_e3e19fb8e3910b5b1b332ab74641bcf6_--operator().c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistCompletedArgs<winrt::Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistCompletedArgs>::SnapAssistSnappedWindows(
        __int64 **a1,
        __int64 a2)
{
  __int64 *v2; // rcx
  __int64 v4; // rax
  unsigned int v5; // eax
  int v7; // [rsp+28h] [rbp-20h] BYREF
  __int128 v8; // [rsp+30h] [rbp-18h]
  char v9; // [rsp+50h] [rbp+8h] BYREF
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF

  v10 = a2;
  v2 = *a1;
  LODWORD(v10) = 0;
  v11 = 0LL;
  v7 = 0;
  v4 = *v2;
  v8 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64 *, __int64 *, __int64 *))(v4 + 56))(v2, &v10, &v11);
  winrt::check_hresult(&v9, v5, &v7);
  *(_QWORD *)a2 = v11;
  *(_DWORD *)(a2 + 8) = v10;
  return a2;
}
