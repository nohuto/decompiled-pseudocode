/*
 * XREFs of RtlFlushSecureMemoryCache @ 0x1800E44E0
 * Callers:
 *     RtlpDecommitBlock @ 0x1800E4140 (RtlpDecommitBlock.c)
 *     RtlComputeImportTableHash @ 0x180134EA0 (RtlComputeImportTableHash.c)
 * Callees:
 *     RtlpCallSecureMemoryCallbacks @ 0x18008FB2C (RtlpCallSecureMemoryCallbacks.c)
 *     ZwQueryVirtualMemory @ 0x1801620F0 (ZwQueryVirtualMemory.c)
 */

char __fastcall RtlFlushSecureMemoryCache(__int64 a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  __int128 v5; // [rsp+30h] [rbp-38h] BYREF
  __int128 v6; // [rsp+40h] [rbp-28h]
  __int128 v7; // [rsp+50h] [rbp-18h]

  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  if ( RtlpSecMemListHead == (_UNKNOWN *)&RtlpSecMemListHead )
    return 0;
  if ( !a2 )
  {
    if ( (int)ZwQueryVirtualMemory(-1LL, a1, 3LL, &v5, 48LL, 0LL) < 0 || HIDWORD(v5) == 0x10000 )
      return 0;
    a2 = (volatile signed __int32 **)v6;
  }
  return RtlpCallSecureMemoryCallbacks(a1, a2, a3);
}
