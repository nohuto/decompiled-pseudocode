/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_1535a6ac74a46a99e57700c911cef706__Windows::Internal::CNoResult_::Run @ 0x18006E890
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_1535a6ac74a46a99e57700c911cef706_::operator() @ 0x18006D28C (_lambda_1535a6ac74a46a99e57700c911cef706_--operator().c)
 */

__int64 __fastcall Windows::Internal::COperationLambdaVar_0__lambda_1535a6ac74a46a99e57700c911cef706__Windows::Internal::CNoResult_::Run(
        __int64 a1,
        int a2,
        int a3)
{
  if ( a3 >= 0 )
    a3 = *(_DWORD *)(a1 + 16);
  if ( a2 == 1 && a3 >= 0 )
    return (unsigned int)lambda_1535a6ac74a46a99e57700c911cef706_::operator()((_QWORD *)(a1 + 8));
  return (unsigned int)a3;
}
