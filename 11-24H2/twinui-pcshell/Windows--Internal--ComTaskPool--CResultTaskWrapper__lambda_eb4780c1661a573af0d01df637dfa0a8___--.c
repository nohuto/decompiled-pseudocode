/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_eb4780c1661a573af0d01df637dfa0a8___::Run @ 0x18018CAF0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_eb4780c1661a573af0d01df637dfa0a8_::operator() @ 0x18018CB18 (_lambda_eb4780c1661a573af0d01df637dfa0a8_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_eb4780c1661a573af0d01df637dfa0a8___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_eb4780c1661a573af0d01df637dfa0a8_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 48) = result;
  return result;
}
