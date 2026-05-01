/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_75452c5cb5e77a67412b4cfed81632b0___::_scalar_deleting_destructor_ @ 0x18046F760
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_75452c5cb5e77a67412b4cfed81632b0___::_CTaskWrapper__lambda_75452c5cb5e77a67412b4cfed81632b0___ @ 0x18046C68C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_75452c5cb5e77a67412b4cfed81632b0___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_75452c5cb5e77a67412b4cfed81632b0___::_scalar_deleting_destructor_(
        void *a1,
        __int64 a2)
{
  char v2; // bl

  v2 = a2;
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_75452c5cb5e77a67412b4cfed81632b0___::_CTaskWrapper__lambda_75452c5cb5e77a67412b4cfed81632b0___(
    (__int64)a1,
    a2);
  if ( (v2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x1B0);
  return a1;
}
