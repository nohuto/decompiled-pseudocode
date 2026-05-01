/*
 * XREFs of _lambda_f11de0bc23a1be581f21c48152b34889_::operator() @ 0x18028D158
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs___lambda_f11de0bc23a1be581f21c48152b34889___::Invoke @ 0x18028D510 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_18028D510.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Data@?$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItem@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180027964 (-Data@-$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItem@UISwitchItem@Multitask.c)
 *     ?GetApplicationViewForItemData@AppViewDataSourceHelpers@@YAJPEAUIInspectable@@AEBU_GUID@@PEAPEAX@Z @ 0x1800279B8 (-GetApplicationViewForItemData@AppViewDataSourceHelpers@@YAJPEAUIInspectable@@AEBU_GUID@@PEAPEAX.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ?Item@?$consume_Windows_Internal_ComposableShell_Multitasking_IEvaluateItemEventArgs@UIEvaluateItemEventArgs@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18009430C (-Item@-$consume_Windows_Internal_ComposableShell_Multitasking_IEvaluateItemEventArgs@UIEvaluateI.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SnapGroupsInSwitchers@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180117E20 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SnapGroupsInSwitchers@@@details@wil@@QEAA.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EvaluationState@?$consume_Windows_Internal_ComposableShell_Multitasking_IEvaluateItemEventArgs@UIEvaluateItemEventArgs@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBW4SwitchItemInclusion@Multitasking@ComposableShell@Internal@Windows@3@@Z @ 0x1801B7D10 (-EvaluationState@-$consume_Windows_Internal_ComposableShell_Multitasking_IEvaluateItemEventArgs@.c)
 *     ?TryGetTaskGroupFromSwitchItem@@YA?AUTaskGroup@TaskGroups@Shell@Internal@Windows@winrt@@AEBUISwitchItem@Multitasking@ComposableShell@456@@Z @ 0x1801B87E4 (-TryGetTaskGroupFromSwitchItem@@YA-AUTaskGroup@TaskGroups@Shell@Internal@Windows@winrt@@AEBUISwi.c)
 *     ??$as@UIInspectable@@@IUnknown@Foundation@Windows@winrt@@QEBA?A_PXZ @ 0x1801BBA88 (--$as@UIInspectable@@@IUnknown@Foundation@Windows@winrt@@QEBA-A_PXZ.c)
 *     CoTaskMemFree_0 @ 0x1801C7A7D (CoTaskMemFree_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Windows@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroup@UITaskGroup@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18064A16C (-Windows@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroup@UITaskGroup@TaskGroups@Shell@Int.c)
 */

// Hidden C++ exception states: #wind=13 #try_helpers=1
void __fastcall lambda_f11de0bc23a1be581f21c48152b34889_::operator()(
        _QWORD *a1,
        winrt::Windows::Foundation::IUnknown *a2,
        __int64 *a3)
{
  __int64 v6; // r9
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 (__fastcall *v9)(__int64, __int64, struct _GUID *); // r15
  int v10; // eax
  _QWORD *v11; // rax
  struct IUnknown **v12; // rax
  const struct _GUID *v13; // rdx
  void **v14; // r9
  int ApplicationViewForItemData; // eax
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // [rsp+20h] [rbp-58h] BYREF
  struct _GUID v19; // [rsp+28h] [rbp-50h] BYREF
  __int64 v20; // [rsp+38h] [rbp-40h] BYREF
  LPVOID pv; // [rsp+40h] [rbp-38h] BYREF
  int v22; // [rsp+48h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v24; // [rsp+98h] [rbp+20h] BYREF

  LODWORD(v24) = 0;
  winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_IEvaluateItemEventArgs<winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs>::EvaluationState(
    a3,
    (unsigned int *)&v24);
  winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_IEvaluateItemEventArgs<winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs>::Item(
    a3,
    &v20);
  *(_QWORD *)&v19.Data1 = 0LL;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SnapGroupsInSwitchers>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_SnapGroupsInSwitchers>::GetImpl'::`2'::impl,
    1u,
    3u,
    v6);
  TryGetTaskGroupFromSwitchItem(&v24, &v20);
  if ( v24 )
  {
    v7 = **(unsigned int **)winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroup<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroup>::Windows(
                              &v24,
                              &pv);
    if ( pv )
    {
      CoTaskMemFree_0(pv);
      pv = 0LL;
      v22 = 0;
    }
    v8 = a1[3];
    v9 = *(__int64 (__fastcall **)(__int64, __int64, struct _GUID *))(*(_QWORD *)v8 + 48LL);
    *(_QWORD *)&v19.Data1 = 0LL;
    v10 = v9(v8, v7, &v19);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x155,
        (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\taskviewframe.cpp",
        (const char *)(unsigned int)v10,
        v18);
  }
  else
  {
    *(_QWORD *)&v19.Data1 = 0LL;
    v11 = winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItem<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>::Data(
            &v20,
            &pv);
    v12 = (struct IUnknown **)winrt::Windows::Foundation::IUnknown::as<IInspectable>(
                                (__int64 (__fastcall ****)(_QWORD, __int64 *, __int64 *))v11,
                                &v18);
    ApplicationViewForItemData = AppViewDataSourceHelpers::GetApplicationViewForItemData(*v12, v13, &v19, v14);
    if ( ApplicationViewForItemData < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x159,
        (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\taskviewframe.cpp",
        (const char *)(unsigned int)ApplicationViewForItemData,
        v18);
    if ( v18 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v18);
    winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&pv);
  }
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v24);
  *(_QWORD *)v19.Data4 = 0LL;
  v16 = **(_QWORD **)&v19.Data1;
  *(_QWORD *)v19.Data4 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, unsigned __int8 *))(v16 + 80))(*(_QWORD *)&v19.Data1, v19.Data4) >= 0 )
  {
    v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)*a1 + 96LL))(
            *a1,
            *(_QWORD *)v19.Data4,
            &v24);
    if ( v17 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x167,
        (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\taskviewframe.cpp",
        (const char *)(unsigned int)v17,
        v18);
    if ( !(_DWORD)v24 )
    {
      LODWORD(v18) = 1;
      winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_IEvaluateItemEventArgs<winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs>::EvaluationState(
        a3,
        (unsigned int *)&v18);
    }
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v19.Data4);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v19);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v20);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>(a2);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)a3);
}
