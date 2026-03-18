/*
 * XREFs of HalpTscGetAttributes @ 0x140561240
 * Callers:
 *     HalpTscDiscover @ 0x1405610F8 (HalpTscDiscover.c)
 *     HalpTscInitialize @ 0x1405613F0 (HalpTscInitialize.c)
 * Callees:
 *     HalSocRequestApi @ 0x1404AE160 (HalSocRequestApi.c)
 *     HalSocRequestConfigurationData @ 0x1405614AC (HalSocRequestConfigurationData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpTscGetAttributes(_BYTE *a1, _BYTE *a2, _BYTE *a3)
{
  __int64 v6; // rdx
  __int16 v8; // ax
  unsigned int v9; // [rsp+30h] [rbp-28h] BYREF
  int v10; // [rsp+34h] [rbp-24h]
  __int128 v11; // [rsp+38h] [rbp-20h] BYREF
  char v12; // [rsp+80h] [rbp+28h] BYREF
  char v13; // [rsp+88h] [rbp+30h] BYREF
  int v14; // [rsp+90h] [rbp+38h] BYREF
  int v15; // [rsp+98h] [rbp+40h]

  v15 = 0;
  v14 = 0;
  v9 = 0;
  *a1 = 0;
  *a2 = 0;
  *a3 = 0;
  v11 = 0LL;
  v12 = 0;
  v13 = 0;
  if ( (int)HalSocRequestApi((__int64)a1, 0LL, 2, 16LL, &v11) < 0 )
    goto LABEL_22;
  guard_dispatch_icall_no_overrides(2147483649LL, &v14, &v14, &v14);
  if ( (v15 & 0x8000000) != 0 )
    *a3 = 1;
  if ( !(unsigned __int8)guard_dispatch_icall_no_overrides(0LL, 0LL, 0LL, &v12) )
    goto LABEL_22;
  guard_dispatch_icall_no_overrides(0x80000000LL, &v9, &v14, &v14);
  if ( (unsigned __int8)(v12 - 1) > 1u )
    return 3221225659LL;
  if ( !*a3 )
  {
    if ( v12 == 2 )
    {
      HalpTscFenceRequired = 1;
    }
    else if ( v12 == 1 )
    {
      HalpTscFenceRequired = 2;
    }
  }
  v8 = 0;
  v10 = 0;
  if ( v9 >= 0x80000007 )
  {
    guard_dispatch_icall_no_overrides(2147483655LL, &v14, &v14, &v14);
    v8 = v10;
  }
  if ( (v8 & 0x100) != 0 )
  {
LABEL_22:
    *a1 = 1;
    *a2 = 1;
  }
  else
  {
    HalSocRequestConfigurationData(8LL, v6, &v13);
    if ( !v13
      && v12 == 2
      && (KeGetCurrentPrcb()->CpuType == 15 && KeGetCurrentPrcb()->CpuModel >= 3u
       || KeGetCurrentPrcb()->CpuType == 6 && KeGetCurrentPrcb()->CpuModel >= 0xEu) )
    {
      *a1 = 1;
      *a2 = 0;
    }
  }
  return 0LL;
}
