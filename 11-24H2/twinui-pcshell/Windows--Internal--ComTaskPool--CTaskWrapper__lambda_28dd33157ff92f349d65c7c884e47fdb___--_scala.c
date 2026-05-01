/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_28dd33157ff92f349d65c7c884e47fdb___::_scalar_deleting_destructor_ @ 0x1803B6EB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_28dd33157ff92f349d65c7c884e47fdb___::_CTaskWrapper__lambda_28dd33157ff92f349d65c7c884e47fdb___ @ 0x1803B53BC (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_28dd33157ff92f349d65c7c884e47fdb___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_28dd33157ff92f349d65c7c884e47fdb___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_28dd33157ff92f349d65c7c884e47fdb___::_CTaskWrapper__lambda_28dd33157ff92f349d65c7c884e47fdb___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x168);
  return a1;
}
