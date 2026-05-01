/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_8eaa9d9bc48e0c760b532341ceadabea___::Run @ 0x1804307B0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_8eaa9d9bc48e0c760b532341ceadabea_::operator() @ 0x18042E6CC (_lambda_8eaa9d9bc48e0c760b532341ceadabea_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_8eaa9d9bc48e0c760b532341ceadabea___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_8eaa9d9bc48e0c760b532341ceadabea_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 40) = result;
  return result;
}
