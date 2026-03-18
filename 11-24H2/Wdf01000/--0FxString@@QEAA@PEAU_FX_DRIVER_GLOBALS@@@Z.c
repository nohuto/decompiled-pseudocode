/*
 * XREFs of ??0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140020EC0
 * Callers:
 *     imp_WdfStringCreate @ 0x140020B30 (imp_WdfStringCreate.c)
 *     imp_WdfPdoInitAddHardwareID @ 0x140043550 (imp_WdfPdoInitAddHardwareID.c)
 *     imp_WdfPdoInitAddCompatibleID @ 0x140044500 (imp_WdfPdoInitAddCompatibleID.c)
 *     imp_WdfDeviceInitAssignSDDLString @ 0x140046FA0 (imp_WdfDeviceInitAssignSDDLString.c)
 *     imp_WdfRegistryQueryMultiString @ 0x140062110 (imp_WdfRegistryQueryMultiString.c)
 *     ?AssignName@WDFDEVICE_INIT@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x140074D04 (-AssignName@WDFDEVICE_INIT@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     imp_WdfPdoInitAssignDeviceID @ 0x140078260 (imp_WdfPdoInitAssignDeviceID.c)
 *     imp_WdfPdoInitAssignInstanceID @ 0x14007C470 (imp_WdfPdoInitAssignInstanceID.c)
 *     imp_WdfPdoInitAssignContainerID @ 0x140090F90 (imp_WdfPdoInitAssignContainerID.c)
 *     ?_AllocateControlDeviceInit@WDFDEVICE_INIT@@SAPEAU1@PEAVFxDriver@@PEBU_UNICODE_STRING@@@Z @ 0x14009495C (-_AllocateControlDeviceInit@WDFDEVICE_INIT@@SAPEAU1@PEAVFxDriver@@PEBU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ??0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140046AE8 (--0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxString::FxString(FxString *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  FxObject::FxObject(this, 0x1007u, 0x78u, FxDriverGlobals);
  this->__vftable = (FxString_vtbl *)FxString::`vftable';
  RtlInitUnicodeString(&this->m_UnicodeString, 0LL);
  this->m_ObjectFlags |= 0x10u;
}
