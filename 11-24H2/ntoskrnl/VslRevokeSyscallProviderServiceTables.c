/*
 * XREFs of VslRevokeSyscallProviderServiceTables @ 0x14070DE24
 * Callers:
 *     PsRegisterSyscallProvider @ 0x140771100 (PsRegisterSyscallProvider.c)
 *     PspDestroySyscallProvider @ 0x140771414 (PspDestroySyscallProvider.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall VslRevokeSyscallProviderServiceTables(__int64 a1)
{
  _BYTE v3[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v4; // [rsp+28h] [rbp-80h]

  memset_0(v3, 0, 0x68uLL);
  v4 = a1;
  return VslpEnterIumSecureMode(2u, 0x5Bu, 0, (__int64)v3);
}
