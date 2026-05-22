/*
 * XREFs of ?UpdateWinKeyScenarioStatusAndLogLatency@WinKeyScenarioTelemetry@@CA_NXZ @ 0x180024850
 * Callers:
 *     ?EndWinKeyScenario@WinKeyScenarioTelemetry@@SAXXZ @ 0x180024104 (-EndWinKeyScenario@WinKeyScenarioTelemetry@@SAXXZ.c)
 *     ?OnForegroundChange@WinKeyScenarioTelemetry@@SAX_K@Z @ 0x180109BC0 (-OnForegroundChange@WinKeyScenarioTelemetry@@SAX_K@Z.c)
 *     ?OnWinKeyAcknowledged@WinKeyScenarioTelemetry@@SAXXZ @ 0x180109CA4 (-OnWinKeyAcknowledged@WinKeyScenarioTelemetry@@SAXXZ.c)
 *     ?OnWinKeyDetected@WinKeyScenarioTelemetry@@SAXXZ @ 0x180109D14 (-OnWinKeyDetected@WinKeyScenarioTelemetry@@SAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x180005810 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     _tlgKeywordOn @ 0x180031480 (_tlgKeywordOn.c)
 *     ?GetTimeElapsedSec@WinKeyScenarioTelemetry@@CA_KXZ @ 0x180109B48 (-GetTimeElapsedSec@WinKeyScenarioTelemetry@@CA_KXZ.c)
 *     ?SetWinKeyScenarioStarted@WinKeyScenarioTelemetry@@CAX_N@Z @ 0x180109D84 (-SetWinKeyScenarioStarted@WinKeyScenarioTelemetry@@CAX_N@Z.c)
 */

bool WinKeyScenarioTelemetry::UpdateWinKeyScenarioStatusAndLogLatency(void)
{
  unsigned __int64 TimeElapsedSec; // r8
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  DWORD LowPart; // [rsp+50h] [rbp+8h] BYREF
  __int64 v6; // [rsp+58h] [rbp+10h] BYREF
  __int64 v7; // [rsp+60h] [rbp+18h] BYREF
  __int64 v8; // [rsp+68h] [rbp+20h] BYREF

  if ( WinKeyScenarioTelemetry::s_winKeyScenarioStarted )
  {
    TimeElapsedSec = WinKeyScenarioTelemetry::GetTimeElapsedSec();
    if ( TimeElapsedSec >= 5 )
    {
      if ( (unsigned int)dword_1802442B8 > 5
        && (unsigned __int8)tlgKeywordOn(&dword_1802442B8, 0x400000000000LL, TimeElapsedSec) )
      {
        LowPart = WinKeyScenarioTelemetry::s_startTime.LowPart;
        v6 = 5LL;
        v7 = v3;
        v8 = 0x2000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
          v2,
          (__int64)&unk_18020BC57,
          v3,
          v4,
          (__int64)&v8,
          (__int64)&LowPart,
          (__int64)&v7,
          (__int64)&v6);
      }
      WinKeyScenarioTelemetry::SetWinKeyScenarioStarted(0);
    }
  }
  return WinKeyScenarioTelemetry::s_winKeyScenarioStarted;
}
