/*
 * XREFs of VslUpdateFreezeTimeBias @ 0x140A8D164
 * Callers:
 *     PsThawMultiProcess @ 0x1404E6564 (PsThawMultiProcess.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall VslUpdateFreezeTimeBias(__int64 a1, __int64 a2)
{
  _BYTE v5[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v6; // [rsp+28h] [rbp-80h]
  __int64 v7; // [rsp+30h] [rbp-78h]

  memset_0(v5, 0, 0x68uLL);
  v6 = *(_QWORD *)(a1 + 368);
  v7 = a2;
  return VslpEnterIumSecureMode(2u, 0x43u, 0, (__int64)v5);
}
