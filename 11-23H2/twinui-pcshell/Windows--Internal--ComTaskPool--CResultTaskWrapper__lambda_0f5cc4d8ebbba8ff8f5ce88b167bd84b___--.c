/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_0f5cc4d8ebbba8ff8f5ce88b167bd84b___::Run @ 0x1804F1870
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_0f5cc4d8ebbba8ff8f5ce88b167bd84b_::operator() @ 0x1804F03D4 (_lambda_0f5cc4d8ebbba8ff8f5ce88b167bd84b_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_0f5cc4d8ebbba8ff8f5ce88b167bd84b___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_0f5cc4d8ebbba8ff8f5ce88b167bd84b_::operator()((__int64 *)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
