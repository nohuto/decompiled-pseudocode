/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_58f4954a35e6992b2fe1d34b610efbe6___::_scalar_deleting_destructor_ @ 0x180209110
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_58f4954a35e6992b2fe1d34b610efbe6___::_CTaskWrapper__lambda_58f4954a35e6992b2fe1d34b610efbe6___ @ 0x1802068E8 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_58f4954a35e6992b2fe1d34b610efbe6___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_58f4954a35e6992b2fe1d34b610efbe6___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_58f4954a35e6992b2fe1d34b610efbe6___::_CTaskWrapper__lambda_58f4954a35e6992b2fe1d34b610efbe6___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
