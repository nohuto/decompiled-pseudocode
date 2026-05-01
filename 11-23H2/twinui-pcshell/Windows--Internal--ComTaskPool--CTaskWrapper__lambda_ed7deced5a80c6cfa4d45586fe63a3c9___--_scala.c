/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ed7deced5a80c6cfa4d45586fe63a3c9___::_scalar_deleting_destructor_ @ 0x1801F9760
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ed7deced5a80c6cfa4d45586fe63a3c9___::_CTaskWrapper__lambda_ed7deced5a80c6cfa4d45586fe63a3c9___ @ 0x1801DDC44 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ed7deced5a80c6cfa4d45586fe63a3c9___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ed7deced5a80c6cfa4d45586fe63a3c9___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ed7deced5a80c6cfa4d45586fe63a3c9___::_CTaskWrapper__lambda_ed7deced5a80c6cfa4d45586fe63a3c9___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
