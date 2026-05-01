/*
 * XREFs of ?TintOpacity@?$consume_Windows_UI_Xaml_Media_IAcrylicBrush@UIAcrylicBrush@Media@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@N@Z @ 0x18011A020
 * Callers:
 *     ?v_DismissView@VirtualDesktopSwitcherHost@@MEAAXXZ @ 0x180114C30 (-v_DismissView@VirtualDesktopSwitcherHost@@MEAAXXZ.c)
 *     ?ViewLoaded@XamlSnapAssistViewHost@@UEAAJXZ @ 0x180115BB0 (-ViewLoaded@XamlSnapAssistViewHost@@UEAAJXZ.c)
 *     ?DisplayAltTab@XamlAltTabViewHost@@AEAAXXZ @ 0x180119F58 (-DisplayAltTab@XamlAltTabViewHost@@AEAAXXZ.c)
 *     ?v_DismissView@XamlAltTabViewHost@@MEAAXXZ @ 0x18011B160 (-v_DismissView@XamlAltTabViewHost@@MEAAXXZ.c)
 *     ?BeginInvokeAnimation@TaskViewFrame@@UEAAXXZ @ 0x18022C6A0 (-BeginInvokeAnimation@TaskViewFrame@@UEAAXXZ.c)
 *     ?FinishShow@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXURect@Foundation@67@@Z @ 0x180274248 (-FinishShow@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXU.c)
 *     ?OnArrangedWindowResizeStarted@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@AEAAXUIWindowManagementEvents2@WindowManagementEvents@4567@UArrangedWindowResizeStartedEventArgs@94567@@Z @ 0x180588AB0 (-OnArrangedWindowResizeStarted@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Wind.c)
 *     ??0TouchEdgeGripperWindow@@QEAA@W4TouchEdgeGestureType@@PEAUIImmersiveMonitor@@_NAEBV?$function@$$A6AXIAEBUPoint@Foundation@Windows@winrt@@@Z@std@@@Z @ 0x180597C6C (--0TouchEdgeGripperWindow@@QEAA@W4TouchEdgeGestureType@@PEAUIImmersiveMonitor@@_NAEBV-$function@.c)
 *     ?CreateXamlContent@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@@Z @ 0x180598574 (-CreateXamlContent@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@@Z.c)
 *     ?DestroyXamlWindow@TouchEdgeGripperWindow@@AEAAXXZ @ 0x1805994A8 (-DestroyXamlWindow@TouchEdgeGripperWindow@@AEAAXXZ.c)
 *     ?PositionXamlWindow@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@UCRect@Geometry@@II@Z @ 0x180599C70 (-PositionXamlWindow@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@UCRect@Geometry@@II@Z.c)
 *     ?DisplayGamingTaskView@XamlGamingTaskViewHost@@AEAAXXZ @ 0x18069F82C (-DisplayGamingTaskView@XamlGamingTaskViewHost@@AEAAXXZ.c)
 *     ?CreateXaml@VirtualDesktopSwitcherHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1806AAE64 (-CreateXaml@VirtualDesktopSwitcherHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?ViewLoaded@VirtualDesktopSwitcherHost@@UEAAJXZ @ 0x1806AD6A0 (-ViewLoaded@VirtualDesktopSwitcherHost@@UEAAJXZ.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_UI_Xaml_Media_IAcrylicBrush<winrt::Windows::UI::Xaml::Media::IAcrylicBrush>::TintOpacity(
        __int64 *a1)
{
  __int64 v1; // rcx
  unsigned int v2; // eax
  int v4; // [rsp+20h] [rbp-28h] BYREF
  __int128 v5; // [rsp+28h] [rbp-20h]
  char v6; // [rsp+50h] [rbp+8h] BYREF

  v1 = *a1;
  v4 = 0;
  v5 = 0LL;
  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 88LL))(v1);
  return winrt::check_hresult(&v6, v2, &v4);
}
