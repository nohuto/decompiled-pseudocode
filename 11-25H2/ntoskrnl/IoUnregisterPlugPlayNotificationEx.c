/*
 * XREFs of IoUnregisterPlugPlayNotificationEx @ 0x140A4C440
 * Callers:
 *     PopCleanPowerLimitExtension @ 0x1405CB0A4 (PopCleanPowerLimitExtension.c)
 * Callees:
 *     PnpUnregisterPlugPlayNotification @ 0x140205238 (PnpUnregisterPlugPlayNotification.c)
 */

NTSTATUS __stdcall IoUnregisterPlugPlayNotificationEx(PVOID NotificationEntry)
{
  return PnpUnregisterPlugPlayNotification(NotificationEntry, 1);
}
