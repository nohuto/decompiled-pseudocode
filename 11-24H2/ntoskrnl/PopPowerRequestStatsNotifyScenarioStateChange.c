/*
 * XREFs of PopPowerRequestStatsNotifyScenarioStateChange @ 0x140444AC4
 * Callers:
 *     PopPowerRequestNotifyMobileHotspotChanged @ 0x14074809C (PopPowerRequestNotifyMobileHotspotChanged.c)
 *     PopWnfAudioCallback @ 0x140A30FA0 (PopWnfAudioCallback.c)
 * Callees:
 *     SleepstudyHelperBlockerActiveDereference @ 0x140444B00 (SleepstudyHelperBlockerActiveDereference.c)
 *     SleepstudyHelperBlockerActiveReference @ 0x140444BA0 (SleepstudyHelperBlockerActiveReference.c)
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
