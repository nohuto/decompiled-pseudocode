/*
 * XREFs of MiFlushCachedIoPfnRange @ 0x140676EF4
 * Callers:
 *     MiReferenceIoPages @ 0x140238698 (MiReferenceIoPages.c)
 *     MiFlushStaleCacheMap @ 0x140676F80 (MiFlushStaleCacheMap.c)
 *     MiIoPfnTreeExclusionCompatible @ 0x14067716C (MiIoPfnTreeExclusionCompatible.c)
 * Callees:
 *     KeInvalidateAllCaches @ 0x14039D290 (KeInvalidateAllCaches.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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
  ++dword_140E37378;
  memset_0(v3, 0, 0xC8uLL);
  ++dword_140E2DC94;
  KeInvalidateAllCaches();
  return 1LL;
}
