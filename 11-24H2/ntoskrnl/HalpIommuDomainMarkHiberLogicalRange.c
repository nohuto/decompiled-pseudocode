/*
 * XREFs of HalpIommuDomainMarkHiberLogicalRange @ 0x1405515B4
 * Callers:
 *     HalpDmaMarkHiberAdapter @ 0x1404C9FDC (HalpDmaMarkHiberAdapter.c)
 * Callees:
 *     HalpIommuDmarPageTableMarkHiberPhase @ 0x14056544C (HalpIommuDmarPageTableMarkHiberPhase.c)
 */

__int64 __fastcall HalpIommuDomainMarkHiberLogicalRange(void *a1)
{
  __int64 result; // rax

  if ( !HalpHvIommu )
    return HalpIommuDmarPageTableMarkHiberPhase(a1);
  return result;
}
