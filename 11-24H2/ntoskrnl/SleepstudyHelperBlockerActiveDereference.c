/*
 * XREFs of SleepstudyHelperBlockerActiveDereference @ 0x14044DC00
 * Callers:
 *     PopPowerRequestStatsNotifyScenarioStateChange @ 0x14044DBC4 (PopPowerRequestStatsNotifyScenarioStateChange.c)
 *     PopSwitchUpdateUserShutdownScenarioState @ 0x140754120 (PopSwitchUpdateUserShutdownScenarioState.c)
 *     PopUserShutdownCalloutDelayTimerWorker @ 0x140754280 (PopUserShutdownCalloutDelayTimerWorker.c)
 *     PopUserShutdownScenarioNotifyWinlogonCallout @ 0x1407542C0 (PopUserShutdownScenarioNotifyWinlogonCallout.c)
 *     PopPowerRequestStatsSetActive @ 0x140A667D4 (PopPowerRequestStatsSetActive.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     SshpBlockerActiveDereference @ 0x14044DC58 (SshpBlockerActiveDereference.c)
 */

__int64 __fastcall SleepstudyHelperBlockerActiveDereference(PKSPIN_LOCK SpinLock)
{
  KIRQL v2; // bl
  unsigned int active; // esi

  if ( SpinLock )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(SpinLock);
    active = SshpBlockerActiveDereference(SpinLock, 1LL);
    KeReleaseSpinLock(SpinLock, v2);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return active;
}
