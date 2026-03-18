/*
 * XREFs of SetTimerCoalescingTolerance @ 0x1C00C3FBC
 * Callers:
 *     PostWinlogonMessage @ 0x1C0086360 (PostWinlogonMessage.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C009F448 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 (*SetTimerCoalescingTolerance())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0295928;
  if ( qword_1C0295928 )
    return (__int64 (*)(void))qword_1C0295928();
  return result;
}
