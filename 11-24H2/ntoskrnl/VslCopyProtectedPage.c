/*
 * XREFs of VslCopyProtectedPage @ 0x140486C48
 * Callers:
 *     MiCopyPage @ 0x140252870 (MiCopyPage.c)
 *     KeCopyPrivilegedPage @ 0x140486C0C (KeCopyPrivilegedPage.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall VslCopyProtectedPage(__int64 a1, __int128 *a2, __int64 a3, __int128 *a4, __int64 a5, char a6)
{
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  _BYTE v13[8]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v14; // [rsp+28h] [rbp-A0h]
  __int128 v15; // [rsp+30h] [rbp-98h]
  __int64 v16; // [rsp+40h] [rbp-88h]
  __int128 v17; // [rsp+48h] [rbp-80h]
  __int64 v18; // [rsp+58h] [rbp-70h]
  char v19; // [rsp+60h] [rbp-68h]

  memset_0(v13, 0, 0x68uLL);
  v10 = *a2;
  v18 = a5;
  v11 = *a4;
  v19 = a6;
  v14 = a1;
  v15 = v10;
  v16 = a3;
  v17 = v11;
  return VslpEnterIumSecureMode(2u, 0xF4u, 0, (__int64)v13);
}
