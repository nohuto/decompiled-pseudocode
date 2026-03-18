/*
 * XREFs of PopUserShutdownScenarioInitialize @ 0x140C1DBAC
 * Callers:
 *     PoInitSystem @ 0x140C50674 (PoInitSystem.c)
 * Callees:
 *     Feature_RsUserModeShutdown__private_IsEnabledDeviceUsageNoInline @ 0x1405CF098 (Feature_RsUserModeShutdown__private_IsEnabledDeviceUsageNoInline.c)
 *     PopInitializeTimer @ 0x14073D378 (PopInitializeTimer.c)
 *     PdcTaskClientRegister @ 0x14077EBDC (PdcTaskClientRegister.c)
 *     PopUserShutdownInitializeSleepstudyDiagnostics @ 0x140C1DA64 (PopUserShutdownInitializeSleepstudyDiagnostics.c)
 */

__int64 PopUserShutdownScenarioInitialize()
{
  if ( (int)PdcTaskClientRegister(120LL, &PopUserShutdownTaskClient) < 0 )
    PopUserShutdownTaskClient = 0LL;
  if ( (unsigned int)Feature_RsUserModeShutdown__private_IsEnabledDeviceUsageNoInline() )
  {
    PopInitializeTimer(
      (__int64)&PopUserShutdownCalloutDelayTimer,
      (__int64)PopUserShutdownCalloutDelayTimerCallback,
      0LL,
      (__int64)PopUserShutdownCalloutDelayTimerWorker,
      0LL);
    PopUserShutdownInitializeSleepstudyDiagnostics();
  }
  return 0LL;
}
