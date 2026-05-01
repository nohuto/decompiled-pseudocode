/*
 * XREFs of CrmStateMonitorNetworkInterfaceCallback @ 0x18006C370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CrmStateMonitorNetworkInterfaceCallback(
        const void **CallerContext,
        PMIB_UNICASTIPADDRESS_ROW Row,
        MIB_NOTIFICATION_TYPE NotificationType)
{
  CrmStateMonitorNetworkUpdateState(CallerContext);
}
