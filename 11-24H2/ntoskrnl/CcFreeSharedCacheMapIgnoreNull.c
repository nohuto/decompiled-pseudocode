/*
 * XREFs of CcFreeSharedCacheMapIgnoreNull @ 0x1402CD320
 * Callers:
 *     CcDeleteSharedCacheMap @ 0x1402CCE98 (CcDeleteSharedCacheMap.c)
 *     CcInitializeCacheMapInternal @ 0x14045D6F0 (CcInitializeCacheMapInternal.c)
 * Callees:
 *     ExFreeToLookasideListEx @ 0x1402CD350 (ExFreeToLookasideListEx.c)
 */

void __fastcall CcFreeSharedCacheMapIgnoreNull(PVOID Entry)
{
  if ( Entry )
    ExFreeToLookasideListEx(&CcSharedCacheMapLookasideList, Entry);
}
