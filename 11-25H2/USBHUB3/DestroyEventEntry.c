/*
 * XREFs of DestroyEventEntry @ 0x1400453F4
 * Callers:
 *     FlushEventEntryList @ 0x140094160 (FlushEventEntryList.c)
 * Callees:
 *     <none>
 */

void __fastcall DestroyEventEntry(__int64 a1)
{
  if ( a1 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0);
}
