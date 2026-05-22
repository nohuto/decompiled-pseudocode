/*
 * XREFs of ?SetPosition@Cursor@InputTraceLogging@@SAX_KHH@Z @ 0x1801C1200
 * Callers:
 *     ?SetPosition@DWMCursor@@UEAAJJJ@Z @ 0x1801C1280 (-SetPosition@DWMCursor@@UEAAJJJ@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180003BA4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18001AA20 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180031480 (_tlgKeywordOn.c)
 */

void __fastcall InputTraceLogging::Cursor::SetPosition(__int64 a1, int a2, int a3)
{
  const struct _tlgProvider_t *v6; // rcx
  __int64 v7; // rcx
  int v8; // [rsp+68h] [rbp+10h] BYREF
  int v9; // [rsp+70h] [rbp+18h] BYREF
  __int64 v10; // [rsp+78h] [rbp+20h] BYREF

  v6 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v6 > 4u && tlgKeywordOn((__int64)v6, 8LL) )
  {
    v8 = a3;
    v9 = a2;
    v10 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v7,
      (__int64)&unk_18021D9CC,
      0LL,
      0LL,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)&v8);
  }
}
