/*
 * XREFs of imp_WdfCxDeviceInitAllocateContext @ 0x140092B90
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z @ 0x140034F10 (-FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z.c)
 *     ?_Create@FxUserObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x14006B8D8 (-_Create@FxUserObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z.c)
 *     FxValiateCx @ 0x1400773FC (FxValiateCx.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008306C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfCxDeviceInitAllocateContext(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_OBJECT_ATTRIBUTES *ContextAttributes,
        void **Context)
{
  _FX_DRIVER_GLOBALS *v4; // rdi
  int result; // eax
  __int64 v9; // r9
  unsigned __int64 retaddr; // [rsp+28h] [rbp+0h]

  v4 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  if ( !DeviceInit )
    FxVerifierNullBugCheck(v4, retaddr);
  result = FxValiateCx(DeviceInit->DriverGlobals, v4);
  if ( result >= 0 )
  {
    if ( DeviceInit->CxContextObject )
      return FxObjectAllocateContext(DeviceInit->CxContextObject, ContextAttributes, 0, Context);
    result = FxUserObject::_Create(v4, 0LL, &DeviceInit->CxContextObject, v9);
    if ( result >= 0 )
      return FxObjectAllocateContext(DeviceInit->CxContextObject, ContextAttributes, 0, Context);
  }
  return result;
}
