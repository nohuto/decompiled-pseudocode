/*
 * XREFs of RtlIsMultiUsersInSessionSku @ 0x140771BF0
 * Callers:
 *     GetGlobalizationUserModelType @ 0x14064EC24 (GetGlobalizationUserModelType.c)
 * Callees:
 *     <none>
 */

BOOLEAN RtlIsMultiUsersInSessionSku(void)
{
  return (MEMORY[0xFFFFF780000002F0] & 0x200) != 0;
}
