/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_bcb0b569c925f2594c0329e0195fd877___::Run @ 0x1804422B0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_bcb0b569c925f2594c0329e0195fd877_::operator() @ 0x18043E908 (_lambda_bcb0b569c925f2594c0329e0195fd877_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_bcb0b569c925f2594c0329e0195fd877___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_bcb0b569c925f2594c0329e0195fd877_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 40) = result;
  return result;
}
