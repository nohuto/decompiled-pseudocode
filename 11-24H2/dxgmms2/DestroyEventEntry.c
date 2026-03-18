/*
 * XREFs of DestroyEventEntry @ 0x1400552AC
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x140055330 (InsertEventEntryInLookUpTable.c)
 *     FlushEventEntryList @ 0x1400910D8 (FlushEventEntryList.c)
 * Callees:
 *     <none>
 */

void __fastcall DestroyEventEntry(__int64 a1)
{
  if ( a1 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0);
}
