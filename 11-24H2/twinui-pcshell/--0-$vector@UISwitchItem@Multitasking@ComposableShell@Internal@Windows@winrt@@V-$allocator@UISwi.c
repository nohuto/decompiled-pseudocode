/*
 * XREFs of ??0?$vector@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@V?$allocator@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1806BD79C
 * Callers:
 *     ?MakeFilteredDataSource@SnapAssistState@@AEAA?AUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@AEBU234567@@Z @ 0x1806BDF0C (-MakeFilteredDataSource@SnapAssistState@@AEAA-AUISwitchItemDataSource@Multitasking@ComposableShe.c)
 * Callees:
 *     ??$_Construct_n@AEBQEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@AEBQEAU123456@@?$vector@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@V?$allocator@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@std@@@std@@AEAAX_KAEBQEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@1@Z @ 0x1806BD6D4 (--$_Construct_n@AEBQEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@AEBQEAU1.c)
 */

__int64 __fastcall std::vector<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>::vector<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>(
        __int64 a1,
        __int64 **a2)
{
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  std::vector<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>::_Construct_n<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem * const &,winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem * const &>(
    (__int64 **)a1,
    a2[1] - *a2,
    a2,
    a2 + 1);
  return a1;
}
