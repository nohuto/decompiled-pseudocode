/*
 * XREFs of CcFreePrivateCacheMapIgnoreNull @ 0x1402CD2F8
 * Callers:
 *     CcInitializeCacheMapInternal @ 0x14045D6F0 (CcInitializeCacheMapInternal.c)
 * Callees:
 *     ExFreeToLookasideListEx @ 0x1402CD350 (ExFreeToLookasideListEx.c)
 */

void __fastcall CcFreePrivateCacheMapIgnoreNull(PVOID Entry)
{
  if ( Entry )
    ExFreeToLookasideListEx(&CcPrivateCacheMapLookasideList, Entry);
}
