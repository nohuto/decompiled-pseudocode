/*
 * XREFs of ?SetWinKeyScenarioStarted@WinKeyScenarioTelemetry@@CAX_N@Z @ 0x18010BC94
 * Callers:
 *     ?EndWinKeyScenario@WinKeyScenarioTelemetry@@SAXXZ @ 0x1800246D4 (-EndWinKeyScenario@WinKeyScenarioTelemetry@@SAXXZ.c)
 *     ?UpdateWinKeyScenarioStatusAndLogLatency@WinKeyScenarioTelemetry@@CA_NXZ @ 0x180024E10 (-UpdateWinKeyScenarioStatusAndLogLatency@WinKeyScenarioTelemetry@@CA_NXZ.c)
 *     ?StartWinKeyScenario@WinKeyScenarioTelemetry@@SAXPEAI@Z @ 0x18010BCC4 (-StartWinKeyScenario@WinKeyScenarioTelemetry@@SAXPEAI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall WinKeyScenarioTelemetry::SetWinKeyScenarioStarted(bool a1)
{
  WinKeyScenarioTelemetry::s_winKeyScenarioStarted = a1;
  if ( a1 )
    QueryPerformanceCounter(&WinKeyScenarioTelemetry::s_startTime);
}
