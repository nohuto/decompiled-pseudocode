/*
 * XREFs of ?PowerEvent@Power@InputTraceLogging@@SAXW4_PSPOWEREVENTTYPE@@_K@Z @ 0x1401265A8
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1400E9C80 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x140003248 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?PowerEventTypeToString@InputTraceLogging@@CAPEBDW4_PSPOWEREVENTTYPE@@@Z @ 0x1401AE0FC (-PowerEventTypeToString@InputTraceLogging@@CAPEBDW4_PSPOWEREVENTTYPE@@@Z.c)
 */

void __fastcall InputTraceLogging::Power::PowerEvent(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // [rsp+50h] [rbp+18h] BYREF
  __int64 v5; // [rsp+58h] [rbp+20h] BYREF

  if ( (unsigned int)dword_14029AE30 > 4 && (qword_14029AE40 & 2) != 0 && (qword_14029AE48 & 2) == qword_14029AE48 )
  {
    v4 = a2;
    v5 = InputTraceLogging::PowerEventTypeToString();
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>>(
      (__int64)&dword_14029AE30,
      (__int64)&unk_140275257,
      v2,
      v3,
      (void **)&v5,
      (__int64)&v4);
  }
}
