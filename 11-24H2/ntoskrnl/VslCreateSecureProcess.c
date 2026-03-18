/*
 * XREFs of VslCreateSecureProcess @ 0x140A85230
 * Callers:
 *     KeInitializeProcess @ 0x140A4EB18 (KeInitializeProcess.c)
 *     VslCreateEnclave @ 0x140A850B4 (VslCreateEnclave.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140265D90 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall VslCreateSecureProcess(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  _BYTE v7[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v8; // [rsp+28h] [rbp-80h]
  __int64 v9; // [rsp+30h] [rbp-78h]

  memset_0(v7, 0, 0x68uLL);
  v8 = a1;
  v9 = a2;
  result = VslpEnterIumSecureMode(2u, 6LL, 0, (__int64)v7);
  if ( (int)result >= 0 )
    *a3 = v9;
  return result;
}
