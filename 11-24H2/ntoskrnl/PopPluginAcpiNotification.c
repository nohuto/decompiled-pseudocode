/*
 * XREFs of PopPluginAcpiNotification @ 0x1404C9038
 * Callers:
 *     PopFxAcpiForwardNotification @ 0x1405D9384 (PopFxAcpiForwardNotification.c)
 *     PopPluginAcpiNotificationStrict @ 0x1405E19E0 (PopPluginAcpiNotificationStrict.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopPluginAcpiNotification(__int64 a1, unsigned int a2, __int64 a3)
{
  return guard_dispatch_icall_no_overrides(a2, a3);
}
