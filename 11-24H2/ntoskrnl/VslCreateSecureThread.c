/*
 * XREFs of VslCreateSecureThread @ 0x140A80638
 * Callers:
 *     KeSecureThread @ 0x1404B5B34 (KeSecureThread.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall VslCreateSecureThread(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7)
{
  __int64 result; // rax
  _BYTE v12[8]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v13; // [rsp+28h] [rbp-A0h]
  __int64 v14; // [rsp+30h] [rbp-98h]
  __int64 v15; // [rsp+38h] [rbp-90h]
  __int64 v16; // [rsp+40h] [rbp-88h]
  __int64 v17; // [rsp+48h] [rbp-80h]
  __int64 v18; // [rsp+50h] [rbp-78h]
  __int64 v19; // [rsp+58h] [rbp-70h]

  memset_0(v12, 0, 0x68uLL);
  v13 = *(_QWORD *)(a1 + 368);
  v15 = *(_QWORD *)(a3 + 48);
  v18 = a5;
  v19 = a6;
  v14 = a2;
  v16 = a3;
  v17 = a4;
  result = VslpEnterIumSecureMode(2u, 8u, 0, (__int64)v12);
  if ( (int)result >= 0 )
    *a7 = v14;
  return result;
}
