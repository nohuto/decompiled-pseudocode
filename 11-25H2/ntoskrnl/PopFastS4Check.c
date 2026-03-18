/*
 * XREFs of PopFastS4Check @ 0x140A93394
 * Callers:
 *     PopActionRetrieveInitialState @ 0x1404AD894 (PopActionRetrieveInitialState.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B569AC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

bool PopFastS4Check()
{
  return dword_140F0AE8C == 4 && !byte_140F0B71C && byte_140F0AF49 == 1 && byte_140F0AF40 == 1 && byte_140F0AF4E == 2;
}
