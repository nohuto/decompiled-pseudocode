/*
 * XREFs of ProcessDelayedSdc @ 0x1C0233260
 * Callers:
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C009E7F8 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C009F448 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 (*ProcessDelayedSdc())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0295958;
  if ( qword_1C0295958 )
    return (__int64 (*)(void))qword_1C0295958();
  return result;
}
