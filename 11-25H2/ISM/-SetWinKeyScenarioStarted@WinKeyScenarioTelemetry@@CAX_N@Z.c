/*
 * XREFs of ?SetWinKeyScenarioStarted@WinKeyScenarioTelemetry@@CAX_N@Z @ 0x180109D84
 * Callers:
 *     ?EndWinKeyScenario@WinKeyScenarioTelemetry@@SAXXZ @ 0x180024104 (-EndWinKeyScenario@WinKeyScenarioTelemetry@@SAXXZ.c)
 *     ?UpdateWinKeyScenarioStatusAndLogLatency@WinKeyScenarioTelemetry@@CA_NXZ @ 0x180024850 (-UpdateWinKeyScenarioStatusAndLogLatency@WinKeyScenarioTelemetry@@CA_NXZ.c)
 *     ?StartWinKeyScenario@WinKeyScenarioTelemetry@@SAXPEAI@Z @ 0x180109DB4 (-StartWinKeyScenario@WinKeyScenarioTelemetry@@SAXPEAI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall WinKeyScenarioTelemetry::SetWinKeyScenarioStarted(bool a1)
{
  WinKeyScenarioTelemetry::s_winKeyScenarioStarted = a1;
  if ( a1 )
    QueryPerformanceCounter(&WinKeyScenarioTelemetry::s_startTime);
}
