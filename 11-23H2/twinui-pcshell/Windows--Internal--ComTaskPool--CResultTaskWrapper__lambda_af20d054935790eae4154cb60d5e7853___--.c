/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_af20d054935790eae4154cb60d5e7853___::Run @ 0x1801F99B0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_af20d054935790eae4154cb60d5e7853_::operator() @ 0x1801F8744 (_lambda_af20d054935790eae4154cb60d5e7853_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_af20d054935790eae4154cb60d5e7853___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_af20d054935790eae4154cb60d5e7853_::operator()((__int64 *)(a1 + 16));
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
