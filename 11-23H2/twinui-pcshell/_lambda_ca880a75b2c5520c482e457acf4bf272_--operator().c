/*
 * XREFs of _lambda_ca880a75b2c5520c482e457acf4bf272_::operator() @ 0x180772A84
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::UI::Xaml::RoutedEventHandler__lambda_ca880a75b2c5520c482e457acf4bf272___::Invoke @ 0x180774A80 (winrt--impl--delegate_winrt--Windows--UI--Xaml--RoutedEventHandler__lambda_ca880a75b2c5520c482e4.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18014E10C (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$try_query@UIVirtualDesktopSwitcherViewHostInternal@@@?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIVirtualDesktopSwitcherViewHostInternal@@Uerr_failfast_policy@wil@@@1@XZ @ 0x1807712E0 (--$try_query@UIVirtualDesktopSwitcherViewHostInternal@@@-$com_ptr_t@UIWeakReference@@Uerr_failfa.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_ca880a75b2c5520c482e457acf4bf272_::operator()(struct IWeakReference **a1)
{
  __int64 v1; // rdx
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  int v3; // ebx
  void *v4[2]; // [rsp+20h] [rbp-38h] BYREF
  int v5; // [rsp+30h] [rbp-28h]

  wil::com_ptr_t<IWeakReference,wil::err_failfast_policy>::try_query<IVirtualDesktopSwitcherViewHostInternal>(a1, v4);
  if ( v4[0] )
  {
    v1 = ((unsigned __int64)v4[0] - 136) & ((unsigned __int128)-(__int128)(unsigned __int64)v4[0] >> 64);
    v2 = (struct _RTL_CRITICAL_SECTION *)((v1 + 32) & -(__int64)(v1 != 0));
    v4[1] = v2;
    v3 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v2, 1);
    v5 = v3;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v4[0] + 24LL))(v4[0]);
    if ( v3 >= 0 )
      LeaveCriticalSection(v2);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v4);
}
