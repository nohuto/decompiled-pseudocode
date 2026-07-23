/*
 * XREFs of CcFreeSharedCacheMapIgnoreNull @ 0x1402E6020
 * Callers:
 *     CcDeleteSharedCacheMap @ 0x1402E5B98 (CcDeleteSharedCacheMap.c)
 *     CcInitializeCacheMapInternal @ 0x1404527B0 (CcInitializeCacheMapInternal.c)
 * Callees:
 *     ExFreeToLookasideListEx @ 0x1402E6050 (ExFreeToLookasideListEx.c)
 */

void __fastcall CcFreeSharedCacheMapIgnoreNull(PVOID Entry)
{
  if ( Entry )
    ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)&CcSharedCacheMapLookasideList, Entry);
}
