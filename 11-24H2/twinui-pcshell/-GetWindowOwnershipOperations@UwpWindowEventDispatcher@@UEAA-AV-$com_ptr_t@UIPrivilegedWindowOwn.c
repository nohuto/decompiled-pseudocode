/*
 * XREFs of ?GetWindowOwnershipOperations@UwpWindowEventDispatcher@@UEAA?AV?$com_ptr_t@UIPrivilegedWindowOwnershipOperations@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1804290A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18007D438 (--0-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 */

__int64 *__fastcall UwpWindowEventDispatcher::GetWindowOwnershipOperations(__int64 a1, __int64 *a2)
{
  wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
    a2,
    (__int64 *)(a1 + 288));
  return a2;
}
