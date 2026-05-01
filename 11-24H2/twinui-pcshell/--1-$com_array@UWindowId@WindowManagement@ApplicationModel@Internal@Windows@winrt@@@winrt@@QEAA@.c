/*
 * XREFs of ??1?$com_array@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x1802C9288
 * Callers:
 *     ??1?$com_array@Uguid@winrt@@@winrt@@QEAA@XZ @ 0x18044EC5C (--1-$com_array@Uguid@winrt@@@winrt@@QEAA@XZ.c)
 *     ?NonDelegatingGetIids@?$root_implements@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIXamlMetadataProvider@Markup@Xaml@UI@67@Ucomposing@7@UIApplicationOverrides@Xaml@UI@67@UIApplicationOverrides2@Xaml@UI@67@@impl@winrt@@IEAAHPEAIPEAPEAUguid@3@@Z @ 0x18044F5D8 (-NonDelegatingGetIids@-$root_implements@UXamlApplication@implementation@XamlExplorerHost@Shell@I.c)
 *     ?get_interfaces@winrt@@YA?AU?$com_array@Uguid@winrt@@@1@AEBUIInspectable@Foundation@Windows@1@@Z @ 0x1804500A8 (-get_interfaces@winrt@@YA-AU-$com_array@Uguid@winrt@@@1@AEBUIInspectable@Foundation@Windows@1@@Z.c)
 *     ?NonDelegatingGetIids@?$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U134567@Ucomposable@7@Ucomposing@7@USnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@IEAAHPEAIPEAPEAUguid@3@@Z @ 0x1805B9D2C (-NonDelegatingGetIids@-$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@S.c)
 *     _XamlAltTabViewController::[IXamlMultitaskingViewController]::InvokeSwitchItem_::_1_::dtor$5 @ 0x1806CE172 (_XamlAltTabViewController--[IXamlMultitaskingViewController]--InvokeSwitchItem_--_1_--dtor$5.c)
 *     _XamlAllUpViewController::[IXamlMultitaskingViewController]::InvokeSwitchItem_::_1_::dtor$2 @ 0x1806F57DA (_XamlAllUpViewController--[IXamlMultitaskingViewController]--InvokeSwitchItem_--_1_--dtor$2.c)
 *     _TouchGestureProcessor::SetSuppressionRegions_::_1_::dtor$0 @ 0x1806F57FE (_TouchGestureProcessor--SetSuppressionRegions_--_1_--dtor$0.c)
 *     _winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController::PinUnpinToAllDesktops_::_1_::dtor$2 @ 0x1806F5810 (_winrt--Windows--Internal--Shell--DesktopTaskGroups--implementation--DesktopTaskGro_ea_1806F5810.c)
 *     _winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController::MoveToDesktop_::_1_::dtor$3 @ 0x1806F5822 (_winrt--Windows--Internal--Shell--DesktopTaskGroups--implementation--DesktopTaskGro_ea_1806F5822.c)
 *     _TouchGestureComponent::UpdateSuppressionRegions_::_1_::dtor$1 @ 0x1806F5A3F (_TouchGestureComponent--UpdateSuppressionRegions_--_1_--dtor$1.c)
 *     _SnapFlyoutHost::GetGuidedSnapAssistRegions_::_1_::dtor$2 @ 0x1806F80D6 (_SnapFlyoutHost--GetGuidedSnapAssistRegions_--_1_--dtor$2.c)
 *     _CopilotHotkeyManager::GetTargetAppExtensionDetails_::_1_::dtor$47 @ 0x180700DFA (_CopilotHotkeyManager--GetTargetAppExtensionDetails_--_1_--dtor$47.c)
 * Callees:
 *     CoTaskMemFree_0 @ 0x1802D2C01 (CoTaskMemFree_0.c)
 */

void __fastcall winrt::com_array<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>::~com_array<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>(
        __int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    CoTaskMemFree_0(v2);
    *(_QWORD *)a1 = 0LL;
    *(_DWORD *)(a1 + 8) = 0;
  }
}
