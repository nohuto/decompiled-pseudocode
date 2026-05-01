/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_e3b2dfd5cb0eb4bda98ec96399df3c7e___::Run @ 0x1801F9B50
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_e3b2dfd5cb0eb4bda98ec96399df3c7e_::operator() @ 0x1801F905C (_lambda_e3b2dfd5cb0eb4bda98ec96399df3c7e_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_e3b2dfd5cb0eb4bda98ec96399df3c7e___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_e3b2dfd5cb0eb4bda98ec96399df3c7e_::operator()((_BYTE **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
