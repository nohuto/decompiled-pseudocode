/*
 * XREFs of ?SonarStart@Mouse@InputTraceLogging@@SAXAEBUtagPOINT@@I@Z @ 0x140285364
 * Callers:
 *     zzzStartSonar @ 0x14028572C (zzzStartSonar.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x1400025B4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     _tlgKeywordOn @ 0x14017A844 (_tlgKeywordOn.c)
 */

void __fastcall InputTraceLogging::Mouse::SonarStart(const struct tagPOINT *a1)
{
  if ( (unsigned int)dword_140398B80 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_140398B80, 64LL) )
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_140398B80,
        (__int64)&unk_14036661F);
  }
}
