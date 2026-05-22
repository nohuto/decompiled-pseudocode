/*
 * XREFs of ?OnWinKeyAcknowledged@WinKeyScenarioTelemetry@@SAXXZ @ 0x180109CA4
 * Callers:
 *     ?OnHotKeyAcknowledged@HotKeyProcessor@@UEAAJXZ @ 0x1801C4760 (-OnHotKeyAcknowledged@HotKeyProcessor@@UEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18000F858 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?UpdateWinKeyScenarioStatusAndLogLatency@WinKeyScenarioTelemetry@@CA_NXZ @ 0x180024850 (-UpdateWinKeyScenarioStatusAndLogLatency@WinKeyScenarioTelemetry@@CA_NXZ.c)
 *     _tlgKeywordOn @ 0x180031480 (_tlgKeywordOn.c)
 */

void WinKeyScenarioTelemetry::OnWinKeyAcknowledged(void)
{
  __int64 v0; // rcx
  __int64 v1; // r8
  __int64 v2; // r9
  DWORD LowPart; // [rsp+40h] [rbp+8h] BYREF
  __int64 v4; // [rsp+48h] [rbp+10h] BYREF

  if ( WinKeyScenarioTelemetry::UpdateWinKeyScenarioStatusAndLogLatency()
    && (unsigned int)dword_1802442B8 > 5
    && tlgKeywordOn((__int64)&dword_1802442B8, 0x400000000000LL) )
  {
    LowPart = WinKeyScenarioTelemetry::s_startTime.LowPart;
    v4 = 0x2000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      v0,
      (__int64)&unk_18020BC0B,
      v1,
      v2,
      (__int64)&v4,
      (__int64)&LowPart);
  }
}
