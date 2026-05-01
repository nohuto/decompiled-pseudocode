/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_7ab3d9c0db1bfade5feb6f215ef467d5___::Run @ 0x180442130
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_7ab3d9c0db1bfade5feb6f215ef467d5_::operator() @ 0x18043DD30 (_lambda_7ab3d9c0db1bfade5feb6f215ef467d5_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_7ab3d9c0db1bfade5feb6f215ef467d5___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_7ab3d9c0db1bfade5feb6f215ef467d5_::operator()((_QWORD *)(a1 + 16));
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
