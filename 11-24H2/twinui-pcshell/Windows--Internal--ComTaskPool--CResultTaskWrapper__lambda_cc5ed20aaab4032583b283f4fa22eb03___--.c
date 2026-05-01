/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_cc5ed20aaab4032583b283f4fa22eb03___::Run @ 0x1800A9AA0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_cc5ed20aaab4032583b283f4fa22eb03_::operator() @ 0x1800A9AF8 (_lambda_cc5ed20aaab4032583b283f4fa22eb03_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_cc5ed20aaab4032583b283f4fa22eb03___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_cc5ed20aaab4032583b283f4fa22eb03_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
