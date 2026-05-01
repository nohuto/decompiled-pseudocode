/*
 * XREFs of ?clear@?$vector@V?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x1801D0F44
 * Callers:
 *     ?PerformDelayedInitialization@UwpWindowEventDispatcher@@UEAAJXZ @ 0x1801D0B60 (-PerformDelayedInitialization@UwpWindowEventDispatcher@@UEAAJXZ.c)
 *     ?v_ShutdownServices@UwpWindowEventDispatcher@@UEAAJPEAUIProfferService@@@Z @ 0x1801D0D70 (-v_ShutdownServices@UwpWindowEventDispatcher@@UEAAJPEAUIProfferService@@@Z.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x18001D4DC (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@.c)
 */

__int64 *__fastcall std::vector<wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>>::clear(
        __int64 **a1)
{
  __int64 *v1; // rdx
  __int64 *result; // rax

  v1 = a1[1];
  if ( *a1 != v1 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>>(*a1, v1);
    result = *a1;
    a1[1] = *a1;
  }
  return result;
}
