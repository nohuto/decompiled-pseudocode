/*
 * XREFs of imp_WdfWdmDeviceGetWdfDeviceHandle @ 0x140064040
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008305C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

WDFDEVICE__ *__fastcall imp_WdfWdmDeviceGetWdfDeviceHandle(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _DEVICE_OBJECT *DeviceObject)
{
  __int64 v2; // rax
  __int16 v3; // cx
  WDFDEVICE__ *result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !DeviceObject )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  v2 = *((_QWORD *)DeviceObject->DeviceExtension - 6);
  v3 = *(_WORD *)(v2 + 10);
  result = (WDFDEVICE__ *)(v2 ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v3 )
    return 0LL;
  return result;
}
