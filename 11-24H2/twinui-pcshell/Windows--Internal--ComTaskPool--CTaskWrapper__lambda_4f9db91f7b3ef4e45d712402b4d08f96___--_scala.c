/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4f9db91f7b3ef4e45d712402b4d08f96___::_scalar_deleting_destructor_ @ 0x180410030
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4f9db91f7b3ef4e45d712402b4d08f96___::_CTaskWrapper__lambda_4f9db91f7b3ef4e45d712402b4d08f96___ @ 0x18040FB1C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_4f9db91f7b3ef4e45d712402b4d08f96___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4f9db91f7b3ef4e45d712402b4d08f96___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4f9db91f7b3ef4e45d712402b4d08f96___::_CTaskWrapper__lambda_4f9db91f7b3ef4e45d712402b4d08f96___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x48);
  return a1;
}
