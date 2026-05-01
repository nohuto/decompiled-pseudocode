/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f03fbe1e409519c33ffd389fa0e0619f___::_scalar_deleting_destructor_ @ 0x180062740
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f03fbe1e409519c33ffd389fa0e0619f___::_scalar_deleting_destructor_(
        _DWORD *a1,
        char a2)
{
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0x20uLL);
  return a1;
}
