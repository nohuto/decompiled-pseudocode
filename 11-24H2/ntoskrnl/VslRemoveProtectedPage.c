/*
 * XREFs of VslRemoveProtectedPage @ 0x1403A9AF4
 * Callers:
 *     MiInsertPageInFreeOrZeroedList @ 0x14024EF60 (MiInsertPageInFreeOrZeroedList.c)
 *     MiClearPfnImageVerified @ 0x1402EAB40 (MiClearPfnImageVerified.c)
 *     KeSetPagePrivilege @ 0x140492188 (KeSetPagePrivilege.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall VslRemoveProtectedPage(__int64 a1, __int128 *a2, int a3)
{
  __int128 v6; // xmm0
  __int64 v7; // rcx
  _BYTE v9[8]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v10; // [rsp+28h] [rbp-90h]
  __int128 v11; // [rsp+38h] [rbp-80h]
  int v12; // [rsp+48h] [rbp-70h]

  memset_0(v9, 0, 0x68uLL);
  v6 = *a2;
  v10 = a1;
  v12 = a3;
  LOBYTE(v7) = 2;
  v11 = v6;
  return VslpEnterIumSecureMode(v7, 243LL, 0LL, v9);
}
