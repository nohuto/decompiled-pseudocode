/*
 * XREFs of DestroyEventEntry @ 0x140097224
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x140059E7C (InsertEventEntryInLookUpTable.c)
 *     FlushEventEntryList @ 0x1402823A4 (FlushEventEntryList.c)
 * Callees:
 *     <none>
 */

void __fastcall DestroyEventEntry(__int64 a1)
{
  if ( a1 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0);
}
