/*
 * XREFs of ZwPlugPlayControl @ 0x1406A8BB0
 * Callers:
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x1407267A4 (PiPnpRtlGatherDeviceDeleteInfo.c)
 *     PiCMDeleteDeviceWorker @ 0x1407310F0 (PiCMDeleteDeviceWorker.c)
 *     PiCMSetProblem @ 0x1407316B4 (PiCMSetProblem.c)
 *     PiPnpRtlGetDeviceInterfaceEnabled @ 0x1409E7E60 (PiPnpRtlGetDeviceInterfaceEnabled.c)
 *     PiPnpRtlGetDeviceStatus @ 0x1409F6860 (PiPnpRtlGetDeviceStatus.c)
 *     PlugPlayGetDeviceProperty @ 0x140A22A70 (PlugPlayGetDeviceProperty.c)
 *     PiPnpRtlGetDeviceRelatedDeviceRoutine @ 0x140A22B30 (PiPnpRtlGetDeviceRelatedDeviceRoutine.c)
 *     PiPnpRtlGetDeviceRelationsList @ 0x140A56820 (PiPnpRtlGetDeviceRelationsList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwPlugPlayControl(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
