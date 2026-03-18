/*
 * XREFs of MiQueryHardwareCacheInformation @ 0x140C5A134
 * Callers:
 *     MiCreatePfnDatabase @ 0x140C4EE90 (MiCreatePfnDatabase.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 MiQueryHardwareCacheInformation()
{
  struct _KPRCB *CurrentPrcb; // rax
  __int64 CacheCount; // rdx
  _CACHE_DESCRIPTOR *Cache; // rcx
  _PROCESSOR_CACHE_TYPE Type; // eax
  unsigned int SecondLevelCacheSize; // esi
  unsigned int SecondLevelCacheAssociativity; // eax
  unsigned __int64 v6; // rdi
  __int64 result; // rax
  unsigned int i; // ebx
  int v9; // [rsp+30h] [rbp-50h] BYREF
  __int128 v10; // [rsp+38h] [rbp-48h] BYREF
  __int64 v11; // [rsp+48h] [rbp-38h]
  __int128 v12; // [rsp+50h] [rbp-30h] BYREF
  __int128 v13; // [rsp+60h] [rbp-20h]
  __int64 v14; // [rsp+70h] [rbp-10h]

  v14 = 0LL;
  v9 = 0;
  v12 = 0LL;
  v11 = 0LL;
  v13 = 0LL;
  v10 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  CacheCount = CurrentPrcb->CacheCount;
  Cache = CurrentPrcb->Cache;
  if ( (_DWORD)CacheCount )
  {
    do
    {
      if ( Cache->Level == 1 )
      {
        Type = Cache->Type;
        if ( Type == CacheData || Type == CacheUnified )
          dword_140E2DB34 = Cache->Size;
      }
      ++Cache;
      --CacheCount;
    }
    while ( CacheCount );
  }
  if ( (unsigned int)dword_140E2DB34 < 0x4000 )
    dword_140E2DB34 = 0x4000;
  dword_140E2DB5C = 256;
  SecondLevelCacheSize = KeGetPcr()->SecondLevelCacheSize;
  dword_140E2DB30 = SecondLevelCacheSize;
  SecondLevelCacheAssociativity = KeGetPcr()->SecondLevelCacheAssociativity;
  if ( (_BYTE)SecondLevelCacheAssociativity )
    SecondLevelCacheSize /= SecondLevelCacheAssociativity;
  v6 = -1LL;
  result = guard_dispatch_icall_no_overrides(50LL, 24LL, &v10, &v9);
  if ( (int)result >= 0 )
  {
    for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
    {
      if ( (int)guard_dispatch_icall_no_overrides(i, 1LL, &v12, 40LL) >= 0
        && *((_QWORD *)&v12 + 1)
        && DWORD2(v13) == 1
        && *((_QWORD *)&v12 + 1) < v6 )
      {
        v6 = *((_QWORD *)&v12 + 1);
      }
      result = (unsigned __int16)KeNumberNodes;
    }
  }
  dword_140E2DBCC = SecondLevelCacheSize;
  HIDWORD(qword_140E2DBC4) = SecondLevelCacheSize >> 4;
  if ( v6 != -1LL )
  {
    result = v6 >> 21;
    dword_140E2DBC0[0] = v6 >> 30;
    LODWORD(qword_140E2DBC4) = v6 >> 21;
  }
  return result;
}
