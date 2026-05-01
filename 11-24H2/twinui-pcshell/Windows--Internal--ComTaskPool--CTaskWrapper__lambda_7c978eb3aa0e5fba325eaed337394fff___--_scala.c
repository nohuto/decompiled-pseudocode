/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7c978eb3aa0e5fba325eaed337394fff___::_scalar_deleting_destructor_ @ 0x1803A1FB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7c978eb3aa0e5fba325eaed337394fff___::_CTaskWrapper__lambda_7c978eb3aa0e5fba325eaed337394fff___ @ 0x180347750 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_7c978eb3aa0e5fba325eaed337394fff___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7c978eb3aa0e5fba325eaed337394fff___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7c978eb3aa0e5fba325eaed337394fff___::_CTaskWrapper__lambda_7c978eb3aa0e5fba325eaed337394fff___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x20);
  return a1;
}
