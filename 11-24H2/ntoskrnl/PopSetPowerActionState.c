/*
 * XREFs of PopSetPowerActionState @ 0x1403CB224
 * Callers:
 *     PopExecutePowerAction @ 0x140753574 (PopExecutePowerAction.c)
 *     PopPolicyWorkerAction @ 0x140A87A20 (PopPolicyWorkerAction.c)
 *     PopPolicyWorkerActionPromote @ 0x140AA7360 (PopPolicyWorkerActionPromote.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B667DC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopDeepSleepSetDisengageReason @ 0x1403CB2E4 (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x1403CB4D8 (PopDeepSleepClearDisengageReason.c)
 */

__int64 __fastcall PopSetPowerActionState(char a1)
{
  __int64 result; // rax

  if ( byte_140F0B101 != a1 )
  {
    byte_140F0B101 = a1;
    if ( a1 )
      return PopDeepSleepSetDisengageReason(5LL);
    else
      return PopDeepSleepClearDisengageReason(5LL);
  }
  return result;
}
