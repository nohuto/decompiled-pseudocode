/*
 * XREFs of wil::details::lambda_call__lambda_fbaeb66274bee8948b20648bfb33ecc3___::_lambda_call__lambda_fbaeb66274bee8948b20648bfb33ecc3___ @ 0x1800F3E1C
 * Callers:
 *     ?ConnectToRightSubmix@CStreamInstanceProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUISubmixProxy@@H@Z @ 0x18005E040 (-ConnectToRightSubmix@CStreamInstanceProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUISubmixProxy@@H@Z.c)
 * Callees:
 *     _lambda_fbaeb66274bee8948b20648bfb33ecc3_::operator() @ 0x1800F46C0 (_lambda_fbaeb66274bee8948b20648bfb33ecc3_--operator().c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_fbaeb66274bee8948b20648bfb33ecc3___::_lambda_call__lambda_fbaeb66274bee8948b20648bfb33ecc3___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 24) )
  {
    *(_BYTE *)(a1 + 24) = 0;
    return lambda_fbaeb66274bee8948b20648bfb33ecc3_::operator()();
  }
  return result;
}
