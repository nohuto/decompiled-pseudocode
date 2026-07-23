/*
 * XREFs of IommupHvDetachPasidSubDeviceDomain @ 0x140563910
 * Callers:
 *     IommupDomainDetachPasidDevice @ 0x14054BD54 (IommupDomainDetachPasidDevice.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupHvDetachPasidSubDeviceDomain(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 16);
  guard_dispatch_icall_no_overrides(0LL, *(unsigned int *)(a1 + 48));
  return guard_dispatch_icall_no_overrides(*(_QWORD *)(v1 + 32), *(unsigned int *)(a1 + 48));
}
