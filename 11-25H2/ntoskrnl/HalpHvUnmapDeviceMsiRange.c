/*
 * XREFs of HalpHvUnmapDeviceMsiRange @ 0x140B3C910
 * Callers:
 *     HalpInterruptUnmap @ 0x1406F1C38 (HalpInterruptUnmap.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     HalpHvBuildDeviceId @ 0x140B3C660 (HalpHvBuildDeviceId.c)
 */

__int64 __fastcall HalpHvUnmapDeviceMsiRange(unsigned int a1, unsigned int a2, int *a3, char a4, __int64 a5)
{
  int v5; // eax
  _BYTE v7[2]; // [rsp+20h] [rbp-30h] BYREF
  __int16 v8; // [rsp+22h] [rbp-2Eh]
  __int64 v9; // [rsp+28h] [rbp-28h] BYREF
  int v10; // [rsp+30h] [rbp-20h]
  int v11; // [rsp+34h] [rbp-1Ch]
  int v12; // [rsp+38h] [rbp-18h]
  int v13; // [rsp+3Ch] [rbp-14h]

  v9 = 0LL;
  v8 = a1 >> 8;
  v7[1] = a1;
  v7[0] = (8 * a2) | (a2 >> 5) & 7;
  HalpHvBuildDeviceId((__int64)v7, a3, a4, (__int64)&v9);
  v5 = *(_DWORD *)(a5 + 48);
  v11 = 0;
  v12 = v5;
  v13 = *(_DWORD *)(a5 + 52);
  v10 = 1;
  return guard_dispatch_icall_no_overrides(v9);
}
