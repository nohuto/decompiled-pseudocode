/*
 * XREFs of DestroyEventEntry @ 0x140226F00
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x14003DBFC (InsertEventEntryInLookUpTable.c)
 *     FlushEventEntryList @ 0x1403D0008 (FlushEventEntryList.c)
 * Callees:
 *     <none>
 */

void __fastcall DestroyEventEntry(__int64 a1)
{
  if ( a1 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0);
}
