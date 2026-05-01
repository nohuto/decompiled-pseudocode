/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_71fd42c69aa62f038d9e5026256b1616___::Run @ 0x1804EBD50
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_71fd42c69aa62f038d9e5026256b1616_::operator() @ 0x1804E6DEC (_lambda_71fd42c69aa62f038d9e5026256b1616_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_71fd42c69aa62f038d9e5026256b1616___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_71fd42c69aa62f038d9e5026256b1616_::operator()((__int64 *)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
