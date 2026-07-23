/*
 * XREFs of MiReturnSystemVa @ 0x14020AB44
 * Callers:
 *     MiReleasePteMappings @ 0x140209350 (MiReleasePteMappings.c)
 *     MiReturnSystemPtes @ 0x140209C30 (MiReturnSystemPtes.c)
 *     MiObtainSystemCacheView @ 0x140209EE0 (MiObtainSystemCacheView.c)
 *     MmFreePoolMemory @ 0x14020C540 (MmFreePoolMemory.c)
 *     MiExpandSystemCache @ 0x14026B918 (MiExpandSystemCache.c)
 *     MiGetPageTablesForLargeMap @ 0x14026C224 (MiGetPageTablesForLargeMap.c)
 *     MiExpandPtes @ 0x14026C728 (MiExpandPtes.c)
 *     MiRemoveFromSystemSpace @ 0x140290E7C (MiRemoveFromSystemSpace.c)
 *     MiReturnSystemCacheRegionsToKva @ 0x140353754 (MiReturnSystemCacheRegionsToKva.c)
 *     MiReleaseLargePdeMappings @ 0x14048CC64 (MiReleaseLargePdeMappings.c)
 *     MiUnmapLargePages @ 0x1404D1FE8 (MiUnmapLargePages.c)
 *     MiDeleteBootRange @ 0x14066A308 (MiDeleteBootRange.c)
 *     MmFreeSecurePoolMemory @ 0x14067DEA0 (MmFreeSecurePoolMemory.c)
 *     MiReserveDriverPtes @ 0x140A555D0 (MiReserveDriverPtes.c)
 *     MiReleaseDriverPtes @ 0x140A611E4 (MiReleaseDriverPtes.c)
 * Callees:
 *     MiMakeSystemRangeAvailable @ 0x14026C384 (MiMakeSystemRangeAvailable.c)
 *     MiDecommitSystemPageTables @ 0x14045B6DC (MiDecommitSystemPageTables.c)
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
