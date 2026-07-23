/*
 * XREFs of PopUserShutdownScenarioInitialize @ 0x140C30DD0
 * Callers:
 *     PoInitSystem @ 0x140C63AE4 (PoInitSystem.c)
 * Callees:
 *     PopInitializeTimer @ 0x1407476B8 (PopInitializeTimer.c)
 *     PdcTaskClientRegister @ 0x14078DDCC (PdcTaskClientRegister.c)
 *     PopUserShutdownInitializeSleepstudyDiagnostics @ 0x140C30C88 (PopUserShutdownInitializeSleepstudyDiagnostics.c)
 */

__int64 PopUserShutdownScenarioInitialize()
{
  if ( (int)PdcTaskClientRegister(120LL, &PopUserShutdownTaskClient) < 0 )
    PopUserShutdownTaskClient = 0LL;
  PopInitializeTimer(
    (__int64)&PopUserShutdownCalloutDelayTimer,
    (__int64)PopUserShutdownCalloutDelayTimerCallback,
    0LL,
    (__int64)PopUserShutdownCalloutDelayTimerWorker,
    0LL);
  PopUserShutdownInitializeSleepstudyDiagnostics();
  return 0LL;
}
