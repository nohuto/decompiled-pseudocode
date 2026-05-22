/*
 * XREFs of ?StartWinKeyScenario@WinKeyScenarioTelemetry@@SAXPEAI@Z @ 0x180109DB4
 * Callers:
 *     ?DetectAndProcessHotKey@HotKeyProcessor@@QEAAJI_N_K1PEAEIIU_GUID@@AEAUHotKeyDetectionResult@@@Z @ 0x1801C3338 (-DetectAndProcessHotKey@HotKeyProcessor@@QEAAJI_N_K1PEAEIIU_GUID@@AEAUHotKeyDetectionResult@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18000F858 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     _tlgKeywordOn @ 0x180031480 (_tlgKeywordOn.c)
 *     ?SetWinKeyScenarioStarted@WinKeyScenarioTelemetry@@CAX_N@Z @ 0x180109D84 (-SetWinKeyScenarioStarted@WinKeyScenarioTelemetry@@CAX_N@Z.c)
 */

void __fastcall WinKeyScenarioTelemetry::StartWinKeyScenario(unsigned int *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  DWORD LowPart; // [rsp+40h] [rbp+8h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  WinKeyScenarioTelemetry::SetWinKeyScenarioStarted(1);
  *a1 = WinKeyScenarioTelemetry::s_startTime.LowPart;
  if ( (unsigned int)dword_1802442B8 > 5 && tlgKeywordOn((__int64)&dword_1802442B8, 0x400000000000LL) )
  {
    LowPart = WinKeyScenarioTelemetry::s_startTime.LowPart;
    v6 = 0x2000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      v2,
      (__int64)&unk_18020BCD5,
      v3,
      v4,
      (__int64)&v6,
      (__int64)&LowPart);
  }
}
