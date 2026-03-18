/*
 * XREFs of ?SetCursorSuppression@Cursor@InputTraceLogging@@SAXW4CURSOR_SUPPRESSION_STATE@@@Z @ 0x14026CCF8
 * Callers:
 *     ?InputCoreProviderCallbackWorker@@YAXXZ @ 0x14028B2FC (-InputCoreProviderCallbackWorker@@YAXXZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x14017A844 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x140203D08 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?CursorSuppressionToString@InputTraceLogging@@CAPEBDW4CURSOR_SUPPRESSION_STATE@@@Z @ 0x140272D00 (-CursorSuppressionToString@InputTraceLogging@@CAPEBDW4CURSOR_SUPPRESSION_STATE@@@Z.c)
 */

void InputTraceLogging::Cursor::SetCursorSuppression()
{
  unsigned int v0; // r9d
  __int64 v1; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned int)dword_140398B80 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_140398B80, 8LL) )
    {
      v1 = InputTraceLogging::CursorSuppressionToString(v0);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
        (__int64)&dword_140398B80,
        byte_1403666CE,
        0LL,
        0LL,
        (void **)&v1);
    }
  }
}
