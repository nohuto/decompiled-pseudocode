/*
 * XREFs of SleepstudyHelperBlockerActiveDereference @ 0x14044E0C0
 * Callers:
 *     PopPowerRequestStatsNotifyScenarioStateChange @ 0x14044E080 (PopPowerRequestStatsNotifyScenarioStateChange.c)
 *     PopSwitchUpdateUserShutdownScenarioState @ 0x140748030 (PopSwitchUpdateUserShutdownScenarioState.c)
 *     PopUserShutdownCalloutDelayTimerWorker @ 0x1407481A0 (PopUserShutdownCalloutDelayTimerWorker.c)
 *     PopUserShutdownScenarioNotifyWinlogonCallout @ 0x1407481E8 (PopUserShutdownScenarioNotifyWinlogonCallout.c)
 *     PopPowerRequestStatsSetActive @ 0x140A63E4C (PopPowerRequestStatsSetActive.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     SshpBlockerActiveDereference @ 0x14044E118 (SshpBlockerActiveDereference.c)
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
