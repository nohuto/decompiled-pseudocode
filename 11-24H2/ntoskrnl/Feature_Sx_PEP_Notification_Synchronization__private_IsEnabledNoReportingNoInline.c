/*
 * XREFs of Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledNoReportingNoInline @ 0x1405CD8C8
 * Callers:
 *     PopHandleDevicePowerIrpCompletion @ 0x140376270 (PopHandleDevicePowerIrpCompletion.c)
 *     PopFxActivateDevice @ 0x140496080 (PopFxActivateDevice.c)
 *     PopFxHandleReportDevicePoweredOn @ 0x14049CF90 (PopFxHandleReportDevicePoweredOn.c)
 *     PopIrpWorker @ 0x1404EBF10 (PopIrpWorker.c)
 *     PopNotifyDevice @ 0x140B6F748 (PopNotifyDevice.c)
 *     PopSystemIrpCompletion @ 0x140B6F8E0 (PopSystemIrpCompletion.c)
 * Callees:
 *     Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledFallback @ 0x1405CD8AC (Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledNoReportingNoInline(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  if ( (Feature_Sx_PEP_Notification_Synchronization__private_featureState & 2) != 0 )
    return Feature_Sx_PEP_Notification_Synchronization__private_featureState & 1;
  else
    return Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledFallback(
             (unsigned int)Feature_Sx_PEP_Notification_Synchronization__private_featureState,
             0,
             a3,
             a4);
}
