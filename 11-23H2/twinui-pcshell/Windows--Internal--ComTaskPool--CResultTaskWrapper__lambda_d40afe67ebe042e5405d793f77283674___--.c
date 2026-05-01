/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_d40afe67ebe042e5405d793f77283674___::Run @ 0x18009FC60
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_d40afe67ebe042e5405d793f77283674_::operator() @ 0x18009FC88 (_lambda_d40afe67ebe042e5405d793f77283674_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_d40afe67ebe042e5405d793f77283674___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_d40afe67ebe042e5405d793f77283674_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
