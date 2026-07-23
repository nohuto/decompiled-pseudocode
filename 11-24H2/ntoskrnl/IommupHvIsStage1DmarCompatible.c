/*
 * XREFs of IommupHvIsStage1DmarCompatible @ 0x140563D40
 * Callers:
 *     HalpDmaGetDefaultRemappingDomainPolicy @ 0x140539F14 (HalpDmaGetDefaultRemappingDomainPolicy.c)
 *     IommupDeviceEnablePasidTaggedDma @ 0x1406FD034 (IommupDeviceEnablePasidTaggedDma.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

bool __fastcall IommupHvIsStage1DmarCompatible(_DWORD *a1, char a2)
{
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0LL;
  if ( HalpHvParaVirtIommuDomain
    && (!a2 || IommupHvPasidEnabled)
    && *a1 == 1
    && (int)guard_dispatch_icall_no_overrides(a1, &v4) >= 0
    && (v4 & 0x20) != 0 )
  {
    if ( !a2 )
      return 1;
    if ( (v4 & 0x200) != 0 )
      return DWORD1(v4) >= IommupHvMaximumAsids;
  }
  return 0;
}
