/*
 * XREFs of DestroyEventEntry @ 0x140157988
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x1400917B8 (InsertEventEntryInLookUpTable.c)
 *     FlushEventEntryList @ 0x1402C4430 (FlushEventEntryList.c)
 * Callees:
 *     <none>
 */

void __fastcall DestroyEventEntry(__int64 a1)
{
  if ( a1 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0);
}
