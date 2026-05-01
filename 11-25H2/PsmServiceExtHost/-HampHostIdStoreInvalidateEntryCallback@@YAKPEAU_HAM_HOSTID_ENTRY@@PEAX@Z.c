/*
 * XREFs of ?HampHostIdStoreInvalidateEntryCallback@@YAKPEAU_HAM_HOSTID_ENTRY@@PEAX@Z @ 0x18005B590
 * Callers:
 *     <none>
 * Callees:
 *     ?HampHostIdStoreInvalidateEntry@@YAXPEAU_HAM_HOSTID_ENTRY@@@Z @ 0x18005B658 (-HampHostIdStoreInvalidateEntry@@YAXPEAU_HAM_HOSTID_ENTRY@@@Z.c)
 */

__int64 __fastcall HampHostIdStoreInvalidateEntryCallback(struct _HAM_HOSTID_ENTRY *a1, void *a2)
{
  HampHostIdStoreInvalidateEntry(a1);
  return 1LL;
}
