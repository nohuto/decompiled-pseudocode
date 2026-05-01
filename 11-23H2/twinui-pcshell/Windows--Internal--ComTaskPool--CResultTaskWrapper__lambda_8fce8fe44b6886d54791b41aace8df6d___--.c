/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_8fce8fe44b6886d54791b41aace8df6d___::Run @ 0x1801F9890
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_8fce8fe44b6886d54791b41aace8df6d_::operator() @ 0x1801F7F30 (_lambda_8fce8fe44b6886d54791b41aace8df6d_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_8fce8fe44b6886d54791b41aace8df6d___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_8fce8fe44b6886d54791b41aace8df6d_::operator()((__int64 *)(a1 + 16));
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
