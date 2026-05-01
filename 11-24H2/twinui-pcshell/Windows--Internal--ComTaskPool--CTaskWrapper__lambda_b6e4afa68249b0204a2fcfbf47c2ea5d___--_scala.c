/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b6e4afa68249b0204a2fcfbf47c2ea5d___::_scalar_deleting_destructor_ @ 0x1800A8250
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3fd5a9359bd88b84e59fbdca2ad299ce__&_::_CTaskWrapper__lambda_3fd5a9359bd88b84e59fbdca2ad299ce__&_ @ 0x1800A828C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_3fd5a9359bd88b84e59fbdca2ad299ce__-_--_CTas.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b6e4afa68249b0204a2fcfbf47c2ea5d___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3fd5a9359bd88b84e59fbdca2ad299ce____::_CTaskWrapper__lambda_3fd5a9359bd88b84e59fbdca2ad299ce____();
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x30);
  return a1;
}
