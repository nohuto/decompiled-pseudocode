/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_00240b7ecf0f21591ff2c0aa4694bf15___::_scalar_deleting_destructor_ @ 0x1805B5C50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_00240b7ecf0f21591ff2c0aa4694bf15___::_CTaskWrapper__lambda_00240b7ecf0f21591ff2c0aa4694bf15___ @ 0x1805B5BDC (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_00240b7ecf0f21591ff2c0aa4694bf15___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_00240b7ecf0f21591ff2c0aa4694bf15___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_00240b7ecf0f21591ff2c0aa4694bf15___::_CTaskWrapper__lambda_00240b7ecf0f21591ff2c0aa4694bf15___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x20);
  return a1;
}
