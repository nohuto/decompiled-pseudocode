/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_5c59d9283367f3be71cd6fd2bf32d5fc___::Run @ 0x1804EBBD0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_5c59d9283367f3be71cd6fd2bf32d5fc_::operator() @ 0x1804E6B9C (_lambda_5c59d9283367f3be71cd6fd2bf32d5fc_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_5c59d9283367f3be71cd6fd2bf32d5fc___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_5c59d9283367f3be71cd6fd2bf32d5fc_::operator()((_QWORD **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
