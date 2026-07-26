/*
 * XREFs of DestroyEventEntry @ 0x1400E5CEC
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x1400E5EA0 (InsertEventEntryInLookUpTable.c)
 *     FlushEventEntryList @ 0x14014EDC4 (FlushEventEntryList.c)
 * Callees:
 *     <none>
 */

void __fastcall DestroyEventEntry(__int64 a1)
{
  if ( a1 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0);
}
