/*
 * XREFs of IoUnregisterPlugPlayNotificationEx @ 0x140A45730
 * Callers:
 *     PopCleanPowerLimitExtension @ 0x1405CCE74 (PopCleanPowerLimitExtension.c)
 * Callees:
 *     PnpUnregisterPlugPlayNotification @ 0x140469950 (PnpUnregisterPlugPlayNotification.c)
 */

NTSTATUS __stdcall IoUnregisterPlugPlayNotificationEx(PVOID NotificationEntry)
{
  return PnpUnregisterPlugPlayNotification(NotificationEntry, 1);
}
