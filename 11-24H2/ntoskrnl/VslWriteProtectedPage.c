/*
 * XREFs of VslWriteProtectedPage @ 0x14058BABC
 * Callers:
 *     MiDbgCopyPrivilegedData @ 0x14067FE28 (MiDbgCopyPrivilegedData.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall VslWriteProtectedPage(__int64 a1, __int128 *a2, int a3, __int64 a4, int a5)
{
  __int128 v9; // xmm0
  _BYTE v11[8]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v12; // [rsp+28h] [rbp-A0h]
  __int128 v13; // [rsp+30h] [rbp-98h]
  int v14; // [rsp+40h] [rbp-88h]
  int v15; // [rsp+44h] [rbp-84h]
  __int64 v16; // [rsp+48h] [rbp-80h]

  memset_0(v11, 0, 0x68uLL);
  v9 = *a2;
  v12 = a1;
  v14 = a3;
  v16 = a4;
  v13 = v9;
  v15 = a5;
  return VslpEnterIumSecureMode(2u, 0xF5u, 0, (__int64)v11);
}
