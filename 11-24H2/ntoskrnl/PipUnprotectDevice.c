/*
 * XREFs of PipUnprotectDevice @ 0x14073676C
 * Callers:
 *     PiProcessDriversLoadedOnSecureDevice @ 0x1409C5488 (PiProcessDriversLoadedOnSecureDevice.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140265D90 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PnpQueryInterface @ 0x1409C4D84 (PnpQueryInterface.c)
 */

__int64 __fastcall PipUnprotectDevice(__int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  _OWORD v10[2]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v11; // [rsp+50h] [rbp-98h]
  _BYTE v12[8]; // [rsp+60h] [rbp-88h] BYREF
  __int64 v13; // [rsp+68h] [rbp-80h]

  v1 = *(void **)(a1 + 32);
  v11 = 0LL;
  memset(v10, 0, sizeof(v10));
  result = PnpQueryInterface(v1, 0LL, v10);
  if ( (int)result >= 0 )
  {
    v6 = guard_dispatch_icall_no_overrides(*((_QWORD *)&v10[0] + 1), v3, v4, v5);
    guard_dispatch_icall_no_overrides(*((_QWORD *)&v10[0] + 1), v7, v8, v9);
    memset_0(v12, 0, 0x68uLL);
    v13 = v6;
    return VslpEnterIumSecureMode(2u, 71LL, 0, (__int64)v12);
  }
  return result;
}
