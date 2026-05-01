/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f6437df0abc95a57934437eecbec2119___::Run @ 0x180442460
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_f6437df0abc95a57934437eecbec2119_::operator() @ 0x18043F300 (_lambda_f6437df0abc95a57934437eecbec2119_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f6437df0abc95a57934437eecbec2119___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_f6437df0abc95a57934437eecbec2119_::operator()((__int64 **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
