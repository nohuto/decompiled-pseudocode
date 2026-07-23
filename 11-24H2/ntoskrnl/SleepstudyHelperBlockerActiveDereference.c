/*
 * XREFs of SleepstudyHelperBlockerActiveDereference @ 0x140444B00
 * Callers:
 *     PopPowerRequestStatsNotifyScenarioStateChange @ 0x140444AC4 (PopPowerRequestStatsNotifyScenarioStateChange.c)
 *     PopSwitchUpdateUserShutdownScenarioState @ 0x140752440 (PopSwitchUpdateUserShutdownScenarioState.c)
 *     PopUserShutdownCalloutDelayTimerWorker @ 0x1407525A0 (PopUserShutdownCalloutDelayTimerWorker.c)
 *     PopUserShutdownScenarioNotifyWinlogonCallout @ 0x1407525E0 (PopUserShutdownScenarioNotifyWinlogonCallout.c)
 *     PopPowerRequestStatsSetActive @ 0x140A5F5B8 (PopPowerRequestStatsSetActive.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     SshpBlockerActiveDereference @ 0x140444B58 (SshpBlockerActiveDereference.c)
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
