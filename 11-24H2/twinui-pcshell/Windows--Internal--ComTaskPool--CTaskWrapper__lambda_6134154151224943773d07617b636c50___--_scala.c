/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6134154151224943773d07617b636c50___::_scalar_deleting_destructor_ @ 0x1804F9F90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6134154151224943773d07617b636c50___::_CTaskWrapper__lambda_6134154151224943773d07617b636c50___ @ 0x1804F8BE8 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6134154151224943773d07617b636c50___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6134154151224943773d07617b636c50___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6134154151224943773d07617b636c50___::_CTaskWrapper__lambda_6134154151224943773d07617b636c50___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x30);
  return a1;
}
