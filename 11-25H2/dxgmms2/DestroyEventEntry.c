/*
 * XREFs of DestroyEventEntry @ 0x1400556E4
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x140055768 (InsertEventEntryInLookUpTable.c)
 *     FlushEventEntryList @ 0x1400910E0 (FlushEventEntryList.c)
 * Callees:
 *     <none>
 */

void __fastcall DestroyEventEntry(__int64 a1)
{
  if ( a1 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0);
}
