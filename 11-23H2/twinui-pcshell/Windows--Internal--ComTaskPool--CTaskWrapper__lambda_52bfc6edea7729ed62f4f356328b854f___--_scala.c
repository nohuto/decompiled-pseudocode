/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_52bfc6edea7729ed62f4f356328b854f___::_scalar_deleting_destructor_ @ 0x180217E70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_52bfc6edea7729ed62f4f356328b854f___::_CTaskWrapper__lambda_52bfc6edea7729ed62f4f356328b854f___ @ 0x18021710C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_52bfc6edea7729ed62f4f356328b854f___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_52bfc6edea7729ed62f4f356328b854f___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_52bfc6edea7729ed62f4f356328b854f___::_CTaskWrapper__lambda_52bfc6edea7729ed62f4f356328b854f___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
