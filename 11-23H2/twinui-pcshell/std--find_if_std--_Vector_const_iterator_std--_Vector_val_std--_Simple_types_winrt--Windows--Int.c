/*
 * XREFs of std::find_if_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem_______lambda_dac3b76ab7a726297b89406c03dbf98a___ @ 0x18078ADB4
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs___lambda_4bd855e1dd94d2f8892f0782f15ffa49___::Invoke @ 0x18078B6A0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_18078B6A0.c)
 * Callees:
 *     ??8winrt@@YA_NAEBUhstring@0@0@Z @ 0x18004CF30 (--8winrt@@YA_NAEBUhstring@0@0@Z.c)
 *     ?Item@?$consume_Windows_Internal_ComposableShell_Multitasking_IEvaluateItemEventArgs@UIEvaluateItemEventArgs@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18009430C (-Item@-$consume_Windows_Internal_ComposableShell_Multitasking_IEvaluateItemEventArgs@UIEvaluateI.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?Id@?$consume_Windows_Internal_Shell_IRemoteSystemWindowAddedEventArgs@UIRemoteSystemWindowAddedEventArgs@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180400648 (-Id@-$consume_Windows_Internal_Shell_IRemoteSystemWindowAddedEventArgs@UIRemoteSystemWindowAdded.c)
 */

// Hidden C++ exception states: #wind=2
__int64 **__fastcall std::find_if_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem_______lambda_dac3b76ab7a726297b89406c03dbf98a___(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 *i; // rbp
  __int64 *v8; // rax
  _QWORD *v9; // rsi
  _QWORD *v10; // rax
  __int64 v11; // r8
  char v12; // si
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF
  volatile signed __int32 *v15; // [rsp+58h] [rbp+10h] BYREF
  volatile signed __int32 *v16; // [rsp+60h] [rbp+18h] BYREF

  for ( i = a2; i != a3; ++i )
  {
    v8 = winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_IEvaluateItemEventArgs<winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs>::Item(
           a4,
           &v14);
    v9 = winrt::impl::consume_Windows_Internal_Shell_IRemoteSystemWindowAddedEventArgs<winrt::Windows::Internal::Shell::IRemoteSystemWindowAddedEventArgs>::Id(
           v8,
           &v16);
    v10 = winrt::impl::consume_Windows_Internal_Shell_IRemoteSystemWindowAddedEventArgs<winrt::Windows::Internal::Shell::IRemoteSystemWindowAddedEventArgs>::Id(
            i,
            &v15);
    v12 = winrt::operator==((__int64)v10, (__int64)v9, v11);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v15);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v16);
    if ( v14 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v14);
    if ( v12 )
      break;
  }
  *a1 = i;
  return a1;
}
