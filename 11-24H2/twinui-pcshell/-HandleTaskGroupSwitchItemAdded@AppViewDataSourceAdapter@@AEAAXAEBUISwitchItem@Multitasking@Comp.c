/*
 * XREFs of ?HandleTaskGroupSwitchItemAdded@AppViewDataSourceAdapter@@AEAAXAEBUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@Z @ 0x1806C0124
 * Callers:
 *     ?InitializeTaskGroupItems@AppViewDataSourceAdapter@@AEAAXXZ @ 0x18011C144 (-InitializeTaskGroupItems@AppViewDataSourceAdapter@@AEAAXXZ.c)
 *     ?OnTaskGroupsSwitchItemCollectionChanged@AppViewDataSourceAdapter@@AEAAXAEBUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@AEBUISwitchItemCollectionChangedEventArgs@34567@@Z @ 0x1806C02F4 (-OnTaskGroupsSwitchItemCollectionChanged@AppViewDataSourceAdapter@@AEAAXAEBUISwitchItemDataSourc.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180047190 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$as@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@6@$0A@@impl@winrt@@YA?AUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1806BF874 (--$as@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@Utype@-$abi@UIUnknow.c)
 *     ?UpdateTaskGroupSwitchItemThumbnail@AppViewDataSourceAdapter@@AEAAXAEBUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@Z @ 0x1806C079C (-UpdateTaskGroupSwitchItemThumbnail@AppViewDataSourceAdapter@@AEAAXAEBUIRootSwitchItem@Multitask.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall AppViewDataSourceAdapter::HandleTaskGroupSwitchItemAdded(
        AppViewDataSourceAdapter *this,
        const struct winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rbx
  int v5; // eax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 (__fastcall ***v8)(_QWORD, void *, __int64 *); // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  winrt::impl::as<winrt::Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v8,
    *(__int64 (__fastcall ****)(_QWORD, void *, __int64 *))a2);
  AppViewDataSourceAdapter::UpdateTaskGroupSwitchItemThumbnail(
    this,
    (const struct winrt::Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *)&v8);
  winrt::impl::as<winrt::Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v9,
    v8);
  v3 = *((_QWORD *)this + 4);
  v4 = v9;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 56LL))(v3, v9);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1DC,
      (int)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
      (const char *)(unsigned int)v5,
      v6);
  if ( v4 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v9);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v8);
}
