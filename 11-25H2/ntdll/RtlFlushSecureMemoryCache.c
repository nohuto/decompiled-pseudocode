/*
 * XREFs of RtlFlushSecureMemoryCache @ 0x1800E15A0
 * Callers:
 *     RtlpDecommitBlock @ 0x1800E1200 (RtlpDecommitBlock.c)
 *     RtlComputeImportTableHash @ 0x180136750 (RtlComputeImportTableHash.c)
 * Callees:
 *     RtlpCallSecureMemoryCallbacks @ 0x1800B8EAC (RtlpCallSecureMemoryCallbacks.c)
 *     ZwQueryVirtualMemory @ 0x180163680 (ZwQueryVirtualMemory.c)
 */

BOOLEAN __cdecl RtlFlushSecureMemoryCache(PVOID MemoryCache, SIZE_T MemoryLength)
{
  __int128 MemoryInformation; // [rsp+30h] [rbp-38h] BYREF
  __int128 v5; // [rsp+40h] [rbp-28h]
  __int128 v6; // [rsp+50h] [rbp-18h]

  MemoryInformation = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  if ( RtlpSecMemListHead == &RtlpSecMemListHead )
    return 0;
  if ( !MemoryLength )
  {
    if ( ZwQueryVirtualMemory(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           MemoryCache,
           MemoryRegionInformation,
           &MemoryInformation,
           0x30uLL,
           0LL) < 0
      || HIDWORD(MemoryInformation) == 0x10000 )
    {
      return 0;
    }
    MemoryLength = v5;
  }
  return RtlpCallSecureMemoryCallbacks((__int64)MemoryCache, MemoryLength);
}
