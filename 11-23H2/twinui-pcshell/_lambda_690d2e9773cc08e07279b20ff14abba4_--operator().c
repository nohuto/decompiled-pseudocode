/*
 * XREFs of _lambda_690d2e9773cc08e07279b20ff14abba4_::operator() @ 0x18028A24C
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs___lambda_690d2e9773cc08e07279b20ff14abba4___::Invoke @ 0x18028A770 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Internal--Co.c)
 * Callees:
 *     ?TaskGroupController@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapter@UTaskGroupDataSourceAdapter@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18006B674 (-TaskGroupController@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapter@UTa.c)
 *     ?AcceptsSwitchItem@?$consume_Windows_Internal_ComposableShell_Multitasking_IDataSourceAdapter@UIDataSourceAdapter@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUISwitchItem@Multitasking@ComposableShell@Internal@Windows@3@@Z @ 0x180079B68 (-AcceptsSwitchItem@-$consume_Windows_Internal_ComposableShell_Multitasking_IDataSourceAdapter@UI.c)
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ?Item@?$consume_Windows_Internal_ComposableShell_Multitasking_IEvaluateItemEventArgs@UIEvaluateItemEventArgs@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18009430C (-Item@-$consume_Windows_Internal_ComposableShell_Multitasking_IEvaluateItemEventArgs@UIEvaluateI.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SnapGroupsInSwitchers@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180117E20 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SnapGroupsInSwitchers@@@details@wil@@QEAA.c)
 *     ?EvaluationState@?$consume_Windows_Internal_ComposableShell_Multitasking_IEvaluateItemEventArgs@UIEvaluateItemEventArgs@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBW4SwitchItemInclusion@Multitasking@ComposableShell@Internal@Windows@3@@Z @ 0x1801B7D10 (-EvaluationState@-$consume_Windows_Internal_ComposableShell_Multitasking_IEvaluateItemEventArgs@.c)
 *     ?CurrentVirtualDesktop@?$consume_Windows_Internal_ComposableShell_Multitasking_IVirtualDesktopCollection@UIVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1801B844C (-CurrentVirtualDesktop@-$consume_Windows_Internal_ComposableShell_Multitasking_IVirtualDesktopCo.c)
 *     ?IsSwitchItemVisibleOnDesktop@?$consume_Windows_Internal_ComposableShell_Multitasking_IVirtualDesktopController@UIVirtualDesktopController@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUISwitchItem@Multitasking@ComposableShell@Internal@Windows@3@AEBUIVirtualDesktop@56783@@Z @ 0x1801BAB2C (-IsSwitchItemVisibleOnDesktop@-$consume_Windows_Internal_ComposableShell_Multitasking_IVirtualDe.c)
 *     ?IsVisibleOnDesktops@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupSwitchItemController@UTaskGroupSwitchItemController@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUISwitchItem@Multitasking@ComposableShell@Internal@Windows@3@AEBW4VirtualDesktopsScope@TaskGroups@Shell@783@@Z @ 0x1805427B8 (-IsVisibleOnDesktops@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupSwitchItemController@.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall lambda_690d2e9773cc08e07279b20ff14abba4_::operator()(
        __int64 *a1,
        winrt::Windows::Foundation::IUnknown *a2,
        __int64 *a3,
        __int64 a4)
{
  char v7; // si
  _QWORD *v8; // rax
  bool v9; // bl
  _QWORD *v10; // rbx
  _QWORD *v11; // rax
  unsigned __int8 IsVisibleOnDesktops; // bl
  _QWORD *v13; // rbx
  _QWORD *v14; // rax
  __int64 v15; // [rsp+20h] [rbp-10h] BYREF
  __int64 v16; // [rsp+28h] [rbp-8h] BYREF
  __int64 v17; // [rsp+88h] [rbp+58h] BYREF

  v7 = 0;
  LODWORD(v17) = 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SnapGroupsInSwitchers>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_SnapGroupsInSwitchers>::GetImpl'::`2'::impl,
    1u,
    3u,
    a4);
  v9 = 0;
  if ( a1[2] )
  {
    v8 = winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_IEvaluateItemEventArgs<winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs>::Item(
           a3,
           &v15);
    v7 = 1;
    LODWORD(v17) = 1;
    if ( winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_IDataSourceAdapter<winrt::Windows::Internal::ComposableShell::Multitasking::IDataSourceAdapter>::AcceptsSwitchItem(
           a1 + 2,
           v8) )
    {
      v9 = 1;
    }
  }
  if ( (v7 & 1) != 0 )
    winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v15);
  if ( v9 )
  {
    v10 = winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapter<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupDataSourceAdapter>::TaskGroupController(
            a1 + 2,
            &v16);
    LODWORD(v17) = 0;
    v11 = winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_IEvaluateItemEventArgs<winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs>::Item(
            a3,
            &v15);
    IsVisibleOnDesktops = winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupSwitchItemController<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupSwitchItemController>::IsVisibleOnDesktops(
                            v10,
                            v11,
                            &v17);
    winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v15);
  }
  else
  {
    v13 = winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_IVirtualDesktopCollection<winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection>::CurrentVirtualDesktop(
            a1 + 1,
            &v16);
    v14 = winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_IEvaluateItemEventArgs<winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs>::Item(
            a3,
            &v17);
    IsVisibleOnDesktops = winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_IVirtualDesktopController<winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController>::IsSwitchItemVisibleOnDesktop(
                            a1,
                            v14,
                            v13);
    winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v17);
  }
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v16);
  LODWORD(v17) = IsVisibleOnDesktops ^ 1;
  winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_IEvaluateItemEventArgs<winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs>::EvaluationState(
    a3,
    (unsigned int *)&v17);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>(a2);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)a3);
}
