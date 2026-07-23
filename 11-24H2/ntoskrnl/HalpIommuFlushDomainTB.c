/*
 * XREFs of HalpIommuFlushDomainTB @ 0x140483D64
 * Callers:
 *     HalpIommuDereferenceHardwareDomain @ 0x140551358 (HalpIommuDereferenceHardwareDomain.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIommuFlushDomainTB(__int64 a1, __int64 a2)
{
  if ( HalpHvIommu )
    return 3221225659LL;
  guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 16), a2);
  return 0LL;
}
