/*
 * XREFs of RIMFreeDev @ 0x1401D1DE0
 * Callers:
 *     RIMIDERemoveInjectionDevice @ 0x14005B144 (RIMIDERemoveInjectionDevice.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x14005CA04 (rimHandleAnyPnpRemovePendingDevices.c)
 *     RIMOnPnpNotification @ 0x140061480 (RIMOnPnpNotification.c)
 *     rimDoRimDevChangeAsyncWorkItem @ 0x1400C6E18 (rimDoRimDevChangeAsyncWorkItem.c)
 *     RIMDoOnPnpNotification @ 0x1401127D0 (RIMDoOnPnpNotification.c)
 *     rimOnPnpArrived @ 0x14017E1FC (rimOnPnpArrived.c)
 *     RIMAddInjectionDeviceOfType @ 0x1401D5450 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1401D60A0 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1401D65E0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMRemoveMouseOrKeyboardInjectionDevice @ 0x1401D8B5C (RIMRemoveMouseOrKeyboardInjectionDevice.c)
 *     RIMDeviceClassNotifyAsyncWorkItem @ 0x1401EC448 (RIMDeviceClassNotifyAsyncWorkItem.c)
 *     RIMDiscoverSpecificDevice @ 0x1401ED4D0 (RIMDiscoverSpecificDevice.c)
 * Callees:
 *     ?ReportRimDevice@RimTelemetry@@SAXHHQEAURIMDEV@@@Z @ 0x140114A14 (-ReportRimDevice@RimTelemetry@@SAXHHQEAURIMDEV@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMFreeSpecificDev @ 0x1401D1E88 (RIMFreeSpecificDev.c)
 */

__int64 __fastcall RIMFreeDev(struct RawInputManagerObject *a1, struct RIMDEV *a2)
{
  struct RIMDEV **i; // rdi
  struct RIMDEV *v5; // rax

  RimTelemetry::ReportRimDevice(0, -__CFSHR__(*((_DWORD *)a2 + 46), 8), a2);
  for ( i = (struct RIMDEV **)((char *)a1 + 424); ; i = (struct RIMDEV **)((char *)v5 + 40) )
  {
    v5 = *i;
    if ( !*i )
      break;
    if ( v5 == a2 )
    {
      if ( *((_QWORD *)a2 + 29) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 944);
      *i = (struct RIMDEV *)*((_QWORD *)a2 + 5);
      *((_QWORD *)a2 + 5) = 0LL;
      RIMFreeSpecificDev(a1);
      return 0LL;
    }
  }
  return 0LL;
}
