/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_5c10520fd4e2eb669a72d60e3ecd268a___::Run @ 0x1804EBBA0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_5c10520fd4e2eb669a72d60e3ecd268a_::operator() @ 0x1804E6AB8 (_lambda_5c10520fd4e2eb669a72d60e3ecd268a_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_5c10520fd4e2eb669a72d60e3ecd268a___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_5c10520fd4e2eb669a72d60e3ecd268a_::operator()((_DWORD **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
