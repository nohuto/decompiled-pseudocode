/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_14b36391e39e184c5a3f1194e32070c1___::_scalar_deleting_destructor_ @ 0x180147A90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_14b36391e39e184c5a3f1194e32070c1___::_CTaskWrapper__lambda_14b36391e39e184c5a3f1194e32070c1___ @ 0x180146F20 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_14b36391e39e184c5a3f1194e32070c1___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_14b36391e39e184c5a3f1194e32070c1___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_14b36391e39e184c5a3f1194e32070c1___::_CTaskWrapper__lambda_14b36391e39e184c5a3f1194e32070c1___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x28);
  return a1;
}
