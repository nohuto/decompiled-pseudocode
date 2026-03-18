/*
 * XREFs of ZwCloseObjectAuditAlarm @ 0x1406A6B70
 * Callers:
 *     DifZwCloseObjectAuditAlarmWrapper @ 0x14063CE00 (DifZwCloseObjectAuditAlarmWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCloseObjectAuditAlarm(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
