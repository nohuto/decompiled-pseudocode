/*
 * XREFs of DestroyEventEntry @ 0x1404A8650
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x1403BB444 (InsertEventEntryInLookUpTable.c)
 *     FlushEventEntryList @ 0x140A487CC (FlushEventEntryList.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall DestroyEventEntry(__int64 a1)
{
  if ( a1 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0);
}
