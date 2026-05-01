/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_72db17ad2ce63b3f6d9d6af13d8729fe___::_scalar_deleting_destructor_ @ 0x1801D0C80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_72db17ad2ce63b3f6d9d6af13d8729fe___::_CTaskWrapper__lambda_72db17ad2ce63b3f6d9d6af13d8729fe___ @ 0x1801D0728 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_72db17ad2ce63b3f6d9d6af13d8729fe___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_72db17ad2ce63b3f6d9d6af13d8729fe___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_72db17ad2ce63b3f6d9d6af13d8729fe___::_CTaskWrapper__lambda_72db17ad2ce63b3f6d9d6af13d8729fe___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
