/*
 * XREFs of HalpIommuDomainMarkHiberLogicalRange @ 0x140551374
 * Callers:
 *     HalpDmaMarkHiberAdapter @ 0x1404D0ECC (HalpDmaMarkHiberAdapter.c)
 * Callees:
 *     HalpIommuDmarPageTableMarkHiberPhase @ 0x140564D8C (HalpIommuDmarPageTableMarkHiberPhase.c)
 */

__int64 __fastcall HalpIommuDomainMarkHiberLogicalRange(void *a1)
{
  __int64 result; // rax

  if ( !HalpHvIommu )
    return HalpIommuDmarPageTableMarkHiberPhase(a1);
  return result;
}
