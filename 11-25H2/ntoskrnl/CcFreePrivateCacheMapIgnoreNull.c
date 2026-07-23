/*
 * XREFs of CcFreePrivateCacheMapIgnoreNull @ 0x1403A524C
 * Callers:
 *     CcInitializeCacheMapInternal @ 0x14045E3B0 (CcInitializeCacheMapInternal.c)
 * Callees:
 *     ExFreeToLookasideListEx @ 0x1403A52A0 (ExFreeToLookasideListEx.c)
 */

void __fastcall CcFreePrivateCacheMapIgnoreNull(PVOID Entry)
{
  if ( Entry )
    ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)&CcPrivateCacheMapLookasideList, Entry);
}
