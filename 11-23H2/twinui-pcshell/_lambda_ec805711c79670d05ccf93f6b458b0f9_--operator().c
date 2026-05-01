/*
 * XREFs of _lambda_ec805711c79670d05ccf93f6b458b0f9_::operator() @ 0x180772B44
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::UI::Xaml::RoutedEventHandler__lambda_ec805711c79670d05ccf93f6b458b0f9___::Invoke @ 0x180774AD0 (winrt--impl--delegate_winrt--Windows--UI--Xaml--RoutedEventHandler__lambda_ec805711c79670d05ccf9.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18014E10C (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??$try_query@UIVirtualDesktopSwitcherHost@@@?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIVirtualDesktopSwitcherHost@@Uerr_failfast_policy@wil@@@1@XZ @ 0x1807712B0 (--$try_query@UIVirtualDesktopSwitcherHost@@@-$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wi.c)
 */

void __fastcall lambda_ec805711c79670d05ccf93f6b458b0f9_::operator()(struct IWeakReference **a1)
{
  unsigned __int64 v1; // rbx
  int v2; // eax
  void *v3[5]; // [rsp+20h] [rbp-28h] BYREF

  wil::com_ptr_t<IWeakReference,wil::err_failfast_policy>::try_query<IVirtualDesktopSwitcherHost>(a1, v3);
  if ( v3[0] )
  {
    v1 = ((unsigned __int64)v3[0] - 8) & -(__int64)(v3[0] != 0LL);
    v2 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((v1 + 32) & -(__int64)(v1 != 0), 1);
    *(_BYTE *)(v1 + 457) = 1;
    if ( v2 >= 0 )
      LeaveCriticalSection((LPCRITICAL_SECTION)((v1 + 32) & -(__int64)(v1 != 0)));
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v3);
}
