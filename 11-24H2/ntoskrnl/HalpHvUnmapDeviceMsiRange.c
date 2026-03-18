/*
 * XREFs of HalpHvUnmapDeviceMsiRange @ 0x140B4C910
 * Callers:
 *     HalpInterruptUnmap @ 0x1406FDA28 (HalpInterruptUnmap.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     HalpHvBuildDeviceId @ 0x140B4C660 (HalpHvBuildDeviceId.c)
 */

__int64 __fastcall HalpHvUnmapDeviceMsiRange(unsigned int a1, unsigned int a2, int *a3, char a4, __int64 a5)
{
  int v5; // eax
  __int64 v6; // r8
  __int64 v7; // r9
  _BYTE v9[2]; // [rsp+20h] [rbp-30h] BYREF
  __int16 v10; // [rsp+22h] [rbp-2Eh]
  __int64 v11; // [rsp+28h] [rbp-28h] BYREF
  _DWORD v12[4]; // [rsp+30h] [rbp-20h] BYREF

  v11 = 0LL;
  v10 = a1 >> 8;
  v9[1] = a1;
  v9[0] = (8 * a2) | (a2 >> 5) & 7;
  HalpHvBuildDeviceId((__int64)v9, a3, a4, (__int64)&v11);
  v5 = *(_DWORD *)(a5 + 48);
  v12[1] = 0;
  v12[2] = v5;
  v12[3] = *(_DWORD *)(a5 + 52);
  v12[0] = 1;
  return guard_dispatch_icall_no_overrides(v11, v12, v6, v7);
}
