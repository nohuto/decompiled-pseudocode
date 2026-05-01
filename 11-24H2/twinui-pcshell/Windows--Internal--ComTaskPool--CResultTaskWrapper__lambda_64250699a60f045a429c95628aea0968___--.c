/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_64250699a60f045a429c95628aea0968___::Run @ 0x1804420A0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_64250699a60f045a429c95628aea0968_::operator() @ 0x18043D824 (_lambda_64250699a60f045a429c95628aea0968_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_64250699a60f045a429c95628aea0968___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_64250699a60f045a429c95628aea0968_::operator()((_QWORD **)(a1 + 16));
  **(_DWORD **)(a1 + 40) = result;
  return result;
}
