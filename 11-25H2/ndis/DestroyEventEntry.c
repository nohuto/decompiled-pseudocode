/*
 * XREFs of DestroyEventEntry @ 0x1400ECC1C
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x1400ECDD0 (InsertEventEntryInLookUpTable.c)
 *     FlushEventEntryList @ 0x140159A94 (FlushEventEntryList.c)
 * Callees:
 *     <none>
 */

void __fastcall DestroyEventEntry(__int64 a1)
{
  if ( a1 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0);
}
