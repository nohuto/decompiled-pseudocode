/*
 * XREFs of ?EnumObjects@CPinnedList@@W7EAAJPEAPEAUIEnumFullIDList@@@Z @ 0x180688040
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CPinnedList::EnumObjects(__int64 a1, struct IEnumFullIDList **a2)
{
  return CPinnedList::EnumObjects((CPinnedList *)(a1 - 8), a2);
}
