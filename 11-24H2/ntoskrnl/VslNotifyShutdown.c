/*
 * XREFs of VslNotifyShutdown @ 0x14058D944
 * Callers:
 *     ExRebootSystemForRecovery @ 0x14065396C (ExRebootSystemForRecovery.c)
 *     PopShutdownSystem @ 0x140B60044 (PopShutdownSystem.c)
 *     PopSaveHiberContext @ 0x140B6EC80 (PopSaveHiberContext.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140265D90 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall VslNotifyShutdown(unsigned __int8 a1)
{
  __int64 v1; // rbx
  _BYTE v3[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v4; // [rsp+28h] [rbp-80h]

  v1 = a1;
  memset_0(v3, 0, 0x68uLL);
  v4 = v1;
  return VslpEnterIumSecureMode(2u, 266LL, 0, (__int64)v3);
}
