/*
 * XREFs of wil::details::lambda_call__lambda_9779933831ecf7631e1f1e31bfa66ff4___::_lambda_call__lambda_9779933831ecf7631e1f1e31bfa66ff4___ @ 0x18010B810
 * Callers:
 *     _CVADServer::StopStream_Internal_::_1_::dtor$0 @ 0x18017087B (_CVADServer--StopStream_Internal_--_1_--dtor$0.c)
 * Callees:
 *     _lambda_9779933831ecf7631e1f1e31bfa66ff4_::operator() @ 0x18010BA0C (_lambda_9779933831ecf7631e1f1e31bfa66ff4_--operator().c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_9779933831ecf7631e1f1e31bfa66ff4___::_lambda_call__lambda_9779933831ecf7631e1f1e31bfa66ff4___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return lambda_9779933831ecf7631e1f1e31bfa66ff4_::operator()();
  }
  return result;
}
