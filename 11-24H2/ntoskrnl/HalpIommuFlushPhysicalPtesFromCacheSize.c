/*
 * XREFs of HalpIommuFlushPhysicalPtesFromCacheSize @ 0x1403AC6DC
 * Callers:
 *     HalpIommuAllocateAndZeroPageTable @ 0x1403ABF8C (HalpIommuAllocateAndZeroPageTable.c)
 *     HalpIommuUnmapLogicalRange @ 0x1403AC6FC (HalpIommuUnmapLogicalRange.c)
 *     HalpIommuMapLogical @ 0x1403AC998 (HalpIommuMapLogical.c)
 *     HalpIommuInitializeDmarPageTable @ 0x140567B64 (HalpIommuInitializeDmarPageTable.c)
 *     HalpIommuMapLogicalRange @ 0x140567D28 (HalpIommuMapLogicalRange.c)
 * Callees:
 *     KeInvalidateRangeAllCachesNoIpi @ 0x1403AEA10 (KeInvalidateRangeAllCachesNoIpi.c)
 */

__int64 __fastcall HalpIommuFlushPhysicalPtesFromCacheSize(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( !HalpIommuPageTableCacheCoherent )
    return KeInvalidateRangeAllCachesNoIpi(a1, a2);
  return result;
}
