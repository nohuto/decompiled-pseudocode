/*
 * XREFs of HalpTscGetAttributes @ 0x14055E940
 * Callers:
 *     HalpTscDiscover @ 0x14055E7F8 (HalpTscDiscover.c)
 *     HalpTscInitialize @ 0x14055EAF0 (HalpTscInitialize.c)
 * Callees:
 *     HalSocRequestApi @ 0x1404AD34C (HalSocRequestApi.c)
 *     HalSocRequestConfigurationData @ 0x14055EBAC (HalSocRequestConfigurationData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpTscGetAttributes(_BYTE *a1, _BYTE *a2, _BYTE *a3)
{
  __int128 v7; // [rsp+38h] [rbp-20h] BYREF
  char v8; // [rsp+88h] [rbp+30h]
  int v9; // [rsp+90h] [rbp+38h]
  int v10; // [rsp+98h] [rbp+40h]

  v10 = 0;
  v9 = 0;
  *a1 = 0;
  *a2 = 0;
  *a3 = 0;
  v7 = 0LL;
  v8 = 0;
  if ( (int)HalSocRequestApi((__int64)a1, 0LL, 2, 16LL, &v7) < 0 )
    goto LABEL_6;
  guard_dispatch_icall_no_overrides(2147483649LL);
  if ( (v10 & 0x8000000) != 0 )
    *a3 = 1;
  if ( (unsigned __int8)guard_dispatch_icall_no_overrides(0LL) )
  {
    guard_dispatch_icall_no_overrides(0x80000000LL);
    return 3221225659LL;
  }
  else
  {
LABEL_6:
    *a1 = 1;
    *a2 = 1;
    return 0LL;
  }
}
