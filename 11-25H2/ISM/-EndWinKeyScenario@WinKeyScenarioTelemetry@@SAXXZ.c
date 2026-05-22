/*
 * XREFs of ?EndWinKeyScenario@WinKeyScenarioTelemetry@@SAXXZ @ 0x180024104
 * Callers:
 *     ?UpdateForegroundTarget@DWMInputRouter@@UEAAX_KIII@Z @ 0x180023AA0 (-UpdateForegroundTarget@DWMInputRouter@@UEAAX_KIII@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18000F858 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?UpdateWinKeyScenarioStatusAndLogLatency@WinKeyScenarioTelemetry@@CA_NXZ @ 0x180024850 (-UpdateWinKeyScenarioStatusAndLogLatency@WinKeyScenarioTelemetry@@CA_NXZ.c)
 *     _tlgKeywordOn @ 0x180031480 (_tlgKeywordOn.c)
 */

void WinKeyScenarioTelemetry::EndWinKeyScenario(void)
{
  __int64 v0; // r8
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  DWORD LowPart; // [rsp+40h] [rbp+8h] BYREF
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  if ( WinKeyScenarioTelemetry::UpdateWinKeyScenarioStatusAndLogLatency() )
  {
    if ( (unsigned int)dword_1802442B8 > 5 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1802442B8, 0x400000000000LL, v0) )
      {
        LowPart = WinKeyScenarioTelemetry::s_startTime.LowPart;
        v5 = 0x2000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
          v1,
          (__int64)&unk_18020BBB5,
          v2,
          v3,
          (__int64)&v5,
          (__int64)&LowPart);
      }
    }
    WinKeyScenarioTelemetry::SetWinKeyScenarioStarted(0);
  }
}
