/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_28173a8c926c87e1969fb34dfb279c06___::_scalar_deleting_destructor_ @ 0x1801F96E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_28173a8c926c87e1969fb34dfb279c06___::_CTaskWrapper__lambda_28173a8c926c87e1969fb34dfb279c06___ @ 0x1801F76D0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_28173a8c926c87e1969fb34dfb279c06___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_28173a8c926c87e1969fb34dfb279c06___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_28173a8c926c87e1969fb34dfb279c06___::_CTaskWrapper__lambda_28173a8c926c87e1969fb34dfb279c06___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
