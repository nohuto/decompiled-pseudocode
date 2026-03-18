/*
 * XREFs of CmpBounceContextCleanup @ 0x1409967B0
 * Callers:
 *     NtQueryMultipleValueKey @ 0x140995DD0 (NtQueryMultipleValueKey.c)
 * Callees:
 *     ExFreeToLookasideListEx @ 0x1403A52A0 (ExFreeToLookasideListEx.c)
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 */

void __fastcall CmpBounceContextCleanup(__int64 a1)
{
  void *v1; // rdx

  v1 = *(void **)(a1 + 8);
  if ( v1 && v1 != *(void **)a1 && v1 != (void *)(a1 + 17) )
  {
    if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
      ExFreeToLookasideListEx(&CmpBounceBufferLookaside, v1);
    else
      CmSiFreeMemory(*(PPRIVILEGE_SET *)(a1 + 8));
  }
}
