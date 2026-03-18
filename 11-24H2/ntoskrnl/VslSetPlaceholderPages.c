/*
 * XREFs of VslSetPlaceholderPages @ 0x140265064
 * Callers:
 *     MiUpdateSlabPagePlaceholderState @ 0x140264F54 (MiUpdateSlabPagePlaceholderState.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140265D90 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall VslSetPlaceholderPages(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v5; // rsi
  __int64 v6; // rbp
  __int64 v8; // rcx
  _BYTE v10[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v11; // [rsp+28h] [rbp-80h]
  __int64 v12; // [rsp+30h] [rbp-78h]
  __int64 v13; // [rsp+38h] [rbp-70h]
  __int64 v14; // [rsp+40h] [rbp-68h]

  v5 = a3;
  v6 = a4;
  memset_0(v10, 0, 0x68uLL);
  v11 = a1;
  v12 = a2;
  v13 = v5;
  LOBYTE(v8) = 2;
  v14 = v6;
  return VslpEnterIumSecureMode(v8, 257LL, 0LL, v10);
}
