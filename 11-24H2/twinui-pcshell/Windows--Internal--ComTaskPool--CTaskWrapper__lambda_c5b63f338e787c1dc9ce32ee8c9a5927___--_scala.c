/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c5b63f338e787c1dc9ce32ee8c9a5927___::_scalar_deleting_destructor_ @ 0x18046F860
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c5b63f338e787c1dc9ce32ee8c9a5927___::_CTaskWrapper__lambda_c5b63f338e787c1dc9ce32ee8c9a5927___ @ 0x1803A1D10 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c5b63f338e787c1dc9ce32ee8c9a5927___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c5b63f338e787c1dc9ce32ee8c9a5927___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c5b63f338e787c1dc9ce32ee8c9a5927___::_CTaskWrapper__lambda_c5b63f338e787c1dc9ce32ee8c9a5927___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x38);
  return a1;
}
