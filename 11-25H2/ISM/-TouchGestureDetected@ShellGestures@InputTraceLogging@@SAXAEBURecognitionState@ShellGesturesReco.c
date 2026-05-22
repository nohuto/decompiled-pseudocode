/*
 * XREFs of ?TouchGestureDetected@ShellGestures@InputTraceLogging@@SAXAEBURecognitionState@ShellGesturesRecognizer@@@Z @ 0x180158934
 * Callers:
 *     ?OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180088DB0 (-OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRe.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@333@Z @ 0x180002058 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18001AA20 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180031480 (_tlgKeywordOn.c)
 */

void __fastcall InputTraceLogging::ShellGestures::TouchGestureDetected(
        const struct ShellGesturesRecognizer::RecognitionState *a1)
{
  const struct _tlgProvider_t *v2; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rcx
  _QWORD v6[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v7; // [rsp+68h] [rbp+10h] BYREF
  __int64 v8; // [rsp+70h] [rbp+18h] BYREF
  __int64 v9; // [rsp+78h] [rbp+20h] BYREF

  v2 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v2 > 4u && tlgKeywordOn((__int64)v2, 512LL) )
  {
    v5 = *((_QWORD *)a1 + 4);
    v9 = *((_QWORD *)a1 + 2);
    v6[0] = *((_QWORD *)a1 + 1);
    v7 = v5;
    v8 = *((_QWORD *)a1 + 3);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v3,
      (__int64)&unk_180218927,
      v3,
      v4,
      (__int64)v6,
      (__int64)&v9,
      (__int64)&v8,
      (__int64)&v7);
  }
}
