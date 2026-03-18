/*
 * XREFs of RIMRegisterForDeviceClassNotifications @ 0x1C007632C
 * Callers:
 *     RIMDiscoverDevicesOfInputType @ 0x1C0074D88 (RIMDiscoverDevicesOfInputType.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

NTSTATUS __fastcall RIMRegisterForDeviceClassNotifications(
        __int64 a1,
        __int64 a2,
        void *a3,
        struct _DRIVER_OBJECT *a4,
        __int64 a5,
        PVOID Context,
        PVOID *NotificationEntry)
{
  if ( !a4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1382LL);
  return IoRegisterPlugPlayNotification(
           EventCategoryDeviceInterfaceChange,
           1u,
           a3,
           a4,
           RIMDeviceClassNotify,
           Context,
           NotificationEntry);
}
