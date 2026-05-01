/*
 * XREFs of ??1?$test_watcher@V?$merged_data@U_tip_TaskGroupSwitchToTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@U1234567@@details@tip2@@@tip2@@QEAA@XZ @ 0x180587498
 * Callers:
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlAltTabViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18007CCC0 (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@XamlAltTabViewController@@UE$AAAXPE$AAUISwi.c)
 *     ?ActivateWindows@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAAXU?$array_view@$$CBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@7@W4ActivateWindowsOptions@34567@@Z @ 0x180587778 (-ActivateWindows@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEA.c)
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1806B4444 (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwit.c)
 *     _XamlAltTabViewController::[IXamlMultitaskingViewController]::InvokeSwitchItem_::_1_::dtor$13 @ 0x1806CE1BA (_XamlAltTabViewController--[IXamlMultitaskingViewController]--InvokeSwitchItem_--_1_--dtor$13.c)
 *     _winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::ActivateWindows_::_1_::dtor$1 @ 0x1806F578B (_winrt--Windows--Internal--Shell--TaskGroups--implementation--TaskGroupsComponent--_ea_1806F578B.c)
 *     _XamlAllUpViewController::[IXamlMultitaskingViewController]::InvokeSwitchItem_::_1_::dtor$11 @ 0x18070640C (_XamlAllUpViewController--[IXamlMultitaskingViewController]--InvokeSwitchItem_--_1_--dtor$11.c)
 * Callees:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_TaskGroupSwitchToTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@U1234567@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1805873A8 (--1-$com_ptr_t@V-$merged_data@U_tip_TaskGroupSwitchToTest@TIP@TaskGroups@Shell@Internal@Windows@.c)
 */

void __fastcall tip2::test_watcher<tip2::details::merged_data<winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupSwitchToTest,winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupSwitchToTest>>::~test_watcher<tip2::details::merged_data<winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupSwitchToTest,winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupSwitchToTest>>(
        __int64 a1)
{
  wil::com_ptr_t<tip2::details::merged_data<winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupSwitchToTest,winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupSwitchToTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupSwitchToTest,winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupSwitchToTest>,wil::err_returncode_policy>((void **)(a1 + 56));
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
