/*
 * XREFs of PpmCheckTimerCallback @ 0x1405D42C0
 * Callers:
 *     <none>
 * Callees:
 *     PpmExecutePeriodicPerfCheck @ 0x1402ABD08 (PpmExecutePeriodicPerfCheck.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall PpmCheckTimerCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)dword_140E07680 > 5 )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07680, (unsigned __int8 *)byte_14004BD51, 0LL, 0LL, 2u, &v4);
  PpmExecutePeriodicPerfCheck(a1, a2, a3, a4);
}
