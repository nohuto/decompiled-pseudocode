/*
 * XREFs of wil::details::lambda_call__lambda_7960777bf036fc2780f24264ec63d0d6___::_lambda_call__lambda_7960777bf036fc2780f24264ec63d0d6___ @ 0x1800F3DDC
 * Callers:
 *     ?DisconnectFromRightSubmix@CStreamInstanceProxy@@UEAAJPEAUIAudioStreamInfo@@H@Z @ 0x18005AA70 (-DisconnectFromRightSubmix@CStreamInstanceProxy@@UEAAJPEAUIAudioStreamInfo@@H@Z.c)
 * Callees:
 *     _lambda_7960777bf036fc2780f24264ec63d0d6_::operator() @ 0x1800F4308 (_lambda_7960777bf036fc2780f24264ec63d0d6_--operator().c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_7960777bf036fc2780f24264ec63d0d6___::_lambda_call__lambda_7960777bf036fc2780f24264ec63d0d6___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return lambda_7960777bf036fc2780f24264ec63d0d6_::operator()();
  }
  return result;
}
