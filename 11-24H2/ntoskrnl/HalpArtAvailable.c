/*
 * XREFs of HalpArtAvailable @ 0x1404A0300
 * Callers:
 *     HalpArtInitialize @ 0x1404A0270 (HalpArtInitialize.c)
 *     HalpArtDiscover @ 0x14055E3B4 (HalpArtDiscover.c)
 * Callees:
 *     HalpIsHvPresent @ 0x1404A04A0 (HalpIsHvPresent.c)
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1404A053C (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

char HalpArtAvailable()
{
  int v1; // [rsp+30h] [rbp-30h]
  int v2; // [rsp+34h] [rbp-2Ch]
  int v3; // [rsp+38h] [rbp-28h] BYREF
  _DWORD v4[3]; // [rsp+3Ch] [rbp-24h] BYREF
  __int128 v5; // [rsp+48h] [rbp-18h]
  int v6; // [rsp+88h] [rbp+28h]

  v4[1] = 0;
  v1 = 0;
  v3 = 0;
  v4[0] = 0;
  v2 = 0;
  v4[2] = 0;
  v6 = 0;
  v5 = *(_OWORD *)&HalpTimerPcCpuApi;
  if ( (unsigned __int8)guard_dispatch_icall_no_overrides(0LL, 0LL) )
  {
    guard_dispatch_icall_no_overrides(0LL, &v3);
    guard_dispatch_icall_no_overrides(0x80000000LL, v4);
  }
  return 0;
}
