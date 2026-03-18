/*
 * XREFs of MiFlushCachedIoPfnRange @ 0x14066A2C4
 * Callers:
 *     MiReferenceIoPages @ 0x1402AD138 (MiReferenceIoPages.c)
 *     MiFlushStaleCacheMap @ 0x14066A350 (MiFlushStaleCacheMap.c)
 *     MiIoPfnTreeExclusionCompatible @ 0x14066A53C (MiIoPfnTreeExclusionCompatible.c)
 * Callees:
 *     KeInvalidateAllCaches @ 0x14026F5F0 (KeInvalidateAllCaches.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
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
  ++dword_140E36FF8;
  memset_0(v3, 0, 0xC8uLL);
  ++dword_140E2D914;
  KeInvalidateAllCaches();
  return 1LL;
}
