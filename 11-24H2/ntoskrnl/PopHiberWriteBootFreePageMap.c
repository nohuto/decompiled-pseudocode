/*
 * XREFs of PopHiberWriteBootFreePageMap @ 0x140B5D55C
 * Callers:
 *     PopSaveHiberContext @ 0x140B6EC80 (PopSaveHiberContext.c)
 * Callees:
 *     RtlIntersectBitMaps @ 0x1405E8070 (RtlIntersectBitMaps.c)
 *     tcpxsum @ 0x1406B3530 (tcpxsum.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     PopWriteHiberPages @ 0x140B5EA28 (PopWriteHiberPages.c)
 */

__int64 __fastcall PopHiberWriteBootFreePageMap(__int64 a1, __int64 a2)
{
  unsigned int *v2; // rdi
  void *v5; // rsi

  *(_DWORD *)(a1 + 200) = 0;
  v2 = (unsigned int *)(a1 + 32);
  RtlIntersectBitMaps(a1 + 32, (unsigned int *)(a1 + 64));
  v5 = *(void **)(a1 + 160);
  memmove(v5, *((const void **)v2 + 1), (unsigned __int64)*v2 >> 3);
  *(_DWORD *)(a2 + 72) = *v2;
  *(_DWORD *)(a2 + 76) = tcpxsum(0, (const char *)v5, *v2 >> 3);
  return PopWriteHiberPages(
           a1,
           v5,
           (unsigned __int64)((*v2 >> 3) + 4095) >> 12,
           (unsigned int)(*(_DWORD *)(a1 + 280) + 2));
}
