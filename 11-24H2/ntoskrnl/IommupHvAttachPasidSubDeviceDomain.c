/*
 * XREFs of IommupHvAttachPasidSubDeviceDomain @ 0x1405635D4
 * Callers:
 *     IommupDomainAttachPasidDevice @ 0x14054B9D4 (IommupDomainAttachPasidDevice.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupHvAttachPasidSubDeviceDomain(__int64 a1)
{
  __int64 v1; // rbp
  int v3; // ebx

  v1 = *(_QWORD *)(a1 + 16);
  v3 = guard_dispatch_icall_no_overrides(*(_QWORD *)(v1 + 32), *(unsigned int *)(a1 + 48));
  if ( v3 >= 0 )
  {
    v3 = guard_dispatch_icall_no_overrides(0LL, *(unsigned int *)(a1 + 48));
    if ( v3 < 0 )
      guard_dispatch_icall_no_overrides(*(_QWORD *)(v1 + 32), *(unsigned int *)(a1 + 48));
  }
  return (unsigned int)v3;
}
