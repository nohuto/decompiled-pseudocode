/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_e1e333736bfc613a027e396b29f06629___::Run @ 0x1801F9B20
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_e1e333736bfc613a027e396b29f06629_::operator() @ 0x1801F8DB0 (_lambda_e1e333736bfc613a027e396b29f06629_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_e1e333736bfc613a027e396b29f06629___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_e1e333736bfc613a027e396b29f06629_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 48) = result;
  return result;
}
