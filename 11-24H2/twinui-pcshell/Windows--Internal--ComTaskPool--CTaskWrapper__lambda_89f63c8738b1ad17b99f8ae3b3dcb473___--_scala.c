/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_89f63c8738b1ad17b99f8ae3b3dcb473___::_scalar_deleting_destructor_ @ 0x1803B6F70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_89f63c8738b1ad17b99f8ae3b3dcb473___::_CTaskWrapper__lambda_89f63c8738b1ad17b99f8ae3b3dcb473___ @ 0x1803B5434 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_89f63c8738b1ad17b99f8ae3b3dcb473___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_89f63c8738b1ad17b99f8ae3b3dcb473___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_89f63c8738b1ad17b99f8ae3b3dcb473___::_CTaskWrapper__lambda_89f63c8738b1ad17b99f8ae3b3dcb473___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x190);
  return a1;
}
