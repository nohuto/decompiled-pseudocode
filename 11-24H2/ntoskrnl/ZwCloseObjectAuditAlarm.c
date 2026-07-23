/*
 * XREFs of ZwCloseObjectAuditAlarm @ 0x1406A7B10
 * Callers:
 *     DifZwCloseObjectAuditAlarmWrapper @ 0x14063B3C0 (DifZwCloseObjectAuditAlarmWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCloseObjectAuditAlarm(PUNICODE_STRING SubsystemName, PVOID HandleId, BOOLEAN GenerateOnClose)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SubsystemName);
}
