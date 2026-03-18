/*
 * XREFs of VslExemptSecurePteRange @ 0x1404F76F4
 * Callers:
 *     MiAdjustSecureDriverStateForIatCapture @ 0x1404CBB68 (MiAdjustSecureDriverStateForIatCapture.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140265D90 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall VslExemptSecurePteRange(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v4; // rsi
  _BYTE v7[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v8; // [rsp+28h] [rbp-80h]
  __int64 v9; // [rsp+30h] [rbp-78h]
  __int64 v10; // [rsp+38h] [rbp-70h]

  v4 = a3;
  memset_0(v7, 0, 0x68uLL);
  v8 = a1;
  v9 = a2;
  v10 = v4;
  return VslpEnterIumSecureMode(2u, 260LL, 0, (__int64)v7);
}
