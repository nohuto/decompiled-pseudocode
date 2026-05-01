/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fde1e3dd508437221a89b1c19fd2671f___::_scalar_deleting_destructor_ @ 0x180312A30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fde1e3dd508437221a89b1c19fd2671f___::_CTaskWrapper__lambda_fde1e3dd508437221a89b1c19fd2671f___ @ 0x180312798 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_fde1e3dd508437221a89b1c19fd2671f___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fde1e3dd508437221a89b1c19fd2671f___::_scalar_deleting_destructor_(
        void *a1,
        volatile int *a2)
{
  char v2; // bl

  v2 = (char)a2;
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fde1e3dd508437221a89b1c19fd2671f___::_CTaskWrapper__lambda_fde1e3dd508437221a89b1c19fd2671f___(
    (__int64)a1,
    a2);
  if ( (v2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x20);
  return a1;
}
