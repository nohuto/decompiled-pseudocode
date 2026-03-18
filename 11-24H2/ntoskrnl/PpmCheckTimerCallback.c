/*
 * XREFs of PpmCheckTimerCallback @ 0x1405D6CA0
 * Callers:
 *     <none>
 * Callees:
 *     PpmExecutePeriodicPerfCheck @ 0x14029D218 (PpmExecutePeriodicPerfCheck.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

void __fastcall PpmCheckTimerCallback(__int64 a1, __int64 a2, __int64 a3)
{
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)dword_140E076F0 > 5 )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E076F0, (unsigned __int8 *)byte_14004B8E8, 0LL, 0LL, 2u, &v3);
  PpmExecutePeriodicPerfCheck(a1, a2, a3);
}
