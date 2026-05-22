/*
 * XREFs of ?LogSpeechRuntimeListenerFunct_@ISMTracing@@QEAAXPEBG@Z @ 0x1800D2494
 * Callers:
 *     ?InitializeCoreMessaging@SpeechRuntimeListener@@AEAAJXZ @ 0x1800D2294 (-InitializeCoreMessaging@SpeechRuntimeListener@@AEAAJXZ.c)
 *     ?OnSelect@SpeechRuntimeListener@@AEAAJXZ @ 0x1800D2534 (-OnSelect@SpeechRuntimeListener@@AEAAJXZ.c)
 * Callees:
 *     ?IsVerboseEnabled@ISMTracing@@SA_N_K@Z @ 0x180013528 (-IsVerboseEnabled@ISMTracing@@SA_N_K@Z.c)
 *     ?Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ @ 0x180013E5C (-Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180031A40 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x180059800 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 */

void __fastcall ISMTracing::LogSpeechRuntimeListenerFunct_(const WCHAR *this, const unsigned __int16 *a2)
{
  const struct _tlgProvider_t *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  const WCHAR *v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = this;
  if ( ISMTracing::IsVerboseEnabled((__int64)this) )
  {
    v3 = ISMTracing::Provider();
    if ( *(_DWORD *)v3 > 4u && tlgKeywordOn((__int64)v3, 1LL) )
    {
      v7 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
        v4,
        byte_18021234D,
        v5,
        v6,
        &v7);
    }
  }
}
