/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_2c3f3b4f1bafb50fab998dee840e32d8__Windows::Internal::CNoResult_::Run @ 0x180170130
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_2c3f3b4f1bafb50fab998dee840e32d8_::operator() @ 0x18016B3D0 (_lambda_2c3f3b4f1bafb50fab998dee840e32d8_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::COperationLambdaVar_0__lambda_2c3f3b4f1bafb50fab998dee840e32d8__Windows::Internal::CNoResult_::Run(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4)
{
  if ( a3 >= 0 )
    a3 = *(_DWORD *)(a1 + 32);
  if ( a2 == 1 && a3 >= 0 )
    return (unsigned int)lambda_2c3f3b4f1bafb50fab998dee840e32d8_::operator()((__int64 *)(a1 + 8), a4);
  return (unsigned int)a3;
}
