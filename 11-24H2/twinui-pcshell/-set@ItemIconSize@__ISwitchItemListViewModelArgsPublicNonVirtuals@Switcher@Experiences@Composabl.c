/*
 * XREFs of ?set@ItemIconSize@__ISwitchItemListViewModelArgsPublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAXPE$AAU?$IBox@VSize@Foundation@Windows@@@Platform@@@Z @ 0x1802BD5C0
 * Callers:
 *     ?CreateSnapAssistControl@XamlSnapAssistViewHost@@AEAAPE$AAVSnapAssist@Switcher@Experiences@ComposableShell@WindowsInternal@@AEBURect@Foundation@Windows@winrt@@PEAUIImmersiveMonitor@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18011D884 (-CreateSnapAssistControl@XamlSnapAssistViewHost@@AEAAPE$AAVSnapAssist@Switcher@Experiences@Compo.c)
 *     ?PositionVirtualDesktopSwitcher@VirtualDesktopSwitcherHost@@AEAAXPEAUIImmersiveMonitor@@@Z @ 0x1801CC878 (-PositionVirtualDesktopSwitcher@VirtualDesktopSwitcherHost@@AEAAXPEAUIImmersiveMonitor@@@Z.c)
 *     ?CreateListViewModel@TaskViewFrame@@AEAAPE$AAVSwitchItemListViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@XZ @ 0x18021C250 (-CreateListViewModel@TaskViewFrame@@AEAAPE$AAVSwitchItemListViewModel@Switcher@Experiences@Compo.c)
 *     ?CreateGamingTaskViewControl@XamlGamingTaskViewHost@@AEAAPE$AAVGamingTaskView@Switcher@Experiences@ComposableShell@WindowsInternal@@XZ @ 0x18069F3D0 (-CreateGamingTaskViewControl@XamlGamingTaskViewHost@@AEAAPE$AAVGamingTaskView@Switcher@Experienc.c)
 *     ?HandlePinningCommand@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@I@Z @ 0x1806B3B5C (-HandlePinningCommand@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableS.c)
 *     _lambda_5b1893e84c025059ea9350e935de1321_::operator()_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection_const_&_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoChangedEventArgs_const_&_ @ 0x1806B96C0 (_lambda_5b1893e84c025059ea9350e935de1321_--operator()_winrt--WindowsUdk--UI--Shell--DisplayMonit.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::__ISwitchItemListViewModelArgsPublicNonVirtuals::ItemIconSize::set(
        __int64 a1)
{
  int v1; // eax

  v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 136LL))(a1);
  __abi_ThrowIfFailed(v1);
}
