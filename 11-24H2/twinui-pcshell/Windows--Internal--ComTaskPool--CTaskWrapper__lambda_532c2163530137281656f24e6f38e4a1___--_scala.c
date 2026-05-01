/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_532c2163530137281656f24e6f38e4a1___::_scalar_deleting_destructor_ @ 0x1803B6EF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_532c2163530137281656f24e6f38e4a1___::_CTaskWrapper__lambda_532c2163530137281656f24e6f38e4a1___ @ 0x1803B53E4 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_532c2163530137281656f24e6f38e4a1___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_532c2163530137281656f24e6f38e4a1___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_532c2163530137281656f24e6f38e4a1___::_CTaskWrapper__lambda_532c2163530137281656f24e6f38e4a1___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x188);
  return a1;
}
