/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_33b4202f4967ef1cd2a31cded00016d1__&_::_scalar_deleting_destructor_ @ 0x18055E8C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     _lambda_33b4202f4967ef1cd2a31cded00016d1_::__lambda_33b4202f4967ef1cd2a31cded00016d1_ @ 0x18055E600 (_lambda_33b4202f4967ef1cd2a31cded00016d1_--__lambda_33b4202f4967ef1cd2a31cded00016d1_.c)
 */

__int64 *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_33b4202f4967ef1cd2a31cded00016d1____::_scalar_deleting_destructor_(
        __int64 *a1,
        char a2)
{
  lambda_33b4202f4967ef1cd2a31cded00016d1_::__lambda_33b4202f4967ef1cd2a31cded00016d1_(a1 + 2);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
