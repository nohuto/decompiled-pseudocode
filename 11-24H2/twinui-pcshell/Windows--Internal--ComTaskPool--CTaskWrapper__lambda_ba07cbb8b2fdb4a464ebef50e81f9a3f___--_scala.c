/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ba07cbb8b2fdb4a464ebef50e81f9a3f___::_scalar_deleting_destructor_ @ 0x1803B6FB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ba07cbb8b2fdb4a464ebef50e81f9a3f___::_CTaskWrapper__lambda_ba07cbb8b2fdb4a464ebef50e81f9a3f___ @ 0x1803B545C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ba07cbb8b2fdb4a464ebef50e81f9a3f___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ba07cbb8b2fdb4a464ebef50e81f9a3f___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ba07cbb8b2fdb4a464ebef50e81f9a3f___::_CTaskWrapper__lambda_ba07cbb8b2fdb4a464ebef50e81f9a3f___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x190);
  return a1;
}
