/*
 * XREFs of ZwPlugPlayControl @ 0x1406A9B50
 * Callers:
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x140724334 (PiPnpRtlGatherDeviceDeleteInfo.c)
 *     PiCMDeleteDeviceWorker @ 0x14072F100 (PiCMDeleteDeviceWorker.c)
 *     PiCMSetProblem @ 0x14072F6C4 (PiCMSetProblem.c)
 *     PiPnpRtlGetDeviceInterfaceEnabled @ 0x1409E2E20 (PiPnpRtlGetDeviceInterfaceEnabled.c)
 *     PiPnpRtlGetDeviceStatus @ 0x1409EA7B0 (PiPnpRtlGetDeviceStatus.c)
 *     PlugPlayGetDeviceProperty @ 0x140A16E80 (PlugPlayGetDeviceProperty.c)
 *     PiPnpRtlGetDeviceRelatedDeviceRoutine @ 0x140A16F40 (PiPnpRtlGetDeviceRelatedDeviceRoutine.c)
 *     PiPnpRtlGetDeviceRelationsList @ 0x140A4E6B0 (PiPnpRtlGetDeviceRelationsList.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwPlugPlayControl(
        PLUGPLAY_CONTROL_CLASS PnPControlClass,
        PVOID PnPControlData,
        ULONG PnPControlDataLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&PnPControlClass);
}
