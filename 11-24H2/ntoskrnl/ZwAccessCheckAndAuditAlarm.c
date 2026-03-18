/*
 * XREFs of ZwAccessCheckAndAuditAlarm @ 0x1406A6930
 * Callers:
 *     DifZwAccessCheckAndAuditAlarmWrapper @ 0x14063B1F0 (DifZwAccessCheckAndAuditAlarmWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAccessCheckAndAuditAlarm(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
