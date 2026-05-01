/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_5b81071474e0379f4c1550f72c623acc___::Run @ 0x18044E0E0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_5b81071474e0379f4c1550f72c623acc_::operator() @ 0x18044DD24 (_lambda_5b81071474e0379f4c1550f72c623acc_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_5b81071474e0379f4c1550f72c623acc___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_5b81071474e0379f4c1550f72c623acc_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 48) = result;
  return result;
}
