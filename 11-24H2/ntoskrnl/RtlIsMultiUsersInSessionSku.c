/*
 * XREFs of RtlIsMultiUsersInSessionSku @ 0x140780D70
 * Callers:
 *     GetGlobalizationUserModelType @ 0x1406592CC (GetGlobalizationUserModelType.c)
 * Callees:
 *     <none>
 */

BOOLEAN RtlIsMultiUsersInSessionSku(void)
{
  return (MEMORY[0xFFFFF780000002F0] & 0x200) != 0;
}
