/*
 * XREFs of DestroyEventEntry @ 0x1404A8FA4
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x1403D0F14 (InsertEventEntryInLookUpTable.c)
 *     FlushEventEntryList @ 0x140A4B18C (FlushEventEntryList.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall DestroyEventEntry(__int64 a1)
{
  if ( a1 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0);
}
