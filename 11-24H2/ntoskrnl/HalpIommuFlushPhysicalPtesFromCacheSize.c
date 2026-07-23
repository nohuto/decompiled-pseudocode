/*
 * XREFs of HalpIommuFlushPhysicalPtesFromCacheSize @ 0x14039AEE8
 * Callers:
 *     HalpIommuAllocateAndZeroPageTable @ 0x14039A69C (HalpIommuAllocateAndZeroPageTable.c)
 *     HalpIommuUnmapLogicalRange @ 0x14039AF08 (HalpIommuUnmapLogicalRange.c)
 *     HalpIommuMapLogical @ 0x14039B1A4 (HalpIommuMapLogical.c)
 *     HalpIommuInitializeDmarPageTable @ 0x140565654 (HalpIommuInitializeDmarPageTable.c)
 *     HalpIommuMapLogicalRange @ 0x140565818 (HalpIommuMapLogicalRange.c)
 * Callees:
 *     KeInvalidateRangeAllCachesNoIpi @ 0x14039D220 (KeInvalidateRangeAllCachesNoIpi.c)
 */

__int64 __fastcall HalpIommuFlushPhysicalPtesFromCacheSize(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( !HalpIommuPageTableCacheCoherent )
    return KeInvalidateRangeAllCachesNoIpi(a1, a2);
  return result;
}
