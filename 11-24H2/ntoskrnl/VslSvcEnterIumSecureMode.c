/*
 * XREFs of VslSvcEnterIumSecureMode @ 0x14058B7A8
 * Callers:
 *     VmCallSkSvc @ 0x1406488D0 (VmCallSkSvc.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall VslSvcEnterIumSecureMode(__int128 *a1)
{
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int64 result; // rax
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  _BYTE v13[8]; // [rsp+20h] [rbp-29h] BYREF
  __int128 v14; // [rsp+28h] [rbp-21h]
  __int128 v15; // [rsp+38h] [rbp-11h]
  __int128 v16; // [rsp+48h] [rbp-1h]
  __int128 v17; // [rsp+58h] [rbp+Fh]
  __int128 v18; // [rsp+68h] [rbp+1Fh]
  __int128 v19; // [rsp+78h] [rbp+2Fh]

  memset_0(v13, 0, 0x68uLL);
  v2 = a1[1];
  v14 = *a1;
  v3 = a1[2];
  v15 = v2;
  v4 = a1[3];
  v16 = v3;
  v5 = a1[4];
  v17 = v4;
  v6 = a1[5];
  v18 = v5;
  v19 = v6;
  result = VslpEnterIumSecureMode(2u, 0x110u, 0, (__int64)v13);
  v8 = v15;
  *a1 = v14;
  v9 = v16;
  a1[1] = v8;
  v10 = v17;
  a1[2] = v9;
  v11 = v18;
  a1[3] = v10;
  v12 = v19;
  a1[4] = v11;
  a1[5] = v12;
  return result;
}
