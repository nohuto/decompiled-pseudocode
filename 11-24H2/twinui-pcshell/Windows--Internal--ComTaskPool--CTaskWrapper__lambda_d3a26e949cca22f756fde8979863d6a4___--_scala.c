/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d3a26e949cca22f756fde8979863d6a4___::_scalar_deleting_destructor_ @ 0x1803B6FF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d3a26e949cca22f756fde8979863d6a4___::_CTaskWrapper__lambda_d3a26e949cca22f756fde8979863d6a4___ @ 0x1803B5484 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d3a26e949cca22f756fde8979863d6a4___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d3a26e949cca22f756fde8979863d6a4___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d3a26e949cca22f756fde8979863d6a4___::_CTaskWrapper__lambda_d3a26e949cca22f756fde8979863d6a4___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x168);
  return a1;
}
