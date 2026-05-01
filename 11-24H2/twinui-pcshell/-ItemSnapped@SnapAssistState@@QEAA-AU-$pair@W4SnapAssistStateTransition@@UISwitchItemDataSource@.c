/*
 * XREFs of ?ItemSnapped@SnapAssistState@@QEAA?AU?$pair@W4SnapAssistStateTransition@@UISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@@std@@PEAUHWND__@@AEBUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@AEBURect@Foundation@9winrt@@@Z @ 0x1806BDCAC
 * Callers:
 *     ?OnAppSnapped@XamlSnapAssistViewHost@@UEAAJ_KURect@Foundation@Windows@ABI@@@Z @ 0x1806A7660 (-OnAppSnapped@XamlSnapAssistViewHost@@UEAAJ_KURect@Foundation@Windows@ABI@@@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180051814 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?GetNetworkConnectivityLevel@?$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConnectionProfile@Connectivity@Networking@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180051D64 (-GetNetworkConnectivityLevel@-$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConn.c)
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180052F5C (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@1@XZ @ 0x18028C6B4 (--C-$tip_test@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_.c)
 *     ?watch_errors@?$tip_test@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@2@XZ @ 0x18028C74C (-watch_errors@-$tip_test@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEA.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18028D6FC (--1-$test_watcher@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion_______lambda_8aafd0e0e31e0023c064f20d88d85697___ @ 0x1802C0538 (std--find_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_winrt--Windows--Internal-.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802C88A8 (--1-$test_data_control@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@.c)
 *     ??$_Emplace_one_at_back@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@?$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$allocator@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@AEAAAEAUWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@$$QEAU234567@@Z @ 0x1802CB018 (--$_Emplace_one_at_back@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@-$v.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@AEBUSuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@?$vector@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@V?$allocator@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@std@@@std@@AEAAPEAUSuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@QEAU23456@AEBU23456@@Z @ 0x1805B0B6C (--$_Emplace_reallocate@AEBUSuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@-$vector@USuggest.c)
 *     ?MakeFilteredDataSource@SnapAssistState@@AEAA?AUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@AEBU234567@@Z @ 0x1806BDF0C (-MakeFilteredDataSource@SnapAssistState@@AEAA-AUISwitchItemDataSource@Multitasking@ComposableShe.c)
 *     memmove_0 @ 0x1806CA2E8 (memmove_0.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall SnapAssistState::ItemSnapped(__int64 a1, __int64 *a2, __int64 a3, __int64 *a4, float *a5)
{
  __int64 v9; // rsi
  __int64 *v10; // rax
  __int64 *v11; // rdx
  float v12; // xmm0_4
  float v13; // xmm1_4
  int v14; // ecx
  _BYTE *v15; // r8
  __int64 *v16; // rax
  int NetworkConnectivityLevel; // ebx
  void *v19; // [rsp+20h] [rbp-61h] BYREF
  __int64 *v20[3]; // [rsp+28h] [rbp-59h] BYREF
  _QWORD v21[2]; // [rsp+40h] [rbp-41h] BYREF
  _BYTE v22[64]; // [rsp+50h] [rbp-31h] BYREF
  _DWORD v23[4]; // [rsp+90h] [rbp+Fh] BYREF

  v20[0] = a2;
  v9 = a1 + 200;
  tip2::tip_test<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::watch_errors(
    a1 + 200,
    (__int64)v22);
  v10 = tip2::tip_test<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::operator->(
          v9,
          (__int64 *)&v19);
  ++*(_DWORD *)(*v10 + 280);
  tip2::test_data_control<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::~test_data_control<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>(&v19);
  if ( *a4 )
  {
    v11 = *(__int64 **)(a1 + 8);
    if ( v11 == *(__int64 **)(a1 + 16) )
    {
      std::vector<winrt::WindowsUdk::UI::Shell::SuggestedWindowPosition>::_Emplace_reallocate<winrt::WindowsUdk::UI::Shell::SuggestedWindowPosition const &>(
        a1,
        v11,
        a4);
    }
    else
    {
      *v11 = *a4;
      Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(v11);
      *(_QWORD *)(a1 + 8) += 8LL;
    }
  }
  LODWORD(v19) = a3;
  std::vector<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>::_Emplace_one_at_back<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>(
    a1 + 24,
    &v19);
  *(_QWORD *)(a1 + 144) = a3;
  *(_BYTE *)(a1 + 176) = 0;
  v19 = 0LL;
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)(a1 + 208), (__int64 *)&v19);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v19);
  v12 = a5[1] + a5[3];
  v13 = *a5 + a5[2];
  v14 = (int)a5[1];
  v23[0] = (int)*a5;
  v23[1] = v14;
  v23[2] = (int)v13;
  v23[3] = (int)v12;
  v21[0] = v23;
  v21[1] = a1;
  std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion_______lambda_8aafd0e0e31e0023c064f20d88d85697___(
    &v19,
    *(_QWORD *)(a1 + 48),
    *(_QWORD *)(a1 + 56),
    (__int64)v21);
  v15 = *(_BYTE **)(a1 + 56);
  if ( v19 == v15 )
  {
    *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::operator->(
                  v9,
                  (__int64 *)&v19)
             + 288) = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::~test_data_control<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>(&v19);
    *(_DWORD *)a2 = 2;
LABEL_7:
    a2[1] = 0LL;
    goto LABEL_14;
  }
  memmove_0(v19, (char *)v19 + 32, v15 - ((_BYTE *)v19 + 32));
  *(_QWORD *)(a1 + 56) -= 32LL;
  if ( *(_QWORD *)(a1 + 48) == *(_QWORD *)(a1 + 56) )
  {
    *(_DWORD *)a2 = 3;
    goto LABEL_7;
  }
  SnapAssistState::MakeFilteredDataSource(a1, v20, a1 + 184);
  v16 = winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
          v20,
          &v19);
  NetworkConnectivityLevel = winrt::impl::consume_Windows_Networking_Connectivity_IConnectionProfile<winrt::Windows::Networking::Connectivity::IConnectionProfile>::GetNetworkConnectivityLevel(v16);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v19);
  if ( NetworkConnectivityLevel )
  {
    *(_DWORD *)a2 = 1;
    a2[1] = (__int64)v20[0];
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a2 + 1);
  }
  else
  {
    *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::operator->(
                  v9,
                  (__int64 *)&v19)
             + 284) = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::~test_data_control<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>(&v19);
    *(_DWORD *)a2 = 2;
    a2[1] = 0LL;
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v20);
LABEL_14:
  tip2::test_watcher<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::~test_watcher<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>((__int64)v22);
  return a2;
}
