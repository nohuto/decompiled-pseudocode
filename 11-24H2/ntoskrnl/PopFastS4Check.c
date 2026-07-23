/*
 * XREFs of PopFastS4Check @ 0x140A93EF4
 * Callers:
 *     PopActionRetrieveInitialState @ 0x1404A90C8 (PopActionRetrieveInitialState.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B6891C (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

bool PopFastS4Check()
{
  return dword_140F0B9AC == 4 && !byte_140F0B39C && byte_140F0BA69 == 1 && byte_140F0BA60 == 1 && byte_140F0BA6E == 2;
}
