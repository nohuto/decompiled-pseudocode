/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ed7deced5a80c6cfa4d45586fe63a3c9___::_CTaskWrapper__lambda_ed7deced5a80c6cfa4d45586fe63a3c9___ @ 0x1801DDC44
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e28d7d1a5cb321cb0de231b4cced5c98___::_scalar_deleting_destructor_ @ 0x1801DE010 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e28d7d1a5cb321cb0de231b4cced5c98___--_scala.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ed7deced5a80c6cfa4d45586fe63a3c9___::_scalar_deleting_destructor_ @ 0x1801F9760 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ed7deced5a80c6cfa4d45586fe63a3c9___--_scala.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ed7deced5a80c6cfa4d45586fe63a3c9___::_CTaskWrapper__lambda_ed7deced5a80c6cfa4d45586fe63a3c9___(
        __int64 a1)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 24));
  *(_DWORD *)(a1 + 12) = -1073741823;
}
