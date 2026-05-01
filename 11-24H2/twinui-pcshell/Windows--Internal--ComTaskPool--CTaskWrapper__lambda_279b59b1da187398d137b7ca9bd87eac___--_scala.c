/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_279b59b1da187398d137b7ca9bd87eac___::_scalar_deleting_destructor_ @ 0x180235BD0
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_279b59b1da187398d137b7ca9bd87eac___::_CTaskWrapper__lambda_279b59b1da187398d137b7ca9bd87eac___ @ 0x1802CA1F8 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_279b59b1da187398d137b7ca9bd87eac___--_CTask.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_279b59b1da187398d137b7ca9bd87eac___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_279b59b1da187398d137b7ca9bd87eac___::_CTaskWrapper__lambda_279b59b1da187398d137b7ca9bd87eac___();
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x30);
  return a1;
}
