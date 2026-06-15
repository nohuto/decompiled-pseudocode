/*
 * XREFs of ?PreADGTermination@CAudioSrv@@EEAAXXZ @ 0x180072D50
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x180165600 (MicrosoftTelemetryAssertTriggeredArgs.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioSrv::PreADGTermination(CAudioSrv *this)
{
  EnterCriticalSection(&g_csVadList);
  if ( qword_1801DA748 )
    MicrosoftTelemetryAssertTriggeredArgs("AudioSrv.dll", qword_1801DA748, 0LL, 1LL);
  LeaveCriticalSection(&g_csVadList);
}
