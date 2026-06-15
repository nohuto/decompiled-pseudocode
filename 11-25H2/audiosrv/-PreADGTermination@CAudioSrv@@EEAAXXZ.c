/*
 * XREFs of ?PreADGTermination@CAudioSrv@@EEAAXXZ @ 0x180085AD0
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x18015C850 (MicrosoftTelemetryAssertTriggeredArgs.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioSrv::PreADGTermination(CAudioSrv *this)
{
  EnterCriticalSection(&g_csVadList);
  if ( qword_1801CE710 )
    MicrosoftTelemetryAssertTriggeredArgs("AudioSrv.dll", qword_1801CE710, 0LL, 1LL);
  LeaveCriticalSection(&g_csVadList);
}
