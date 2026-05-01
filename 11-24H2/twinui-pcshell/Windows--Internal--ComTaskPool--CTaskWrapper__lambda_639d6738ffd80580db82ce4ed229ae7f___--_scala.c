/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_639d6738ffd80580db82ce4ed229ae7f___::_scalar_deleting_destructor_ @ 0x18030B610
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_639d6738ffd80580db82ce4ed229ae7f___::_CTaskWrapper__lambda_639d6738ffd80580db82ce4ed229ae7f___ @ 0x18030B518 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_639d6738ffd80580db82ce4ed229ae7f___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_639d6738ffd80580db82ce4ed229ae7f___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_639d6738ffd80580db82ce4ed229ae7f___::_CTaskWrapper__lambda_639d6738ffd80580db82ce4ed229ae7f___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x20);
  return a1;
}
