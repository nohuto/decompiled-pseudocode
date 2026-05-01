/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_d95836077fc497a3191a50b6c6baa704___::Run @ 0x1804EBFF0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_d95836077fc497a3191a50b6c6baa704_::operator() @ 0x1804E8440 (_lambda_d95836077fc497a3191a50b6c6baa704_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_d95836077fc497a3191a50b6c6baa704___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_d95836077fc497a3191a50b6c6baa704_::operator()((__int64 *)(a1 + 16));
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
