/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_02dfdf62ff9979f2c4eddec1c0b19b0c___::Run @ 0x1801F97A0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_02dfdf62ff9979f2c4eddec1c0b19b0c_::operator() @ 0x1801F7720 (_lambda_02dfdf62ff9979f2c4eddec1c0b19b0c_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_02dfdf62ff9979f2c4eddec1c0b19b0c___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_02dfdf62ff9979f2c4eddec1c0b19b0c_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
