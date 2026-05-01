/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_55084e4f2abaab1e6a5f5781ce063f25___::_scalar_deleting_destructor_ @ 0x18043F6D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_55084e4f2abaab1e6a5f5781ce063f25___::_CTaskWrapper__lambda_55084e4f2abaab1e6a5f5781ce063f25___ @ 0x18043D000 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_55084e4f2abaab1e6a5f5781ce063f25___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_55084e4f2abaab1e6a5f5781ce063f25___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_55084e4f2abaab1e6a5f5781ce063f25___::_CTaskWrapper__lambda_55084e4f2abaab1e6a5f5781ce063f25___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x170);
  return a1;
}
