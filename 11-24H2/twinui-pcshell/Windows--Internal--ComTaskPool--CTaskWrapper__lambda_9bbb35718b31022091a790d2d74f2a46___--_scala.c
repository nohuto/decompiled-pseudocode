/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9bbb35718b31022091a790d2d74f2a46___::_scalar_deleting_destructor_ @ 0x18046F7E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9bbb35718b31022091a790d2d74f2a46___::_CTaskWrapper__lambda_9bbb35718b31022091a790d2d74f2a46___ @ 0x18046C6DC (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_9bbb35718b31022091a790d2d74f2a46___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9bbb35718b31022091a790d2d74f2a46___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9bbb35718b31022091a790d2d74f2a46___::_CTaskWrapper__lambda_9bbb35718b31022091a790d2d74f2a46___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x178);
  return a1;
}
