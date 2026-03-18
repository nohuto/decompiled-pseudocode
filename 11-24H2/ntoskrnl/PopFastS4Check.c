/*
 * XREFs of PopFastS4Check @ 0x140A976C4
 * Callers:
 *     PopActionRetrieveInitialState @ 0x1404AE7B8 (PopActionRetrieveInitialState.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B667DC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

bool PopFastS4Check()
{
  return dword_140F0B12C == 4 && !byte_140F0BA5C && byte_140F0B1E9 == 1 && byte_140F0B1E0 == 1 && byte_140F0B1EE == 2;
}
