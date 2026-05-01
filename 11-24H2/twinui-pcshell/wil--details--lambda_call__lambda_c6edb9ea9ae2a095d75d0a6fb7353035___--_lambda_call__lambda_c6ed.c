/*
 * XREFs of wil::details::lambda_call__lambda_c6edb9ea9ae2a095d75d0a6fb7353035___::_lambda_call__lambda_c6edb9ea9ae2a095d75d0a6fb7353035___ @ 0x1802CE310
 * Callers:
 *     _TaskFlowImmersiveShellBroker::ReinitializeObjects_::_1_::dtor$0 @ 0x1806D0EC4 (_TaskFlowImmersiveShellBroker--ReinitializeObjects_--_1_--dtor$0.c)
 * Callees:
 *     _lambda_c6edb9ea9ae2a095d75d0a6fb7353035_::operator() @ 0x1803FCD30 (_lambda_c6edb9ea9ae2a095d75d0a6fb7353035_--operator().c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_c6edb9ea9ae2a095d75d0a6fb7353035___::_lambda_call__lambda_c6edb9ea9ae2a095d75d0a6fb7353035___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 48) )
  {
    *(_BYTE *)(a1 + 48) = 0;
    return lambda_c6edb9ea9ae2a095d75d0a6fb7353035_::operator()(a1);
  }
  return result;
}
