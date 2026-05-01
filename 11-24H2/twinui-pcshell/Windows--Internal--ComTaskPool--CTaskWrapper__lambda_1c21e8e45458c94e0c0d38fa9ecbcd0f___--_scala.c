/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1c21e8e45458c94e0c0d38fa9ecbcd0f___::_scalar_deleting_destructor_ @ 0x180101FD0
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1c21e8e45458c94e0c0d38fa9ecbcd0f___::_CTaskWrapper__lambda_1c21e8e45458c94e0c0d38fa9ecbcd0f___ @ 0x18010200C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1c21e8e45458c94e0c0d38fa9ecbcd0f___--_CTask.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1c21e8e45458c94e0c0d38fa9ecbcd0f___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1c21e8e45458c94e0c0d38fa9ecbcd0f___::_CTaskWrapper__lambda_1c21e8e45458c94e0c0d38fa9ecbcd0f___();
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x18);
  return a1;
}
