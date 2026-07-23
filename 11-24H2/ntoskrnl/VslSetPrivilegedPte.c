/*
 * XREFs of VslSetPrivilegedPte @ 0x140492280
 * Callers:
 *     MiAllocateWsle @ 0x14024C6D0 (MiAllocateWsle.c)
 *     KeSetPagePrivilege @ 0x140492188 (KeSetPagePrivilege.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall VslSetPrivilegedPte(__int64 a1, __int64 a2, __int128 *a3, int a4)
{
  __int128 v8; // xmm0
  _BYTE v10[8]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v11; // [rsp+28h] [rbp-A0h]
  __int64 v12; // [rsp+30h] [rbp-98h]
  __int128 v13; // [rsp+38h] [rbp-90h]
  int v14; // [rsp+48h] [rbp-80h]

  memset_0(v10, 0, 0x68uLL);
  v8 = *a3;
  v11 = a1;
  v12 = a2;
  v14 = a4;
  v13 = v8;
  return VslpEnterIumSecureMode(2u, 0xF7u, 0, (__int64)v10);
}
