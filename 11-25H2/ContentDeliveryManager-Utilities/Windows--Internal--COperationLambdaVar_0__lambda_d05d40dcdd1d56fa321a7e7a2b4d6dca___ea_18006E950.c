/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_d05d40dcdd1d56fa321a7e7a2b4d6dca__Windows::Internal::CNoResult_::Run @ 0x18006E950
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_d05d40dcdd1d56fa321a7e7a2b4d6dca_::operator() @ 0x18006D740 (_lambda_d05d40dcdd1d56fa321a7e7a2b4d6dca_--operator().c)
 */

__int64 __fastcall Windows::Internal::COperationLambdaVar_0__lambda_d05d40dcdd1d56fa321a7e7a2b4d6dca__Windows::Internal::CNoResult_::Run(
        __int64 a1,
        int a2,
        int a3)
{
  if ( a3 >= 0 )
    a3 = *(_DWORD *)(a1 + 16);
  if ( a2 == 1 && a3 >= 0 )
    return (unsigned int)lambda_d05d40dcdd1d56fa321a7e7a2b4d6dca_::operator()((_QWORD *)(a1 + 8));
  return (unsigned int)a3;
}
