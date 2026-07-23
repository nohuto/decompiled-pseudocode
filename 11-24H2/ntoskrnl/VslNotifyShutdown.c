/*
 * XREFs of VslNotifyShutdown @ 0x14058AC34
 * Callers:
 *     ExRebootSystemForRecovery @ 0x1406520CC (ExRebootSystemForRecovery.c)
 *     PopShutdownSystem @ 0x140B62104 (PopShutdownSystem.c)
 *     PopSaveHiberContext @ 0x140B70CF0 (PopSaveHiberContext.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall VslNotifyShutdown(unsigned __int8 a1)
{
  __int64 v1; // rbx
  _BYTE v3[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v4; // [rsp+28h] [rbp-80h]

  v1 = a1;
  memset_0(v3, 0, 0x68uLL);
  v4 = v1;
  return VslpEnterIumSecureMode(2u, 0x10Au, 0, (__int64)v3);
}
