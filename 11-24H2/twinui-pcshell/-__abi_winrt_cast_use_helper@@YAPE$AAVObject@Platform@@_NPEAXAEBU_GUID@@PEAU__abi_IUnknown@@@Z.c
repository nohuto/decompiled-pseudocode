/*
 * XREFs of ?__abi_winrt_cast_use_helper@@YAPE$AAVObject@Platform@@_NPEAXAEBU_GUID@@PEAU__abi_IUnknown@@@Z @ 0x1802CF564
 * Callers:
 *     ?CreateSnapAssistControl@XamlSnapAssistViewHost@@AEAAPE$AAVSnapAssist@Switcher@Experiences@ComposableShell@WindowsInternal@@AEBURect@Foundation@Windows@winrt@@PEAUIImmersiveMonitor@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18011D884 (-CreateSnapAssistControl@XamlSnapAssistViewHost@@AEAAPE$AAVSnapAssist@Switcher@Experiences@Compo.c)
 *     ?CreateAndAppendTaskGroupVirtualDesktopContextMenuItems@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PE$AAU?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@6@@Z @ 0x1806B1C84 (-CreateAndAppendTaskGroupVirtualDesktopContextMenuItems@XamlAllUpViewController@@AE$AAAXPE$AAUIS.c)
 *     ?CreateVirtualDesktopContextMenuItems@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PE$AAU?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@6@@Z @ 0x1806B2058 (-CreateVirtualDesktopContextMenuItems@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitas.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall __abi_winrt_cast_use_helper(
        char a1,
        __int64 (__fastcall ***a2)(_QWORD, __int64, __int64 *),
        __int64 a3,
        __int64 a4)
{
  if ( a4 )
    return a4;
  else
    return __abi_winrt_cast_to(a1, a2, a3);
}
