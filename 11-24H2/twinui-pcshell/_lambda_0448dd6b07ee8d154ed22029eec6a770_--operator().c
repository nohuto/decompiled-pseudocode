/*
 * XREFs of _lambda_0448dd6b07ee8d154ed22029eec6a770_::operator() @ 0x1806AA398
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::UI::Xaml::RoutedEventHandler__lambda_0448dd6b07ee8d154ed22029eec6a770___::Invoke @ 0x1806AC560 (winrt--impl--delegate_winrt--Windows--UI--Xaml--RoutedEventHandler__lambda_0448dd6b07ee8d154ed22.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180041470 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x180136988 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ??$try_query@UIVirtualDesktopSwitcherHost@@@?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIVirtualDesktopSwitcherHost@@Uerr_failfast_policy@wil@@@1@XZ @ 0x1806A9244 (--$try_query@UIVirtualDesktopSwitcherHost@@@-$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wi.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_0448dd6b07ee8d154ed22029eec6a770_::operator()(struct IWeakReference **a1)
{
  __int64 v1; // rbx
  __int64 v2; // [rsp+20h] [rbp-28h] BYREF
  __int64 v3; // [rsp+28h] [rbp-20h] BYREF
  int v4; // [rsp+30h] [rbp-18h]

  wil::com_ptr_t<IWeakReference,wil::err_failfast_policy>::try_query<IVirtualDesktopSwitcherHost>(a1, (void **)&v2);
  if ( v2 )
  {
    v1 = (v2 - 8) & -(__int64)(v2 != 0);
    v3 = (v1 + 32) & -(__int64)(v1 != 0);
    v4 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v3, 1);
    *(_BYTE *)(v1 + 457) = 0;
    CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v3);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v2);
}
