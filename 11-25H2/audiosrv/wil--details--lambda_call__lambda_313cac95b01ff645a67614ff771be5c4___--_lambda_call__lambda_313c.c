/*
 * XREFs of wil::details::lambda_call__lambda_313cac95b01ff645a67614ff771be5c4___::_lambda_call__lambda_313cac95b01ff645a67614ff771be5c4___ @ 0x1800EEDB0
 * Callers:
 *     ?ConnectToRightSubmix@CStreamInstanceProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUISubmixProxy@@H@Z @ 0x18006BF40 (-ConnectToRightSubmix@CStreamInstanceProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUISubmixProxy@@H@Z.c)
 * Callees:
 *     _lambda_313cac95b01ff645a67614ff771be5c4_::operator() @ 0x1800EEF14 (_lambda_313cac95b01ff645a67614ff771be5c4_--operator().c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_313cac95b01ff645a67614ff771be5c4___::_lambda_call__lambda_313cac95b01ff645a67614ff771be5c4___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 24) )
  {
    *(_BYTE *)(a1 + 24) = 0;
    return lambda_313cac95b01ff645a67614ff771be5c4_::operator()();
  }
  return result;
}
