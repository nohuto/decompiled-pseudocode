/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_c0ad35e7ede92f1b2476312fe194a0a6___::Run @ 0x180055CD0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_c0ad35e7ede92f1b2476312fe194a0a6_::operator() @ 0x180055CF8 (_lambda_c0ad35e7ede92f1b2476312fe194a0a6_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_c0ad35e7ede92f1b2476312fe194a0a6___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_c0ad35e7ede92f1b2476312fe194a0a6_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 40) = result;
  return result;
}
