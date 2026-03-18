/*
 * XREFs of IommupHvIsStage1DmarCompatible @ 0x140566040
 * Callers:
 *     HalpDmaGetDefaultRemappingDomainPolicy @ 0x14053C688 (HalpDmaGetDefaultRemappingDomainPolicy.c)
 *     IommupDeviceEnablePasidTaggedDma @ 0x1406FF3F4 (IommupDeviceEnablePasidTaggedDma.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

bool __fastcall IommupHvIsStage1DmarCompatible(_DWORD *a1, char a2, __int64 a3, __int64 a4)
{
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF

  v6 = 0LL;
  if ( HalpHvParaVirtIommuDomain
    && (!a2 || IommupHvPasidEnabled)
    && *a1 == 1
    && (int)guard_dispatch_icall_no_overrides(a1, &v6, a3, a4) >= 0
    && (v6 & 0x20) != 0 )
  {
    if ( !a2 )
      return 1;
    if ( (v6 & 0x200) != 0 )
      return DWORD1(v6) >= IommupHvMaximumAsids;
  }
  return 0;
}
