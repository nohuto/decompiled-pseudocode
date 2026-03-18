/*
 * XREFs of HalpHvUnmapIoApicDeviceInterrupt @ 0x140B3C9B4
 * Callers:
 *     HalpInterruptUnmap @ 0x1406F1C38 (HalpInterruptUnmap.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpHvUnmapIoApicDeviceInterrupt(char a1)
{
  unsigned __int64 v2; // [rsp+20h] [rbp-28h]

  v2 = 0x8000000000000000uLL;
  LOBYTE(v2) = a1;
  return guard_dispatch_icall_no_overrides(v2);
}
