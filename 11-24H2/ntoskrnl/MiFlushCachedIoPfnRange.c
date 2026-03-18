/*
 * XREFs of MiFlushCachedIoPfnRange @ 0x140675D24
 * Callers:
 *     MiReferenceIoPages @ 0x140283108 (MiReferenceIoPages.c)
 *     MiFlushStaleCacheMap @ 0x140675DB0 (MiFlushStaleCacheMap.c)
 *     MiIoPfnTreeExclusionCompatible @ 0x140675F9C (MiIoPfnTreeExclusionCompatible.c)
 * Callees:
 *     KeInvalidateAllCaches @ 0x1403AEA80 (KeInvalidateAllCaches.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall MiFlushCachedIoPfnRange(__int64 a1, int a2)
{
  _BYTE v3[208]; // [rsp+20h] [rbp-E8h] BYREF

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 40) = a2 << 12;
  *(_WORD *)(a1 + 10) = 2;
  *(_WORD *)(a1 + 8) = 8 * (a2 + 6);
  ++dword_140E37238;
  memset_0(v3, 0, 0xC8uLL);
  ++dword_140E2DB54;
  KeInvalidateAllCaches();
  return 1LL;
}
