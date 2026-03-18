/*
 * XREFs of PopPowerRequestStatsNotifyScenarioStateChange @ 0x14044DBC4
 * Callers:
 *     PopPowerRequestNotifyMobileHotspotChanged @ 0x140749D6C (PopPowerRequestNotifyMobileHotspotChanged.c)
 *     PopWnfAudioCallback @ 0x140A3B7C0 (PopWnfAudioCallback.c)
 * Callees:
 *     SleepstudyHelperBlockerActiveDereference @ 0x14044DC00 (SleepstudyHelperBlockerActiveDereference.c)
 *     SleepstudyHelperBlockerActiveReference @ 0x14044DCA0 (SleepstudyHelperBlockerActiveReference.c)
 */

__int64 __fastcall PopPowerRequestStatsNotifyScenarioStateChange(int a1, char a2)
{
  __int64 result; // rax
  KSPIN_LOCK *v3; // rcx

  result = a1;
  v3 = (KSPIN_LOCK *)PopPowerRequestStatsScenarioBlockers[a1];
  if ( v3 )
  {
    if ( a2 )
      return SleepstudyHelperBlockerActiveReference(v3);
    else
      return SleepstudyHelperBlockerActiveDereference(v3);
  }
  return result;
}
