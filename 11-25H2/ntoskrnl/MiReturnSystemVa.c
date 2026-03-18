/*
 * XREFs of MiReturnSystemVa @ 0x1402C0B88
 * Callers:
 *     MiRemoveFromSystemSpace @ 0x1402A8BCC (MiRemoveFromSystemSpace.c)
 *     MiReleasePteMappings @ 0x1402BF490 (MiReleasePteMappings.c)
 *     MiReturnSystemPtes @ 0x1402BFD60 (MiReturnSystemPtes.c)
 *     MiObtainSystemCacheView @ 0x1402C0010 (MiObtainSystemCacheView.c)
 *     MmFreePoolMemory @ 0x1402FAA60 (MmFreePoolMemory.c)
 *     MiExpandPtes @ 0x14038E6D8 (MiExpandPtes.c)
 *     MiGetPageTablesForLargeMap @ 0x14038FB4C (MiGetPageTablesForLargeMap.c)
 *     MiExpandSystemCache @ 0x1403903C8 (MiExpandSystemCache.c)
 *     MiReturnSystemCacheRegionsToKva @ 0x1403B6388 (MiReturnSystemCacheRegionsToKva.c)
 *     MiReleaseLargePdeMappings @ 0x140492BE8 (MiReleaseLargePdeMappings.c)
 *     MiUnmapLargePages @ 0x1404DAD88 (MiUnmapLargePages.c)
 *     MiDeleteBootRange @ 0x14065D60C (MiDeleteBootRange.c)
 *     MmFreeSecurePoolMemory @ 0x140671500 (MmFreeSecurePoolMemory.c)
 *     MiReserveDriverPtes @ 0x140A5B530 (MiReserveDriverPtes.c)
 *     MiReleaseDriverPtes @ 0x140A651C4 (MiReleaseDriverPtes.c)
 * Callees:
 *     MiMakeSystemRangeAvailable @ 0x14038E334 (MiMakeSystemRangeAvailable.c)
 *     MiDecommitSystemPageTables @ 0x140465E88 (MiDecommitSystemPageTables.c)
 */

__int64 __fastcall MiReturnSystemVa(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  __int64 result; // rax
  unsigned __int64 v4; // rbx
  ULONG_PTR v5; // rdi
  __int64 v6; // rbx

  v2 = (((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x97FFFFFF001LL) & 0xFFFFFFFFFFFFF000uLL;
  result = 0xFFFFF68000000000uLL;
  v4 = (((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 0xFFFFFFFFFFFFF000uLL;
  if ( v2 < v4 )
  {
    v5 = (__int64)(v2 << 25) >> 16;
    v6 = (__int64)(v4 << 25) >> 16;
    MiDecommitSystemPageTables(v5, v6);
    return MiMakeSystemRangeAvailable(v5, v6 - v5);
  }
  return result;
}
