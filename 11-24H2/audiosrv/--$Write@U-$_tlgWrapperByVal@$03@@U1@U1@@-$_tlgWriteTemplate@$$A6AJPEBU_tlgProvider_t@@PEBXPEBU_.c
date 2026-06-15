/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x180004FFC
 * Callers:
 *     ?LogUnsubscribe@CSpatialAudioResourceManagerTraceLogger@@QEAAXK_NI@Z @ 0x18009C130 (-LogUnsubscribe@CSpatialAudioResourceManagerTraceLogger@@QEAAXK_NI@Z.c)
 *     ?LogSubscribe@CSpatialAudioResourceManagerTraceLogger@@QEAAXK_NI@Z @ 0x180124498 (-LogSubscribe@CSpatialAudioResourceManagerTraceLogger@@QEAAXK_NI@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180051554 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  _QWORD v8[10]; // [rsp+30h] [rbp-68h] BYREF

  v8[8] = a7;
  v8[6] = a6;
  v8[4] = a5;
  v8[9] = 4LL;
  v8[7] = 4LL;
  v8[5] = 4LL;
  return tlgWriteTransfer_EventWriteTransfer(&dword_1801D82B0, a2, 0LL, 0LL, 5, v8);
}
