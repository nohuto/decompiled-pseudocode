/*
 * XREFs of ?SetCursorSynchronizationMode@Api@Cursor@InputTraceLogging@@SAX_N@Z @ 0x1402DAE48
 * Callers:
 *     ?InputCoreProviderCallbackWorker@@YAXXZ @ 0x14028B2FC (-InputCoreProviderCallbackWorker@@YAXXZ.c)
 *     ?HandleRoutingStateAction@CursorApiRouter@@AEAAXW4RoutingStateActionNeeded@1@@Z @ 0x1402DA510 (-HandleRoutingStateAction@CursorApiRouter@@AEAAXW4RoutingStateActionNeeded@1@@Z.c)
 * Callees:
 *     ?Enabled@InputTraceLogging@@SA_NW4InputTraceKeywords@@E@Z @ 0x14002C0A4 (-Enabled@InputTraceLogging@@SA_NW4InputTraceKeywords@@E@Z.c)
 *     _tlgKeywordOn @ 0x14017A844 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x140203D08 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 */

void __fastcall InputTraceLogging::Cursor::Api::SetCursorSynchronizationMode()
{
  unsigned int v0; // r10d
  char v1; // r9
  const char *v2; // rax
  const char *v3; // [rsp+48h] [rbp+10h] BYREF

  if ( InputTraceLogging::Enabled(8, 0)
    && (unsigned int)dword_140398B80 > 4
    && tlgKeywordOn((__int64)&dword_140398B80, v0) )
  {
    v2 = "DwmLPC";
    if ( !v1 )
      v2 = "Direct";
    v3 = v2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
      (__int64)&dword_140398B80,
      byte_140368CFE,
      0LL,
      0LL,
      (void **)&v3);
  }
}
