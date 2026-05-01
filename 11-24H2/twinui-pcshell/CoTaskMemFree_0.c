/*
 * XREFs of CoTaskMemFree_0 @ 0x1802D2C01
 * Callers:
 *     EncodeRelativePath @ 0x1800660F8 (EncodeRelativePath.c)
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlAltTabViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18007CCC0 (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@XamlAltTabViewController@@UE$AAAXPE$AAUISwi.c)
 *     ?clear@?$com_array@UIrisCreative@Iris@Services@WindowsUdk@winrt@@@winrt@@QEAAXXZ @ 0x1801F48F0 (-clear@-$com_array@UIrisCreative@Iris@Services@WindowsUdk@winrt@@@winrt@@QEAAXXZ.c)
 *     ?GetUnoccludedSnappedWindowsForWindow@?$produce@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupHost@34567@@impl@winrt@@UEAAHUstruct_Windows_Internal_ApplicationModel_WindowManagement_WindowId@23@IPEAIPEAPEAU423@@Z @ 0x18021F6B0 (-GetUnoccludedSnappedWindowsForWindow@-$produce@UTaskGroupsComponent@implementation@TaskGroups@S.c)
 *     ?GetUnoccludedSnappedWindowsForWindow@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA?AU?$com_array@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@7@UWindowId@WindowManagement@ApplicationModel@567@W4UnoccludedWindowsOptions@34567@@Z @ 0x18021F73C (-GetUnoccludedSnappedWindowsForWindow@TaskGroupsComponent@implementation@TaskGroups@Shell@Intern.c)
 *     ?OnGetArrangementRects@WindowDragInputProvider@@AEAAXAEAU_WINDOW_ARRANGEMENT_INFO@@@Z @ 0x1802739C8 (-OnGetArrangementRects@WindowDragInputProvider@@AEAAXAEAU_WINDOW_ARRANGEMENT_INFO@@@Z.c)
 *     ?GetSnappableWindowSuggestions@?$produce@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapLayoutManagerExtensionStatics@PlatformExtensions@4567@@impl@winrt@@UEAAHUstruct_Windows_UI_WindowId@23@PEAIPEAPEAUstruct_Windows_Internal_Shell_PlatformExtensions_SnappableWindowSuggestion@23@@Z @ 0x1802AF340 (-GetSnappableWindowSuggestions@-$produce@UDesktopSnapLayoutManager@factory_implementation@SnapCo.c)
 *     ??1?$com_array@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x1802C9288 (--1-$com_array@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@winrt@@QEAA@.c)
 *     ?GetXmlnsDefinitions@?$produce@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlMetadataProvider@Markup@Xaml@UI@67@@impl@winrt@@UEAAHPEAIPEAPEAUstruct_Windows_UI_Xaml_Markup_XmlnsDefinition@23@@Z @ 0x18044F340 (-GetXmlnsDefinitions@-$produce@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@W.c)
 *     ?GetXmlnsDefinitions@?$produce@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlMetadataProvider@Markup@Xaml@UI@Microsoft@8@@impl@winrt@@UEAAHPEAIPEAPEAUstruct_Microsoft_UI_Xaml_Markup_XmlnsDefinition@23@@Z @ 0x180456BF0 (-GetXmlnsDefinitions@-$produce@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shel.c)
 *     ?IsWindowInTaskGroup@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@AEAA_NUWindowId@WindowManagement@ApplicationModel@567@AEBUTaskGroup@34567@@Z @ 0x180588158 (-IsWindowInTaskGroup@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@.c)
 *     ?IsWindowValidForGroupInclusion@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA_NUWindowId@WindowManagement@ApplicationModel@567@AEBUTaskGroup@34567@@Z @ 0x1805881FC (-IsWindowValidForGroupInclusion@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Win.c)
 *     ?OnGuidedSnapAssistCompletedEvent@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@AEAAXAEBUIGuidedSnapAssistController@WindowSnapping@4567@AEBUGuidedSnapAssistCompletedArgs@94567@@Z @ 0x180588B10 (-OnGuidedSnapAssistCompletedEvent@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@W.c)
 *     ?IsGroupVisibleOnDesktop@DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@AEAA_NAEBUTaskGroup@TaskGroups@4567@PEAUIVirtualDesktop@@@Z @ 0x180589EE8 (-IsGroupVisibleOnDesktop@DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@.c)
 *     ?IsTaskGroupPinned@DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@AEAA_NAEBUTaskGroup@TaskGroups@4567@@Z @ 0x18058A020 (-IsTaskGroupPinned@DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@.c)
 *     ?MoveToDesktop@DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@QEAAXAEBUISwitchItem@Multitasking@ComposableShell@567@AEBUIVirtualDesktop@9ComposableShell@567@@Z @ 0x18058A3E0 (-MoveToDesktop@DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Inte.c)
 *     ?PinUnpinToAllDesktops@DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@QEAAXAEBUISwitchItem@Multitasking@ComposableShell@567@@Z @ 0x18058A5D4 (-PinUnpinToAllDesktops@DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Sh.c)
 *     ?UpdateSuppressionRegions@TouchGestureComponent@@AEAAXXZ @ 0x18058B530 (-UpdateSuppressionRegions@TouchGestureComponent@@AEAAXXZ.c)
 *     ?SetSuppressionRegions@TouchGestureProcessor@@QEAAXAEBV?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@@Z @ 0x180592338 (-SetSuppressionRegions@TouchGestureProcessor@@QEAAXAEBV-$vector@URect@Foundation@Windows@winrt@@.c)
 *     ?GetGuidedSnapAssistRegions@SnapFlyoutHost@@QEAA?AV?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@XZ @ 0x1805B2F8C (-GetGuidedSnapAssistRegions@SnapFlyoutHost@@QEAA-AV-$vector@URect@Foundation@Windows@@V-$allocat.c)
 *     ?GetSuggestedWindowPositions@SnapFlyoutHost@@QEAA?AV?$vector@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@V?$allocator@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@std@@@std@@XZ @ 0x1805B3088 (-GetSuggestedWindowPositions@SnapFlyoutHost@@QEAA-AV-$vector@USuggestedWindowPosition@Shell@UI@W.c)
 *     ?get_SnapAssistSnappedWindows@?$produce@UGuidedSnapAssistCompletedArgs@implementation@WindowSnapping@Shell@Internal@Windows@winrt@@UIGuidedSnapAssistCompletedArgs@34567@@impl@winrt@@UEAAHPEAIPEAPEAUstruct_Windows_Internal_ApplicationModel_WindowManagement_WindowId@23@@Z @ 0x1805BCA10 (-get_SnapAssistSnappedWindows@-$produce@UGuidedSnapAssistCompletedArgs@implementation@WindowSnap.c)
 *     ?GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA?AUTargetAppExtensionDetails@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180624D18 (-GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA-AUTargetAppExtensionDetails@@V-$basic_s.c)
 *     ??1?$WriteOnlyArray@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@QE$AAA@XZ @ 0x1806B0CBC (--1-$WriteOnlyArray@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@Wi.c)
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1806B4444 (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwit.c)
 *     _lambda_e3e19fb8e3910b5b1b332ab74641bcf6_::operator() @ 0x1806BA3B8 (_lambda_e3e19fb8e3910b5b1b332ab74641bcf6_--operator().c)
 *     ?GetInfoFor32BitHBITMAP@@YAJPEAUHBITMAP__@@PEAH1PEAPEAUtagRGBQUAD@@1@Z @ 0x1806C82A8 (-GetInfoFor32BitHBITMAP@@YAJPEAUHBITMAP__@@PEAH1PEAPEAUtagRGBQUAD@@1@Z.c)
 *     ?GetNthMostDominantColorFromHBITMAP@@YA_NPEAUHBITMAP__@@I_N1PEAK@Z @ 0x1806C84A8 (-GetNthMostDominantColorFromHBITMAP@@YA_NPEAUHBITMAP__@@I_N1PEAK@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall CoTaskMemFree_0(LPVOID pv)
{
  CoTaskMemFree(pv);
}
