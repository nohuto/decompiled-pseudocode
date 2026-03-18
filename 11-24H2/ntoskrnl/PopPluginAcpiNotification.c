/*
 * XREFs of PopPluginAcpiNotification @ 0x1404CFF48
 * Callers:
 *     PopFxAcpiForwardNotification @ 0x1405DC4B4 (PopFxAcpiForwardNotification.c)
 *     PopPluginAcpiNotificationStrict @ 0x1405E4454 (PopPluginAcpiNotificationStrict.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopPluginAcpiNotification(__int64 a1, unsigned int a2, __int64 a3)
{
  return guard_dispatch_icall_no_overrides(a2, a3, a3, a2);
}
