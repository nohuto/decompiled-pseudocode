/*
 * XREFs of HalpIommuFlushPhysicalPtesFromCacheSize @ 0x14026F28C
 * Callers:
 *     HalpIommuMapLogical @ 0x14026EAD0 (HalpIommuMapLogical.c)
 *     HalpIommuUnmapLogicalRange @ 0x14026EEA0 (HalpIommuUnmapLogicalRange.c)
 *     HalpIommuAllocateAndZeroPageTable @ 0x1404D2F18 (HalpIommuAllocateAndZeroPageTable.c)
 *     HalpIommuInitializeDmarPageTable @ 0x140564F94 (HalpIommuInitializeDmarPageTable.c)
 *     HalpIommuMapLogicalRange @ 0x140565158 (HalpIommuMapLogicalRange.c)
 * Callees:
 *     KeInvalidateRangeAllCachesNoIpi @ 0x14026F580 (KeInvalidateRangeAllCachesNoIpi.c)
 */

__int64 __fastcall HalpIommuFlushPhysicalPtesFromCacheSize(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( !HalpIommuPageTableCacheCoherent )
    return KeInvalidateRangeAllCachesNoIpi(a1, a2);
  return result;
}
