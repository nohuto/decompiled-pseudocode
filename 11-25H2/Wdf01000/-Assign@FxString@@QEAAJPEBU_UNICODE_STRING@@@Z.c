/*
 * XREFs of ?Assign@FxString@@QEAAJPEBU_UNICODE_STRING@@@Z @ 0x140019BF0
 * Callers:
 *     imp_WdfDeviceRetrieveDeviceInterfaceString @ 0x14001A810 (imp_WdfDeviceRetrieveDeviceInterfaceString.c)
 *     imp_WdfPdoInitAddCompatibleID @ 0x140050C20 (imp_WdfPdoInitAddCompatibleID.c)
 *     imp_WdfPdoInitAddHardwareID @ 0x140053940 (imp_WdfPdoInitAddHardwareID.c)
 *     imp_WdfDeviceInitAssignSDDLString @ 0x140053D40 (imp_WdfDeviceInitAssignSDDLString.c)
 *     imp_WdfRegistryQueryString @ 0x140054630 (imp_WdfRegistryQueryString.c)
 *     imp_WdfDeviceRetrieveDeviceName @ 0x140071300 (imp_WdfDeviceRetrieveDeviceName.c)
 *     ?AssignName@WDFDEVICE_INIT@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1400757C4 (-AssignName@WDFDEVICE_INIT@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     imp_WdfPdoInitAssignDeviceID @ 0x1400789E0 (imp_WdfPdoInitAssignDeviceID.c)
 *     imp_WdfPdoInitAssignInstanceID @ 0x14007C7D0 (imp_WdfPdoInitAssignInstanceID.c)
 *     imp_WdfPdoInitAssignContainerID @ 0x140090F30 (imp_WdfPdoInitAssignContainerID.c)
 *     ?_AllocateControlDeviceInit@WDFDEVICE_INIT@@SAPEAU1@PEAVFxDriver@@PEBU_UNICODE_STRING@@@Z @ 0x1400948FC (-_AllocateControlDeviceInit@WDFDEVICE_INIT@@SAPEAU1@PEAVFxDriver@@PEBU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x140019C10 (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 */

int __fastcall FxString::Assign(FxString *this, const _UNICODE_STRING *UnicodeString)
{
  return FxDuplicateUnicodeString(this->m_Globals, UnicodeString, &this->m_UnicodeString);
}
