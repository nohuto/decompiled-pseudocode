/*
 * XREFs of WindowsDeleteString_0 @ 0x1802D2D72
 * Callers:
 *     ?MaybeGetExceptionString@details@wil@@YAXPE$AAVException@Platform@@PEA_W_K@Z @ 0x1801CF5B4 (-MaybeGetExceptionString@details@wil@@YAXPE$AAVException@Platform@@PEA_W_K@Z.c)
 *     ?GetPlatformExceptionMessage@details@wil@@YAPE$AAVString@Platform@@PE$AAVException@4@@Z @ 0x1801CF6FC (-GetPlatformExceptionMessage@details@wil@@YAPE$AAVString@Platform@@PE$AAVException@4@@Z.c)
 *     ?__abi_winrt_ptrto_string_dtor@@YAXQE$ADVString@Platform@@@Z @ 0x1802BB818 (-__abi_winrt_ptrto_string_dtor@@YAXQE$ADVString@Platform@@@Z.c)
 *     ?ToString@?$CustomBox@VSize@Foundation@Windows@@@Details@Platform@@UE$AAAPE$AAVString@3@XZ @ 0x18069D4E8 (-ToString@-$CustomBox@VSize@Foundation@Windows@@@Details@Platform@@UE$AAAPE$AAVString@3@XZ.c)
 *     XamlGamingTaskViewHost::CreateGamingTaskBarViewModelAsync$_ResumeCoro$1 @ 0x18069F140 (XamlGamingTaskViewHost--CreateGamingTaskBarViewModelAsync$_ResumeCoro$1.c)
 *     ?to_cx@@YAPE$AAVString@Platform@@AEBUhstring@winrt@@@Z @ 0x1806A2E9C (-to_cx@@YAPE$AAVString@Platform@@AEBUhstring@winrt@@@Z.c)
 *     ?CreateXaml@VirtualDesktopSwitcherHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1806AAE64 (-CreateXaml@VirtualDesktopSwitcherHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?CreateAndAppendSwitcherContextMenuItem@XamlAllUpViewController@@AE$AAAXIPE$AAU?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@@Z @ 0x1806B1B24 (-CreateAndAppendSwitcherContextMenuItem@XamlAllUpViewController@@AE$AAAXIPE$AAU-$IVector@PE$AAUI.c)
 *     ?CreateAndAppendSwitcherContextMenuItem@XamlAllUpViewController@@AE$AAAXIPE$AAVString@Platform@@PE$AAU?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@@Z @ 0x1806B1B78 (-CreateAndAppendSwitcherContextMenuItem@XamlAllUpViewController@@AE$AAAXIPE$AAVString@Platform@@.c)
 *     ?CreateAndAppendTaskGroupVirtualDesktopContextMenuItems@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PE$AAU?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@6@@Z @ 0x1806B1C84 (-CreateAndAppendTaskGroupVirtualDesktopContextMenuItems@XamlAllUpViewController@@AE$AAAXPE$AAUIS.c)
 *     ?CreateVirtualDesktopContextMenuItems@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PE$AAU?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@6@@Z @ 0x1806B2058 (-CreateVirtualDesktopContextMenuItems@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitas.c)
 *     ?GetContextMenu@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAVSwitchItemContextMenuArgs@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAUISwitcherViewModel@4567@@Z @ 0x1806B2BD8 (-GetContextMenu@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAVSwitchI.c)
 *     ?GetResourceString@XamlAllUpViewController@@AE$AAAPE$AAVString@Platform@@I@Z @ 0x1806B3140 (-GetResourceString@XamlAllUpViewController@@AE$AAAPE$AAVString@Platform@@I@Z.c)
 *     ?GetTabletModeContextMenuItemString@XamlAllUpViewController@@AE$AAAXPEAUIApplicationView@@IPEAPE$AAVString@Platform@@@Z @ 0x1806B31D4 (-GetTabletModeContextMenuItemString@XamlAllUpViewController@@AE$AAAXPEAUIApplicationView@@IPEAPE.c)
 *     ?get@Name@IVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@UE$AAAPE$AAVString@Platform@@XZ @ 0x1806B9260 (-get@Name@IVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@UE$AAAPE$AAVString@Plat.c)
 *     ?CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ @ 0x1806BA7EC (-CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall WindowsDeleteString_0(HSTRING string)
{
  return WindowsDeleteString(string);
}
