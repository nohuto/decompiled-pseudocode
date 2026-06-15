/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7ee6381ccef9550c878152fb933ee002___::_scalar_deleting_destructor_ @ 0x180147AD0
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7ee6381ccef9550c878152fb933ee002___::_CTaskWrapper__lambda_7ee6381ccef9550c878152fb933ee002___ @ 0x1800627BC (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_7ee6381ccef9550c878152fb933ee002___--_CTask.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7ee6381ccef9550c878152fb933ee002___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7ee6381ccef9550c878152fb933ee002___::_CTaskWrapper__lambda_7ee6381ccef9550c878152fb933ee002___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x20);
  return a1;
}
