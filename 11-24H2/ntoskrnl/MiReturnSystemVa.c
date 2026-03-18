/*
 * XREFs of MiReturnSystemVa @ 0x1402429F4
 * Callers:
 *     MiReleasePteMappings @ 0x140241200 (MiReleasePteMappings.c)
 *     MiReturnSystemPtes @ 0x140241AE0 (MiReturnSystemPtes.c)
 *     MiObtainSystemCacheView @ 0x140241D90 (MiObtainSystemCacheView.c)
 *     MmFreePoolMemory @ 0x140243A40 (MmFreePoolMemory.c)
 *     MiRemoveFromSystemSpace @ 0x14026086C (MiRemoveFromSystemSpace.c)
 *     MiReturnSystemCacheRegionsToKva @ 0x1402D24DC (MiReturnSystemCacheRegionsToKva.c)
 *     MiExpandPtes @ 0x1403A5438 (MiExpandPtes.c)
 *     MiGetPageTablesForLargeMap @ 0x1403A6BE4 (MiGetPageTablesForLargeMap.c)
 *     MiExpandSystemCache @ 0x1403A7378 (MiExpandSystemCache.c)
 *     MiReleaseLargePdeMappings @ 0x140491DC4 (MiReleaseLargePdeMappings.c)
 *     MiUnmapLargePages @ 0x1404D8B98 (MiUnmapLargePages.c)
 *     MiDeleteBootRange @ 0x140669130 (MiDeleteBootRange.c)
 *     MmFreeSecurePoolMemory @ 0x14067CCC0 (MmFreeSecurePoolMemory.c)
 *     MiReleaseDriverPtes @ 0x140A67CE4 (MiReleaseDriverPtes.c)
 *     MiReserveDriverPtes @ 0x140AB636C (MiReserveDriverPtes.c)
 * Callees:
 *     MiDecommitSystemPageTables @ 0x1402342AC (MiDecommitSystemPageTables.c)
 *     MiMakeSystemRangeAvailable @ 0x1403A5094 (MiMakeSystemRangeAvailable.c)
 */

__int64 __fastcall MiReturnSystemVa(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v3; // rdi
  __int64 result; // rax
  unsigned __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rbx

  v3 = (((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x97FFFFFF001LL) & 0xFFFFFFFFFFFFF000uLL;
  result = 0xFFFFF68000000000uLL;
  v5 = (((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 0xFFFFFFFFFFFFF000uLL;
  if ( v3 < v5 )
  {
    v6 = (__int64)(v3 << 25) >> 16;
    v7 = (__int64)(v5 << 25) >> 16;
    MiDecommitSystemPageTables(v6, v7, a3);
    return MiMakeSystemRangeAvailable(v6, v7 - v6);
  }
  return result;
}
