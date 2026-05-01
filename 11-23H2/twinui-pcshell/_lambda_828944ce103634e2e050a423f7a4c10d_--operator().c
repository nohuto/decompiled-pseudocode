/*
 * XREFs of _lambda_828944ce103634e2e050a423f7a4c10d_::operator() @ 0x180772744
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::UI::Xaml::Input::PointerEventHandler__lambda_828944ce103634e2e050a423f7a4c10d___::Invoke @ 0x1807749E0 (winrt--impl--delegate_winrt--Windows--UI--Xaml--Input--PointerEventHandler__lambda_828944ce10363.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18014E10C (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??$try_query@UIVirtualDesktopSwitcherHost@@@?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIVirtualDesktopSwitcherHost@@Uerr_failfast_policy@wil@@@1@XZ @ 0x1807712B0 (--$try_query@UIVirtualDesktopSwitcherHost@@@-$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wi.c)
 *     ?StartPointerExitedTimer@VirtualDesktopSwitcherHost@@AEAAXXZ @ 0x1807768F4 (-StartPointerExitedTimer@VirtualDesktopSwitcherHost@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_828944ce103634e2e050a423f7a4c10d_::operator()(struct IWeakReference **a1)
{
  VirtualDesktopSwitcherHost *v1; // rdi
  int v2; // ebx
  __int64 v3; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v4; // [rsp+28h] [rbp-30h]
  int v5; // [rsp+30h] [rbp-28h]

  wil::com_ptr_t<IWeakReference,wil::err_failfast_policy>::try_query<IVirtualDesktopSwitcherHost>(a1, (void **)&v3);
  if ( v3 )
  {
    v1 = (VirtualDesktopSwitcherHost *)((v3 - 8) & -(__int64)(v3 != 0));
    v4 = ((unsigned __int64)v1 + 32) & -(__int64)(v1 != 0LL);
    v2 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v4, 1);
    v5 = v2;
    *((_BYTE *)v1 + 457) = 0;
    VirtualDesktopSwitcherHost::StartPointerExitedTimer(v1);
    if ( v2 >= 0 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(((unsigned __int64)v1 + 32) & -(__int64)(v1 != 0LL)));
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v3);
}
