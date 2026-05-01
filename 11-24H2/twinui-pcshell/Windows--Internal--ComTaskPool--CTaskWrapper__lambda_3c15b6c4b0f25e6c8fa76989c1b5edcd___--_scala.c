/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3c15b6c4b0f25e6c8fa76989c1b5edcd___::_scalar_deleting_destructor_ @ 0x1801FAD40
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3c15b6c4b0f25e6c8fa76989c1b5edcd___::_CTaskWrapper__lambda_3c15b6c4b0f25e6c8fa76989c1b5edcd___ @ 0x1801E241C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_3c15b6c4b0f25e6c8fa76989c1b5edcd___--_CTask.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3c15b6c4b0f25e6c8fa76989c1b5edcd___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3c15b6c4b0f25e6c8fa76989c1b5edcd___::_CTaskWrapper__lambda_3c15b6c4b0f25e6c8fa76989c1b5edcd___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x18);
  return a1;
}
