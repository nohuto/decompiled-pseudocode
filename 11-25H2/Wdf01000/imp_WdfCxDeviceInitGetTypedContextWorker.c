/*
 * XREFs of imp_WdfCxDeviceInitGetTypedContextWorker @ 0x140092C30
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectGetTypedContext@@YAPEAXPEAVFxObject@@PEBU_WDF_OBJECT_CONTEXT_TYPE_INFO@@@Z @ 0x140047030 (-FxObjectGetTypedContext@@YAPEAXPEAVFxObject@@PEBU_WDF_OBJECT_CONTEXT_TYPE_INFO@@@Z.c)
 *     FxValiateCx @ 0x1400773FC (FxValiateCx.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008306C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

char *__fastcall imp_WdfCxDeviceInitGetTypedContextWorker(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        const _WDF_OBJECT_CONTEXT_TYPE_INFO *TypeInfo)
{
  __int64 v3; // rbx
  FxUserObject *CxContextObject; // rcx
  unsigned __int64 retaddr; // [rsp+28h] [rbp+0h]

  v3 = 0LL;
  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  if ( (int)FxValiateCx(DeviceInit->DriverGlobals, (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8]) >= 0 )
  {
    CxContextObject = DeviceInit->CxContextObject;
    if ( CxContextObject )
      return FxObjectGetTypedContext(CxContextObject, TypeInfo);
  }
  return (char *)v3;
}
