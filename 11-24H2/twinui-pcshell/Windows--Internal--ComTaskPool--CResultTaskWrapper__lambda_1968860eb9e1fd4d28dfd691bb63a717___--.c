/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_1968860eb9e1fd4d28dfd691bb63a717___::Run @ 0x180441F10
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_1968860eb9e1fd4d28dfd691bb63a717_::operator() @ 0x18043D310 (_lambda_1968860eb9e1fd4d28dfd691bb63a717_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_1968860eb9e1fd4d28dfd691bb63a717___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_1968860eb9e1fd4d28dfd691bb63a717_::operator()((_QWORD **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
