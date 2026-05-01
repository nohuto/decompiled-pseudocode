/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a469c2389bb8dc71f832d95fbc03d5e0___::_scalar_deleting_destructor_ @ 0x18046F820
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a469c2389bb8dc71f832d95fbc03d5e0___::_CTaskWrapper__lambda_a469c2389bb8dc71f832d95fbc03d5e0___ @ 0x18046C704 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a469c2389bb8dc71f832d95fbc03d5e0___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a469c2389bb8dc71f832d95fbc03d5e0___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a469c2389bb8dc71f832d95fbc03d5e0___::_CTaskWrapper__lambda_a469c2389bb8dc71f832d95fbc03d5e0___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x188);
  return a1;
}
