/*
 * XREFs of PopSetPowerActionState @ 0x1402B8248
 * Callers:
 *     PopExecutePowerAction @ 0x140751894 (PopExecutePowerAction.c)
 *     PopPolicyWorkerAction @ 0x140A83F10 (PopPolicyWorkerAction.c)
 *     PopPolicyWorkerActionPromote @ 0x140AA2460 (PopPolicyWorkerActionPromote.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B6891C (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopDeepSleepSetDisengageReason @ 0x1402B9DFC (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x1402B9FF0 (PopDeepSleepClearDisengageReason.c)
 */

__int64 __fastcall PopSetPowerActionState(char a1)
{
  __int64 result; // rax

  if ( byte_140F0B981 != a1 )
  {
    byte_140F0B981 = a1;
    if ( a1 )
      return PopDeepSleepSetDisengageReason(5LL);
    else
      return PopDeepSleepClearDisengageReason(5LL);
  }
  return result;
}
