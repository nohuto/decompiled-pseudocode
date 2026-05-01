/*
 * XREFs of ?CreateAndAppendSwitcherContextMenuItem@XamlAllUpViewController@@AE$AAAXIPE$AAU?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@@Z @ 0x1806B1B24
 * Callers:
 *     ?CreateAndAppendTaskGroupVirtualDesktopContextMenuItems@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PE$AAU?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@6@@Z @ 0x1806B1C84 (-CreateAndAppendTaskGroupVirtualDesktopContextMenuItems@XamlAllUpViewController@@AE$AAAXPE$AAUIS.c)
 *     ?CreateVirtualDesktopContextMenuItems@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PE$AAU?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@6@@Z @ 0x1806B2058 (-CreateVirtualDesktopContextMenuItems@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitas.c)
 *     ?GetContextMenu@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAVSwitchItemContextMenuArgs@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAUISwitcherViewModel@4567@@Z @ 0x1806B2BD8 (-GetContextMenu@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAVSwitchI.c)
 * Callees:
 *     ?CreateAndAppendSwitcherContextMenuItem@XamlAllUpViewController@@AE$AAAXIPE$AAVString@Platform@@PE$AAU?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@@Z @ 0x1806B1B78 (-CreateAndAppendSwitcherContextMenuItem@XamlAllUpViewController@@AE$AAAXIPE$AAVString@Platform@@.c)
 *     ?GetResourceString@XamlAllUpViewController@@AE$AAAPE$AAVString@Platform@@I@Z @ 0x1806B3140 (-GetResourceString@XamlAllUpViewController@@AE$AAAPE$AAVString@Platform@@I@Z.c)
 */

// Hidden C++ exception states: #wind=1
HRESULT __fastcall XamlAllUpViewController::CreateAndAppendSwitcherContextMenuItem(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  HSTRING ResourceString; // rbx
  __int64 v6; // rcx

  ResourceString = (HSTRING)XamlAllUpViewController::GetResourceString();
  XamlAllUpViewController::CreateAndAppendSwitcherContextMenuItem(v6, a2, ResourceString, a3);
  return WindowsDeleteString_0(ResourceString);
}
