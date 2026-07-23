/*
 * XREFs of HalpHvUnmapDeviceMsiRange @ 0x140B4E950
 * Callers:
 *     HalpInterruptUnmap @ 0x1406FB668 (HalpInterruptUnmap.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     HalpHvBuildDeviceId @ 0x140B4E6A0 (HalpHvBuildDeviceId.c)
 */

__int64 __fastcall HalpHvUnmapDeviceMsiRange(unsigned int a1, unsigned int a2, int *a3, char a4, __int64 a5)
{
  int v5; // eax
  _BYTE v7[2]; // [rsp+20h] [rbp-30h] BYREF
  __int16 v8; // [rsp+22h] [rbp-2Eh]
  __int64 v9; // [rsp+28h] [rbp-28h] BYREF
  _DWORD v10[4]; // [rsp+30h] [rbp-20h] BYREF

  v9 = 0LL;
  v8 = a1 >> 8;
  v7[1] = a1;
  v7[0] = (8 * a2) | (a2 >> 5) & 7;
  HalpHvBuildDeviceId((__int64)v7, a3, a4, (__int64)&v9);
  v5 = *(_DWORD *)(a5 + 48);
  v10[1] = 0;
  v10[2] = v5;
  v10[3] = *(_DWORD *)(a5 + 52);
  v10[0] = 1;
  return guard_dispatch_icall_no_overrides(v9, v10);
}
