/*
 * XREFs of Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledNoReportingNoInline @ 0x1405CB038
 * Callers:
 *     PopHandleDevicePowerIrpCompletion @ 0x1403A65A0 (PopHandleDevicePowerIrpCompletion.c)
 *     PopFxActivateDevice @ 0x140490A10 (PopFxActivateDevice.c)
 *     PopFxHandleReportDevicePoweredOn @ 0x140497CE0 (PopFxHandleReportDevicePoweredOn.c)
 *     PopIrpWorker @ 0x1404E3650 (PopIrpWorker.c)
 *     PopNotifyDevice @ 0x140B717B8 (PopNotifyDevice.c)
 *     PopSystemIrpCompletion @ 0x140B71950 (PopSystemIrpCompletion.c)
 * Callees:
 *     Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledFallback @ 0x1405CB01C (Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledFallback.c)
 */

__int64 Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_Sx_PEP_Notification_Synchronization__private_featureState & 2) != 0 )
    return Feature_Sx_PEP_Notification_Synchronization__private_featureState & 1;
  else
    return Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledFallback(
             (unsigned int)Feature_Sx_PEP_Notification_Synchronization__private_featureState,
             0);
}
