/*
 * XREFs of ?TraceLoggingAutoRotationStateEvent@@YAXXZ @ 0x140205514
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x14020C860 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x14011917C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     QueryAutoRotationState @ 0x140264860 (QueryAutoRotationState.c)
 */

void __fastcall TraceLoggingAutoRotationStateEvent(__int64 a1, __int64 a2)
{
  W32GetUserSessionState(a1, a2);
  if ( (unsigned int)dword_140398BB8 > 5
    && (qword_140398BC8 & 0x400000000000LL) != 0
    && (qword_140398BD0 & 0x400000000000LL) == qword_140398BD0 )
  {
    QueryAutoRotationState();
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_140398BB8,
      (__int64)&unk_140367FE9);
  }
}
