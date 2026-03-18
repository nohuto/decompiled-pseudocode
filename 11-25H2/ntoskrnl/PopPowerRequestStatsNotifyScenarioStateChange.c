/*
 * XREFs of PopPowerRequestStatsNotifyScenarioStateChange @ 0x14044E080
 * Callers:
 *     PopPowerRequestNotifyMobileHotspotChanged @ 0x14073DCEC (PopPowerRequestNotifyMobileHotspotChanged.c)
 *     PopWnfAudioCallback @ 0x140A36A30 (PopWnfAudioCallback.c)
 * Callees:
 *     SleepstudyHelperBlockerActiveDereference @ 0x14044E0C0 (SleepstudyHelperBlockerActiveDereference.c)
 *     SleepstudyHelperBlockerActiveReference @ 0x14044E160 (SleepstudyHelperBlockerActiveReference.c)
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
