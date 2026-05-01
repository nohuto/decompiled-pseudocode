/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_ceee1b9c54d49ba2255ffab17ffe7895___::Run @ 0x1801F9AC0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_ceee1b9c54d49ba2255ffab17ffe7895_::operator() @ 0x1801F8ACC (_lambda_ceee1b9c54d49ba2255ffab17ffe7895_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_ceee1b9c54d49ba2255ffab17ffe7895___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_ceee1b9c54d49ba2255ffab17ffe7895_::operator()((__int64 *)(a1 + 16));
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
