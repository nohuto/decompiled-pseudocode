/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_6b9a4813d4cd55222670e24e1f9f417a___::Run @ 0x1804EBC00
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_6b9a4813d4cd55222670e24e1f9f417a_::operator() @ 0x1804E6C70 (_lambda_6b9a4813d4cd55222670e24e1f9f417a_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_6b9a4813d4cd55222670e24e1f9f417a___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_6b9a4813d4cd55222670e24e1f9f417a_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
