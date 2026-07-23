/*
 * XREFs of CcFreePrivateCacheMapIgnoreNull @ 0x1402E5FF8
 * Callers:
 *     CcInitializeCacheMapInternal @ 0x1404527B0 (CcInitializeCacheMapInternal.c)
 * Callees:
 *     ExFreeToLookasideListEx @ 0x1402E6050 (ExFreeToLookasideListEx.c)
 */

void __fastcall CcFreePrivateCacheMapIgnoreNull(PVOID Entry)
{
  if ( Entry )
    ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)&CcPrivateCacheMapLookasideList, Entry);
}
