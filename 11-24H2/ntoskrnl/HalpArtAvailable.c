/*
 * XREFs of HalpArtAvailable @ 0x1404A5570
 * Callers:
 *     HalpArtInitialize @ 0x1404A54E0 (HalpArtInitialize.c)
 *     HalpArtDiscover @ 0x140560784 (HalpArtDiscover.c)
 * Callees:
 *     HalpIsHvPresent @ 0x1404A5710 (HalpIsHvPresent.c)
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1404A57AC (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall HalpArtAvailable(_DWORD *a1, unsigned int *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v7; // [rsp+30h] [rbp-30h] BYREF
  int v8; // [rsp+34h] [rbp-2Ch] BYREF
  unsigned int v9; // [rsp+38h] [rbp-28h] BYREF
  unsigned int v10; // [rsp+3Ch] [rbp-24h] BYREF
  int v11; // [rsp+40h] [rbp-20h]
  unsigned int v12; // [rsp+44h] [rbp-1Ch] BYREF
  __int128 v13; // [rsp+48h] [rbp-18h]
  char v14; // [rsp+80h] [rbp+20h] BYREF
  int v15; // [rsp+88h] [rbp+28h] BYREF

  v11 = 0;
  v7 = 0;
  v9 = 0;
  v10 = 0;
  v8 = 0;
  v12 = 0;
  v15 = 0;
  v13 = *(_OWORD *)&HalpTimerPcCpuApi;
  v14 = 0;
  if ( !(unsigned __int8)guard_dispatch_icall_no_overrides(0LL, 0LL, 0LL, &v14) )
    return 0;
  guard_dispatch_icall_no_overrides(0LL, &v9, &v15, &v15);
  guard_dispatch_icall_no_overrides(0x80000000LL, &v10, &v15, &v15);
  if ( v14 != 2
    || (unsigned __int8)HalpIsHvPresent(v4)
    && (!HalpHvCpuManager || !(unsigned __int8)HalpIsMicrosoftCompatibleHvLoaded(v5)) )
  {
    return 0;
  }
  if ( v9 < 0x15 )
    return 0;
  if ( v10 < 0x80000007 )
    return 0;
  guard_dispatch_icall_no_overrides(21LL, &v7, &v8, &v15);
  if ( !v8 )
    return 0;
  if ( !v7 )
    return 0;
  guard_dispatch_icall_no_overrides(2147483655LL, &v15, &v15, &v15);
  if ( (v11 & 0x100) == 0 )
    return 0;
  guard_dispatch_icall_no_overrides(1LL, &v15, &v12, &v15);
  *a2 = HIBYTE(v12);
  if ( a1 )
  {
    *a1 = v7;
    a1[1] = v8;
  }
  return 1;
}
