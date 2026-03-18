/*
 * XREFs of HalpHvRetargetDeviceMsiInterrupt @ 0x1403B94C4
 * Callers:
 *     HalpInterruptSetRemappedDestinationHv @ 0x1403B9368 (HalpInterruptSetRemappedDestinationHv.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpHvRetargetDeviceMsiInterrupt(__int64 a1, __int64 a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  __int64 v5; // rcx
  _DWORD v7[4]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v8; // [rsp+40h] [rbp-28h] BYREF

  v2 = *(_DWORD *)(a1 + 48);
  v7[1] = 0;
  v7[2] = v2;
  v3 = *(_DWORD *)(a1 + 4);
  v8 = 0LL;
  LODWORD(v8) = v3;
  v4 = *(_DWORD *)(a1 + 52);
  v5 = *(_QWORD *)(a1 + 64);
  v7[3] = v4;
  v7[0] = 1;
  return guard_dispatch_icall_no_overrides(v5, v7, &v8, a2);
}
