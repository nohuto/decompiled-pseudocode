/*
 * XREFs of ?Assign@FxString@@QEAAJPEBU_UNICODE_STRING@@@Z @ 0x140031510
 * Callers:
 *     imp_WdfDeviceRetrieveDeviceInterfaceString @ 0x140032130 (imp_WdfDeviceRetrieveDeviceInterfaceString.c)
 *     imp_WdfPdoInitAddHardwareID @ 0x140043550 (imp_WdfPdoInitAddHardwareID.c)
 *     imp_WdfPdoInitAddCompatibleID @ 0x140044500 (imp_WdfPdoInitAddCompatibleID.c)
 *     imp_WdfDeviceInitAssignSDDLString @ 0x140046FA0 (imp_WdfDeviceInitAssignSDDLString.c)
 *     imp_WdfRegistryQueryString @ 0x14005DD10 (imp_WdfRegistryQueryString.c)
 *     imp_WdfDeviceRetrieveDeviceName @ 0x140070750 (imp_WdfDeviceRetrieveDeviceName.c)
 *     ?AssignName@WDFDEVICE_INIT@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x140074D04 (-AssignName@WDFDEVICE_INIT@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     imp_WdfPdoInitAssignDeviceID @ 0x140078260 (imp_WdfPdoInitAssignDeviceID.c)
 *     imp_WdfPdoInitAssignInstanceID @ 0x14007C470 (imp_WdfPdoInitAssignInstanceID.c)
 *     imp_WdfPdoInitAssignContainerID @ 0x140090F90 (imp_WdfPdoInitAssignContainerID.c)
 *     ?_AllocateControlDeviceInit@WDFDEVICE_INIT@@SAPEAU1@PEAVFxDriver@@PEBU_UNICODE_STRING@@@Z @ 0x14009495C (-_AllocateControlDeviceInit@WDFDEVICE_INIT@@SAPEAU1@PEAVFxDriver@@PEBU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x140031530 (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 */

int __fastcall FxString::Assign(FxString *this, const _UNICODE_STRING *UnicodeString)
{
  return FxDuplicateUnicodeString(this->m_Globals, UnicodeString, &this->m_UnicodeString);
}
