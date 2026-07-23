/*
 * XREFs of VslQueryVirtualMemory @ 0x1404AC438
 * Callers:
 *     MmQueryVirtualMemory @ 0x14096EC30 (MmQueryVirtualMemory.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall VslQueryVirtualMemory(__int64 a1, __int64 a2, _OWORD *a3)
{
  __int64 result; // rax
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  _BYTE v9[8]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v10; // [rsp+28h] [rbp-90h]
  __int128 v11; // [rsp+30h] [rbp-88h]
  __int128 v12; // [rsp+40h] [rbp-78h]
  __int128 v13; // [rsp+50h] [rbp-68h]

  memset_0(v9, 0, 0x68uLL);
  v10 = *(_QWORD *)(a1 + 368);
  *(_QWORD *)&v11 = a2;
  result = VslpEnterIumSecureMode(2u, 0x2Au, 0, (__int64)v9);
  if ( (int)result >= 0 )
  {
    v7 = v12;
    *a3 = v11;
    v8 = v13;
    a3[1] = v7;
    a3[2] = v8;
  }
  return result;
}
