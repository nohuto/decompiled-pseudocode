/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_6f5c8d202924fda7a69e2b5dcc1ebd4e___::Run @ 0x1804420D0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_6f5c8d202924fda7a69e2b5dcc1ebd4e_::operator() @ 0x18043D89C (_lambda_6f5c8d202924fda7a69e2b5dcc1ebd4e_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_6f5c8d202924fda7a69e2b5dcc1ebd4e___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_6f5c8d202924fda7a69e2b5dcc1ebd4e_::operator()((__int64 *)(a1 + 16));
  **(_DWORD **)(a1 + 40) = result;
  return result;
}
