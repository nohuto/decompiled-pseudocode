/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e40398d42ff5cb66d230c2cd21ebd5c8___::_scalar_deleting_destructor_ @ 0x1803B7030
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e40398d42ff5cb66d230c2cd21ebd5c8___::_CTaskWrapper__lambda_e40398d42ff5cb66d230c2cd21ebd5c8___ @ 0x1803B54AC (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e40398d42ff5cb66d230c2cd21ebd5c8___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e40398d42ff5cb66d230c2cd21ebd5c8___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e40398d42ff5cb66d230c2cd21ebd5c8___::_CTaskWrapper__lambda_e40398d42ff5cb66d230c2cd21ebd5c8___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x30);
  return a1;
}
