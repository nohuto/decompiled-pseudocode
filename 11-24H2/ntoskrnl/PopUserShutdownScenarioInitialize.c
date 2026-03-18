/*
 * XREFs of PopUserShutdownScenarioInitialize @ 0x140C2ECB0
 * Callers:
 *     PoInitSystem @ 0x140C61990 (PoInitSystem.c)
 * Callees:
 *     PopInitializeTimer @ 0x140749388 (PopInitializeTimer.c)
 *     PdcTaskClientRegister @ 0x14078DE9C (PdcTaskClientRegister.c)
 *     PopUserShutdownInitializeSleepstudyDiagnostics @ 0x140C2EB68 (PopUserShutdownInitializeSleepstudyDiagnostics.c)
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
