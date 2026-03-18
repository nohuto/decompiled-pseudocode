/*
 * XREFs of IoUnregisterPlugPlayNotificationEx @ 0x140A4EAB0
 * Callers:
 *     PopCleanPowerLimitExtension @ 0x1405CF754 (PopCleanPowerLimitExtension.c)
 * Callees:
 *     PnpUnregisterPlugPlayNotification @ 0x14046F240 (PnpUnregisterPlugPlayNotification.c)
 */

NTSTATUS __stdcall IoUnregisterPlugPlayNotificationEx(PVOID NotificationEntry)
{
  return PnpUnregisterPlugPlayNotification(NotificationEntry, 1);
}
