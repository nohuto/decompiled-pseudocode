/*
 * XREFs of CmpBounceContextCleanup @ 0x14097A1D0
 * Callers:
 *     NtQueryMultipleValueKey @ 0x1409790C0 (NtQueryMultipleValueKey.c)
 *     NtEnumerateKey @ 0x140AE3CA0 (NtEnumerateKey.c)
 * Callees:
 *     ExFreeToLookasideListEx @ 0x1402CD350 (ExFreeToLookasideListEx.c)
 *     CmSiFreeMemory @ 0x14046B8D0 (CmSiFreeMemory.c)
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
