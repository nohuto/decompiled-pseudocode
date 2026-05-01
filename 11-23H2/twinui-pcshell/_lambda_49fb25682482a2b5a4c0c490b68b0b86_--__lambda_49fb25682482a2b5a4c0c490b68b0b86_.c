/*
 * XREFs of _lambda_49fb25682482a2b5a4c0c490b68b0b86_::__lambda_49fb25682482a2b5a4c0c490b68b0b86_ @ 0x1801F7674
 * Callers:
 *     ?ReconcileSessionIdleTaskCompletion@UwpWindowWrapperBase@@AEAAXXZ @ 0x1800A07B4 (-ReconcileSessionIdleTaskCompletion@UwpWindowWrapperBase@@AEAAXXZ.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_49fb25682482a2b5a4c0c490b68b0b86___::_CTaskWrapper__lambda_49fb25682482a2b5a4c0c490b68b0b86___ @ 0x1801F76F8 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_49fb25682482a2b5a4c0c490b68b0b86___--_CTask.c)
 *     _UwpWindowWrapperBase::ReconcileSessionIdleTaskCompletion_::_1_::dtor$2 @ 0x1802B8220 (_UwpWindowWrapperBase--ReconcileSessionIdleTaskCompletion_--_1_--dtor$2.c)
 *     _WindowWrapperBase::ReconcileSessionIdleTaskCompletion_::_1_::dtor$2 @ 0x1804EB667 (_WindowWrapperBase--ReconcileSessionIdleTaskCompletion_--_1_--dtor$2.c)
 * Callees:
 *     ??1AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x180084340 (--1AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 */

void __fastcall lambda_49fb25682482a2b5a4c0c490b68b0b86_::__lambda_49fb25682482a2b5a4c0c490b68b0b86_(__int64 a1)
{
  ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::~AddSessionIdleTaskCompletion((ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion *)(a1 + 32));
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 8));
}
