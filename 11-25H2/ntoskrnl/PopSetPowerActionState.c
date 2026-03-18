/*
 * XREFs of PopSetPowerActionState @ 0x140354C84
 * Callers:
 *     PopExecutePowerAction @ 0x140747484 (PopExecutePowerAction.c)
 *     PopPolicyWorkerAction @ 0x140A82EF0 (PopPolicyWorkerAction.c)
 *     PopPolicyWorkerActionPromote @ 0x140AA25D0 (PopPolicyWorkerActionPromote.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B569AC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopDeepSleepSetDisengageReason @ 0x140354D44 (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x140354F38 (PopDeepSleepClearDisengageReason.c)
 */

__int64 __fastcall PopSetPowerActionState(char a1)
{
  __int64 result; // rax

  if ( byte_140F0AE61 != a1 )
  {
    byte_140F0AE61 = a1;
    if ( a1 )
      return PopDeepSleepSetDisengageReason(5LL);
    else
      return PopDeepSleepClearDisengageReason(5LL);
  }
  return result;
}
