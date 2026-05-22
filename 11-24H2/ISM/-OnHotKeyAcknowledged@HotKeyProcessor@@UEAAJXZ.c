/*
 * XREFs of ?OnHotKeyAcknowledged@HotKeyProcessor@@UEAAJXZ @ 0x1801CC000
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x180031A40 (_tlgKeywordOn.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x18006BD5C (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?OnWinKeyAcknowledged@WinKeyScenarioTelemetry@@SAXXZ @ 0x18010BBB4 (-OnWinKeyAcknowledged@WinKeyScenarioTelemetry@@SAXXZ.c)
 */

__int64 __fastcall HotKeyProcessor::OnHotKeyAcknowledged(HotKeyProcessor *this)
{
  __int64 v1; // rcx

  if ( (unsigned int)dword_18024E328 > 5 && tlgKeywordOn((__int64)&dword_18024E328, 0x20000LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      v1,
      byte_180227AA6,
      0LL,
      0LL);
  WinKeyScenarioTelemetry::OnWinKeyAcknowledged();
  return 0LL;
}
