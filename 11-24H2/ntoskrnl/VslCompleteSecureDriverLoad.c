/*
 * XREFs of VslCompleteSecureDriverLoad @ 0x140A33F88
 * Callers:
 *     MiCompleteSecureDriverLoad @ 0x140A33D90 (MiCompleteSecureDriverLoad.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall VslCompleteSecureDriverLoad(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rsi
  _BYTE v7[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v8; // [rsp+28h] [rbp-80h]
  __int64 v9; // [rsp+30h] [rbp-78h]
  __int64 v10; // [rsp+38h] [rbp-70h]
  __int64 v11; // [rsp+40h] [rbp-68h]

  v4 = a3;
  memset_0(v7, 0, 0x68uLL);
  v11 = 0LL;
  v8 = a1;
  v9 = a2;
  v10 = v4;
  return VslpEnterIumSecureMode(2u, 0xD9u, 0, (__int64)v7);
}
