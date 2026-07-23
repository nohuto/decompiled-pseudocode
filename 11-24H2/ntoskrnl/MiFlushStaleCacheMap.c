/*
 * XREFs of MiFlushStaleCacheMap @ 0x140676F80
 * Callers:
 *     MiDeleteStaleCacheMaps @ 0x140676A50 (MiDeleteStaleCacheMaps.c)
 * Callees:
 *     MiFlushCachedIoPfnRange @ 0x140676EF4 (MiFlushCachedIoPfnRange.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiFlushStaleCacheMap(__int64 a1)
{
  __int64 v2; // rbx
  _QWORD *v3; // r9
  int v4; // r8d
  unsigned int i; // edi
  _BYTE v7[48]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v8[128]; // [rsp+50h] [rbp-98h] BYREF

  memset_0(v7, 0, 0xB0uLL);
  v2 = *(_QWORD *)(a1 + 24);
  v3 = v8;
  v4 = 0;
  for ( i = 0; i < 0x200; ++i )
  {
    if ( ((*(_DWORD *)(a1
                     + 4
                     * ((unsigned __int64)(2
                                         * (((unsigned int)v2 & ((unsigned int)(1LL << ((unsigned __int8)dword_140E2DC78
                                                                                      - 12))
                                                               - 1))
                                          - *(_DWORD *)(a1 + 24))) >> 5)
                     + 44) >> ((2 * ((v2 & ((1LL << ((unsigned __int8)dword_140E2DC78 - 12)) - 1)) - *(_BYTE *)(a1 + 24))) & 0x1F)) & 3) == 1 )
    {
      *v3 = v2;
      ++v4;
      ++v3;
      if ( v4 == 16 )
      {
        if ( (unsigned int)MiFlushCachedIoPfnRange((__int64)v7, 16) )
          return 1LL;
        v4 = 0;
        v3 = v8;
      }
    }
    ++v2;
  }
  if ( v4 )
    return MiFlushCachedIoPfnRange((__int64)v7, v4);
  else
    return 0LL;
}
