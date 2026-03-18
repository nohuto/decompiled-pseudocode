/*
 * XREFs of HalpIommuDomainMarkHiberLogicalRange @ 0x140553C74
 * Callers:
 *     HalpDmaMarkHiberAdapter @ 0x1404D0F9C (HalpDmaMarkHiberAdapter.c)
 * Callees:
 *     HalpIommuDmarPageTableMarkHiberPhase @ 0x14056795C (HalpIommuDmarPageTableMarkHiberPhase.c)
 */

__int64 __fastcall HalpIommuDomainMarkHiberLogicalRange(void *a1)
{
  __int64 result; // rax

  if ( !HalpHvIommu )
    return HalpIommuDmarPageTableMarkHiberPhase(a1);
  return result;
}
