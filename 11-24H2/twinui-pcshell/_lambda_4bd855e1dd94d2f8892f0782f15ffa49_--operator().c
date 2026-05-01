/*
 * XREFs of _lambda_4bd855e1dd94d2f8892f0782f15ffa49_::operator() @ 0x1806BD890
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs___lambda_4bd855e1dd94d2f8892f0782f15ffa49___::Invoke @ 0x1806BDC50 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_1806BDC50.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180052F5C (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??8winrt@@YA_NAEBUhstring@0@0@Z @ 0x1801AAAB0 (--8winrt@@YA_NAEBUhstring@0@0@Z.c)
 *     ?EvaluationState@?$consume_Windows_Internal_ComposableShell_Multitasking_IEvaluateItemEventArgs@UIEvaluateItemEventArgs@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBW4SwitchItemInclusion@Multitasking@ComposableShell@Internal@Windows@3@@Z @ 0x180285AA4 (-EvaluationState@-$consume_Windows_Internal_ComposableShell_Multitasking_IEvaluateItemEventArgs@.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall lambda_4bd855e1dd94d2f8892f0782f15ffa49_::operator()(
        __int64 ***a1,
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *a2,
        __int64 **a3)
{
  __int64 **v6; // rdi
  __int64 **v7; // rbp
  __int64 **InstanceAsync; // rax
  __int64 *v9; // rbx
  __int64 *v10; // rax
  _QWORD v11[9]; // [rsp+20h] [rbp-48h] BYREF
  volatile signed __int32 *v12; // [rsp+70h] [rbp+8h] BYREF
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v13; // [rsp+78h] [rbp+10h]
  __int64 **v14; // [rsp+80h] [rbp+18h]
  volatile signed __int32 *v15; // [rsp+88h] [rbp+20h] BYREF

  v14 = a3;
  v13 = a2;
  v6 = *a1;
  v7 = a1[1];
  while ( v6 != v7 )
  {
    InstanceAsync = (__int64 **)winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
                                  a3,
                                  v11);
    v9 = winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
           InstanceAsync,
           &v15);
    v10 = winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
            v6,
            &v12);
    LOBYTE(v9) = winrt::operator==(v10, v9);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v12);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v15);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v11);
    if ( (_BYTE)v9 )
      break;
    ++v6;
  }
  if ( v6 != a1[1] )
  {
    LODWORD(v12) = 1;
    winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_IEvaluateItemEventArgs<winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs>::EvaluationState(
      (__int64 *)a3,
      (unsigned int *)&v12);
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(a2);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)a3);
}
