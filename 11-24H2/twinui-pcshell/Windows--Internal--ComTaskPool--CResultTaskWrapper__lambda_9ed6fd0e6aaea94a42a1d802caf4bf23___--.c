/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_9ed6fd0e6aaea94a42a1d802caf4bf23___::Run @ 0x180442220
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_9ed6fd0e6aaea94a42a1d802caf4bf23_::operator() @ 0x18043E380 (_lambda_9ed6fd0e6aaea94a42a1d802caf4bf23_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_9ed6fd0e6aaea94a42a1d802caf4bf23___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_9ed6fd0e6aaea94a42a1d802caf4bf23_::operator()((__int64 *)(a1 + 16));
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
