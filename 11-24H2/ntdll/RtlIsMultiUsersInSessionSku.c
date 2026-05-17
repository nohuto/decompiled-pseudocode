/*
 * XREFs of RtlIsMultiUsersInSessionSku @ 0x1800F1B70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool RtlIsMultiUsersInSessionSku()
{
  return (MEMORY[0x7FFE02F0] & 0x200) != 0;
}
