/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_c7e28edb760347053732171cef665d5d__Windows::Internal::CMarshaledInterfaceResult_Windows::Gaming::Preview::GamesEnumeration::IGameListEntry___::Run @ 0x180021330
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_c7e28edb760347053732171cef665d5d_::operator() @ 0x18001A3F4 (_lambda_c7e28edb760347053732171cef665d5d_--operator().c)
 */

__int64 __fastcall Windows::Internal::COperationLambdaVar_0__lambda_c7e28edb760347053732171cef665d5d__Windows::Internal::CMarshaledInterfaceResult_Windows::Gaming::Preview::GamesEnumeration::IGameListEntry___::Run(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4)
{
  if ( a3 >= 0 )
    a3 = *(_DWORD *)(a1 + 32);
  if ( a2 == 1 && a3 >= 0 )
    return (unsigned int)lambda_c7e28edb760347053732171cef665d5d_::operator()((_QWORD *)(a1 + 8), a4);
  return (unsigned int)a3;
}
