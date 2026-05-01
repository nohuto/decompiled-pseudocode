/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0181179693446beb1d5841bdc72a572d___::_scalar_deleting_destructor_ @ 0x18046F5E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0181179693446beb1d5841bdc72a572d___::_CTaskWrapper__lambda_0181179693446beb1d5841bdc72a572d___ @ 0x18046C5C4 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_0181179693446beb1d5841bdc72a572d___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0181179693446beb1d5841bdc72a572d___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0181179693446beb1d5841bdc72a572d___::_CTaskWrapper__lambda_0181179693446beb1d5841bdc72a572d___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x188);
  return a1;
}
