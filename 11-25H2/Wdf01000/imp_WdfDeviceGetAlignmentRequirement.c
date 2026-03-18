/*
 * XREFs of imp_WdfDeviceGetAlignmentRequirement @ 0x140091B10
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140026620 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

__int64 __fastcall imp_WdfDeviceGetAlignmentRequirement(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  FxDeviceBase *pDeviceBase; // [rsp+30h] [rbp+8h] BYREF

  pDeviceBase = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Device,
    0x1030u,
    (void **)&pDeviceBase);
  return pDeviceBase->m_DeviceObject.m_DeviceObject->AlignmentRequirement;
}
