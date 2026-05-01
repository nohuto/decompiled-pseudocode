/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_07c09ec2b66b1cd0a67fc9fd25c7941f___::_scalar_deleting_destructor_ @ 0x18046F620
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_07c09ec2b66b1cd0a67fc9fd25c7941f___::_CTaskWrapper__lambda_07c09ec2b66b1cd0a67fc9fd25c7941f___ @ 0x18046C5EC (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_07c09ec2b66b1cd0a67fc9fd25c7941f___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_07c09ec2b66b1cd0a67fc9fd25c7941f___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_07c09ec2b66b1cd0a67fc9fd25c7941f___::_CTaskWrapper__lambda_07c09ec2b66b1cd0a67fc9fd25c7941f___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x170);
  return a1;
}
