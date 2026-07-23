/*
 * XREFs of SleepstudyHelperBlockerActiveReference @ 0x140444BA0
 * Callers:
 *     PopPowerRequestStatsNotifyScenarioStateChange @ 0x140444AC4 (PopPowerRequestStatsNotifyScenarioStateChange.c)
 *     PopSwitchUpdateUserShutdownScenarioState @ 0x140752440 (PopSwitchUpdateUserShutdownScenarioState.c)
 *     PopUserShutdownScenarioNotifyWinlogonCallout @ 0x1407525E0 (PopUserShutdownScenarioNotifyWinlogonCallout.c)
 *     PopPowerRequestStatsSetActive @ 0x140A5F5B8 (PopPowerRequestStatsSetActive.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     SshpIterateParentBlockers @ 0x140444C1C (SshpIterateParentBlockers.c)
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
