/*
 * XREFs of PipUnprotectDevice @ 0x14072A4DC
 * Callers:
 *     PiProcessDriversLoadedOnSecureDevice @ 0x140AAD2B4 (PiProcessDriversLoadedOnSecureDevice.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140282F50 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PnpQueryInterface @ 0x14082CC7C (PnpQueryInterface.c)
 */

__int64 __fastcall PipUnprotectDevice(__int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax
  __int64 v3; // rbx
  _OWORD v4[2]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v5; // [rsp+50h] [rbp-98h]
  _BYTE v6[8]; // [rsp+60h] [rbp-88h] BYREF
  __int64 v7; // [rsp+68h] [rbp-80h]

  v1 = *(void **)(a1 + 32);
  v5 = 0LL;
  memset(v4, 0, sizeof(v4));
  result = PnpQueryInterface(v1, 0LL, v4);
  if ( (int)result >= 0 )
  {
    v3 = guard_dispatch_icall_no_overrides(*((_QWORD *)&v4[0] + 1));
    guard_dispatch_icall_no_overrides(*((_QWORD *)&v4[0] + 1));
    memset_0(v6, 0, 0x68uLL);
    v7 = v3;
    return VslpEnterIumSecureMode(2u, 0x47u, 0, (__int64)v6);
  }
  return result;
}
