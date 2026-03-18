/*
 * XREFs of ?AssignName@WDFDEVICE_INIT@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x140074D04
 * Callers:
 *     imp_WdfDeviceInitAssignName @ 0x140074C60 (imp_WdfDeviceInitAssignName.c)
 * Callees:
 *     WPP_IFR_SF_D @ 0x14001177C (WPP_IFR_SF_D.c)
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x14001189C (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 *     ??0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140020EC0 (--0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Assign@FxString@@QEAAJPEBU_UNICODE_STRING@@@Z @ 0x140031510 (-Assign@FxString@@QEAAJPEBU_UNICODE_STRING@@@Z.c)
 */

int __fastcall WDFDEVICE_INIT::AssignName(
        WDFDEVICE_INIT *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        const _UNICODE_STRING *Name,
        __int64 a4)
{
  FxString *DeviceName; // rax
  FX_POOL **v9; // rax

  DeviceName = this->DeviceName;
  if ( DeviceName )
    return FxString::Assign(DeviceName, Name);
  v9 = FxObjectHandleAlloc2(
         FxDriverGlobals,
         (unsigned __int64)FxDriverGlobals,
         0x78uLL,
         a4,
         0LL,
         0,
         FxObjectTypeExternal);
  if ( v9 )
    FxString::FxString((FxString *)v9, FxDriverGlobals);
  else
    DeviceName = 0LL;
  this->DeviceName = DeviceName;
  if ( DeviceName )
  {
    this->Characteristics &= ~0x80u;
    return FxString::Assign(DeviceName, Name);
  }
  WPP_IFR_SF_D(FxDriverGlobals, 2u, 0x12u, 0xAu, WPP_FxDeviceInit_cpp_Traceguids, 0xC000009A);
  return -1073741670;
}
