/*
 * XREFs of VslMakeProtectedPageExecutable @ 0x14036C2C0
 * Callers:
 *     MiInsertPageInFreeOrZeroedList @ 0x140222210 (MiInsertPageInFreeOrZeroedList.c)
 *     MiClearPfnImageVerified @ 0x14036C0C0 (MiClearPfnImageVerified.c)
 *     KeSetPagePrivilege @ 0x14036C260 (KeSetPagePrivilege.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140265D90 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall VslMakeProtectedPageExecutable(__int64 a1, __int64 a2, int a3)
{
  _BYTE v7[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v8; // [rsp+28h] [rbp-80h]
  __int64 v9; // [rsp+30h] [rbp-78h]
  BOOL v10; // [rsp+48h] [rbp-60h]

  memset_0(v7, 0, 0x68uLL);
  v8 = a1;
  v9 = a2;
  v10 = a3 != 0;
  return VslpEnterIumSecureMode(2u, 250LL, 0, (__int64)v7);
}
