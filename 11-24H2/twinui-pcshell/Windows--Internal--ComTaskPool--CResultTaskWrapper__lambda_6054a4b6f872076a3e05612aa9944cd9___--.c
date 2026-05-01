/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_6054a4b6f872076a3e05612aa9944cd9___::Run @ 0x18044B470
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_6054a4b6f872076a3e05612aa9944cd9_::operator() @ 0x18044957C (_lambda_6054a4b6f872076a3e05612aa9944cd9_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_6054a4b6f872076a3e05612aa9944cd9___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_6054a4b6f872076a3e05612aa9944cd9_::operator()((_QWORD **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
