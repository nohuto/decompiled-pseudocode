/*
 * XREFs of RtlIsMultiUsersInSessionSku @ 0x140780E40
 * Callers:
 *     GetGlobalizationUserModelType @ 0x14065ABAC (GetGlobalizationUserModelType.c)
 * Callees:
 *     <none>
 */

bool RtlIsMultiUsersInSessionSku()
{
  return (MEMORY[0xFFFFF780000002F0] & 0x200) != 0;
}
