/*
 * XREFs of IommupHvIsStage1DmarCompatible @ 0x140563830
 * Callers:
 *     HalpDmaGetDefaultRemappingDomainPolicy @ 0x140539E84 (HalpDmaGetDefaultRemappingDomainPolicy.c)
 *     IommupDeviceEnablePasidTaggedDma @ 0x1406F3604 (IommupDeviceEnablePasidTaggedDma.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall IommupHvIsStage1DmarCompatible(_DWORD *a1, char a2)
{
  if ( HalpHvParaVirtIommuDomain && (!a2 || IommupHvPasidEnabled) && *a1 == 1 )
    guard_dispatch_icall_no_overrides(a1);
  return 0;
}
