/*
 * XREFs of HalpIommuFlushDomainTB @ 0x140488C74
 * Callers:
 *     HalpIommuDereferenceHardwareDomain @ 0x140553A18 (HalpIommuDereferenceHardwareDomain.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIommuFlushDomainTB(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( HalpHvIommu )
    return 3221225659LL;
  guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 16), a2, 0LL, a3);
  return 0LL;
}
