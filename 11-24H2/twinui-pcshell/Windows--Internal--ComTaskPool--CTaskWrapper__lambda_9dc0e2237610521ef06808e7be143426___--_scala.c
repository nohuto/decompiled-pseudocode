/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9dc0e2237610521ef06808e7be143426___::_scalar_deleting_destructor_ @ 0x180408090
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9dc0e2237610521ef06808e7be143426___::_CTaskWrapper__lambda_9dc0e2237610521ef06808e7be143426___ @ 0x180407C20 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_9dc0e2237610521ef06808e7be143426___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9dc0e2237610521ef06808e7be143426___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9dc0e2237610521ef06808e7be143426___::_CTaskWrapper__lambda_9dc0e2237610521ef06808e7be143426___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x28);
  return a1;
}
