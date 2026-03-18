/*
 * XREFs of ?RawMouseThrottlingTimerFired@Mouse@InputTraceLogging@@SAXXZ @ 0x140064214
 * Callers:
 *     ?OnRawMouseThrottlingTimer@CMouseSensor@@EEAAJXZ @ 0x1400641B0 (-OnRawMouseThrottlingTimer@CMouseSensor@@EEAAJXZ.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x14004FFA8 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     _tlgKeywordOn @ 0x140096080 (_tlgKeywordOn.c)
 */

void InputTraceLogging::Mouse::RawMouseThrottlingTimerFired(void)
{
  if ( (unsigned int)dword_14029AE30 > 4 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_14029AE30, 64LL) )
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
        (__int64)&dword_14029AE30,
        (__int64)&unk_14027DC13);
  }
}
