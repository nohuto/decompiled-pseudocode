/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_d5e5a917ee3a3ff55152befa6d529e5a___::Run @ 0x1804EBFC0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_d5e5a917ee3a3ff55152befa6d529e5a_::operator() @ 0x1804E836C (_lambda_d5e5a917ee3a3ff55152befa6d529e5a_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_d5e5a917ee3a3ff55152befa6d529e5a___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_d5e5a917ee3a3ff55152befa6d529e5a_::operator()((HSTRING **)(a1 + 16));
  **(_DWORD **)(a1 + 40) = result;
  return result;
}
