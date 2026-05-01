/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemCollectionChangedEventArgs___lambda_e154441d1d346fb4a2aa0b556d03af10___::Invoke @ 0x1806C01C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$try_query@UIAppViewDataSourceAdapter@@@?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIAppViewDataSourceAdapter@@Uerr_failfast_policy@wil@@@1@XZ @ 0x1802AE550 (--$try_query@UIAppViewDataSourceAdapter@@@-$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@.c)
 *     ?OnTaskGroupsSwitchItemCollectionChanged@AppViewDataSourceAdapter@@AEAAXAEBUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@AEBUISwitchItemCollectionChangedEventArgs@34567@@Z @ 0x1806C02F4 (-OnTaskGroupsSwitchItemCollectionChanged@AppViewDataSourceAdapter@@AEAAXAEBUISwitchItemDataSourc.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemCollectionChangedEventArgs___lambda_e154441d1d346fb4a2aa0b556d03af10___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax
  char *v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = a3;
  wil::com_ptr_t<IWeakReference,wil::err_failfast_policy>::try_query<IAppViewDataSourceAdapter>(
    (struct IWeakReference **)(a1 + 16),
    (void **)&v4);
  try
  {
    if ( v4 )
      AppViewDataSourceAdapter::OnTaskGroupsSwitchItemCollectionChanged(
        (AppViewDataSourceAdapter *)((unsigned __int64)(v4 - 136) & -(__int64)(v4 != 0LL)),
        (const struct winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource *)(v4 - 136),
        (const struct winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemCollectionChangedEventArgs *)&v5);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v4);
  }
  return result;
}
