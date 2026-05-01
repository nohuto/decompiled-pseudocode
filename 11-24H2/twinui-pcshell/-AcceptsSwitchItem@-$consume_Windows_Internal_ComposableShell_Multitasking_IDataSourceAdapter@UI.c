/*
 * XREFs of ?AcceptsSwitchItem@?$consume_Windows_Internal_ComposableShell_Multitasking_IDataSourceAdapter@UIDataSourceAdapter@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUISwitchItem@Multitasking@ComposableShell@Internal@Windows@3@@Z @ 0x18011C634
 * Callers:
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlAltTabViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18007CCC0 (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@XamlAltTabViewController@@UE$AAAXPE$AAUISwi.c)
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlBaseViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18007D03C (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@XamlBaseViewController@@UE$AAAXPE$AAUISwitc.c)
 *     ?CountTaskGroupSwitchItemsInDataSource@@YAHAEBUTaskGroupDataSourceAdapter@TaskGroups@Shell@Internal@Windows@winrt@@AEBUISwitchItemDataSource@Multitasking@ComposableShell@456@@Z @ 0x18011C4DC (-CountTaskGroupSwitchItemsInDataSource@@YAHAEBUTaskGroupDataSourceAdapter@TaskGroups@Shell@Inter.c)
 *     _lambda_d61b288df26b99e0330e99e4b6525b65_::operator() @ 0x18028E22C (_lambda_d61b288df26b99e0330e99e4b6525b65_--operator().c)
 *     _lambda_76d1f2626ede3eea74247fb28465c209_::operator() @ 0x1806A4114 (_lambda_76d1f2626ede3eea74247fb28465c209_--operator().c)
 *     ?CloseSwitchItem@?QIXamlMultitaskingViewController@@XamlAltTabViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1806AE54C (-CloseSwitchItem@-QIXamlMultitaskingViewController@@XamlAltTabViewController@@UE$AAAXPE$AAUISwit.c)
 *     ?CloseSwitchItem@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1806B17F0 (-CloseSwitchItem@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwitc.c)
 *     ?GetContextMenu@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAVSwitchItemContextMenuArgs@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAUISwitcherViewModel@4567@@Z @ 0x1806B2BD8 (-GetContextMenu@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAVSwitchI.c)
 *     ?HandleMoveToCommand@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@I@Z @ 0x1806B36E4 (-HandleMoveToCommand@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableSh.c)
 *     ?HandlePinningCommand@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@I@Z @ 0x1806B3B5C (-HandlePinningCommand@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableS.c)
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1806B4444 (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwit.c)
 *     ?CloseSwitchItem@?QIXamlMultitaskingViewController@@XamlBaseViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1806BEEEC (-CloseSwitchItem@-QIXamlMultitaskingViewController@@XamlBaseViewController@@UE$AAAXPE$AAUISwitch.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_IDataSourceAdapter<winrt::Windows::Internal::ComposableShell::Multitasking::IDataSourceAdapter>::AcceptsSwitchItem(
        __int64 **a1,
        __int64 *a2)
{
  __int64 *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rax
  unsigned int v5; // eax
  int v7; // [rsp+20h] [rbp-28h] BYREF
  __int128 v8; // [rsp+28h] [rbp-20h]
  char v9; // [rsp+50h] [rbp+8h] BYREF
  char v10; // [rsp+60h] [rbp+18h] BYREF

  v2 = *a1;
  v3 = *a2;
  v7 = 0;
  v9 = 0;
  v4 = *v2;
  v8 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64 *, __int64, char *))(v4 + 64))(v2, v3, &v9);
  winrt::check_hresult(&v10, v5, &v7);
  return v9;
}
