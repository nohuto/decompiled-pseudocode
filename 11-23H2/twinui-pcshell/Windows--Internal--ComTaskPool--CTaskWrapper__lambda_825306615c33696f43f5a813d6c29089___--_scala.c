/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_825306615c33696f43f5a813d6c29089___::_scalar_deleting_destructor_ @ 0x180209190
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_825306615c33696f43f5a813d6c29089___::_CTaskWrapper__lambda_825306615c33696f43f5a813d6c29089___ @ 0x180206938 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_825306615c33696f43f5a813d6c29089___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_825306615c33696f43f5a813d6c29089___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_825306615c33696f43f5a813d6c29089___::_CTaskWrapper__lambda_825306615c33696f43f5a813d6c29089___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
