/*
 * XREFs of HalpHvUnmapIoApicDeviceInterrupt @ 0x140B4C9B4
 * Callers:
 *     HalpInterruptUnmap @ 0x1406FDA28 (HalpInterruptUnmap.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpHvUnmapIoApicDeviceInterrupt(char a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // [rsp+20h] [rbp-28h]
  _DWORD v6[2]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  v6[1] = 0;
  v5 = 0x8000000000000000uLL;
  LOBYTE(v5) = a1;
  v7 = *(_QWORD *)(a2 + 40);
  v6[0] = 2;
  return guard_dispatch_icall_no_overrides(v5, v6, a3, a4);
}
