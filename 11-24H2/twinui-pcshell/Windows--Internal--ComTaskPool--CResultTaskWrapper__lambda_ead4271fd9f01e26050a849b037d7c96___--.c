/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_ead4271fd9f01e26050a849b037d7c96___::Run @ 0x18044B6E0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_ead4271fd9f01e26050a849b037d7c96_::operator() @ 0x18044A684 (_lambda_ead4271fd9f01e26050a849b037d7c96_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_ead4271fd9f01e26050a849b037d7c96___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_ead4271fd9f01e26050a849b037d7c96_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
