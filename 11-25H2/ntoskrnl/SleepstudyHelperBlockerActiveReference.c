/*
 * XREFs of SleepstudyHelperBlockerActiveReference @ 0x14044E160
 * Callers:
 *     PopPowerRequestStatsNotifyScenarioStateChange @ 0x14044E080 (PopPowerRequestStatsNotifyScenarioStateChange.c)
 *     PopSwitchUpdateUserShutdownScenarioState @ 0x140748030 (PopSwitchUpdateUserShutdownScenarioState.c)
 *     PopUserShutdownScenarioNotifyWinlogonCallout @ 0x1407481E8 (PopUserShutdownScenarioNotifyWinlogonCallout.c)
 *     PopPowerRequestStatsSetActive @ 0x140A63E4C (PopPowerRequestStatsSetActive.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     SshpIterateParentBlockers @ 0x14044E1DC (SshpIterateParentBlockers.c)
 */

__int64 __fastcall SleepstudyHelperBlockerActiveReference(PKSPIN_LOCK SpinLock)
{
  unsigned int v1; // ebx
  KIRQL v3; // si

  v1 = 0;
  if ( SpinLock )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(SpinLock);
    if ( *((_DWORD *)SpinLock + 5) == 0x7FFFFFFF )
      v1 = -1073741675;
    else
      SshpIterateParentBlockers(SpinLock);
    KeReleaseSpinLock(SpinLock, v3);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
