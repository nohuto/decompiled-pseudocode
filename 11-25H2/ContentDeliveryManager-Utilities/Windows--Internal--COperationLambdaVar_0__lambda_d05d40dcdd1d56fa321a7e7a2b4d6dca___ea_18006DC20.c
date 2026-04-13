/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_d05d40dcdd1d56fa321a7e7a2b4d6dca__Windows::Internal::CNoResult_::_scalar_deleting_destructor_ @ 0x18006DC20
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::COperationLambdaVar_0__lambda_d05d40dcdd1d56fa321a7e7a2b4d6dca__Windows::Internal::CNoResult_::_COperationLambdaVar_0__lambda_d05d40dcdd1d56fa321a7e7a2b4d6dca__Windows::Internal::CNoResult_ @ 0x18006CCC8 (Windows--Internal--COperationLambdaVar_0__lambda_d05d40dcdd1d56fa321a7e7a2b4d6dca__Windows--Inte.c)
 */

_QWORD *__fastcall Windows::Internal::COperationLambdaVar_0__lambda_d05d40dcdd1d56fa321a7e7a2b4d6dca__Windows::Internal::CNoResult_::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  Windows::Internal::COperationLambdaVar_0__lambda_d05d40dcdd1d56fa321a7e7a2b4d6dca__Windows::Internal::CNoResult_::_COperationLambdaVar_0__lambda_d05d40dcdd1d56fa321a7e7a2b4d6dca__Windows::Internal::CNoResult_(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
