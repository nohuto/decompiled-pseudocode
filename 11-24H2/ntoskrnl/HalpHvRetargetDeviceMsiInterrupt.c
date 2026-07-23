/*
 * XREFs of HalpHvRetargetDeviceMsiInterrupt @ 0x1403739A4
 * Callers:
 *     HalpInterruptSetRemappedDestinationHv @ 0x140373848 (HalpInterruptSetRemappedDestinationHv.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpHvRetargetDeviceMsiInterrupt(__int64 a1)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  __int64 v4; // rcx
  _DWORD v6[4]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v7; // [rsp+40h] [rbp-28h]

  v1 = *(_DWORD *)(a1 + 48);
  v6[1] = 0;
  v6[2] = v1;
  v2 = *(_DWORD *)(a1 + 4);
  v7 = 0LL;
  LODWORD(v7) = v2;
  v3 = *(_DWORD *)(a1 + 52);
  v4 = *(_QWORD *)(a1 + 64);
  v6[3] = v3;
  v6[0] = 1;
  return guard_dispatch_icall_no_overrides(v4, v6);
}
