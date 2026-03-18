/*
 * XREFs of VslConfigureSecureAtsDevice @ 0x14058CD48
 * Callers:
 *     ExpAtsConfigureSecureDevice @ 0x140657EFC (ExpAtsConfigureSecureDevice.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140265D90 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall VslConfigureSecureAtsDevice(__int64 *a1, __int64 *a2)
{
  __int64 v4; // xmm0_8
  _BYTE v6[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v7; // [rsp+28h] [rbp-80h]
  int v8; // [rsp+30h] [rbp-78h]
  __int64 v9; // [rsp+34h] [rbp-74h]

  memset_0(v6, 0, 0x68uLL);
  v4 = *a1;
  v8 = *((_DWORD *)a1 + 2);
  v9 = *a2;
  v7 = v4;
  return VslpEnterIumSecureMode(2u, 276LL, 0, (__int64)v6);
}
