/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_187e8ca969ed88f0e176cfab90feca38___::_scalar_deleting_destructor_ @ 0x1802120F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_187e8ca969ed88f0e176cfab90feca38___::_scalar_deleting_destructor_(
        _DWORD *a1,
        char a2)
{
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x20);
  return a1;
}
