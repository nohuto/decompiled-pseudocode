/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a4d545b91c9e09961ecfadb7c1e91fee___::Run @ 0x180429C40
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_a4d545b91c9e09961ecfadb7c1e91fee_::operator() @ 0x180427DAC (_lambda_a4d545b91c9e09961ecfadb7c1e91fee_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a4d545b91c9e09961ecfadb7c1e91fee___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_a4d545b91c9e09961ecfadb7c1e91fee_::operator()((RTL_SRWLOCK **)(a1 + 16));
  **(_DWORD **)(a1 + 56) = result;
  return result;
}
