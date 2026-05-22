/*
 * XREFs of ??1BamoMPCManagerPrincipal@@MEAA@XZ @ 0x1800B8020
 * Callers:
 *     _HapticDeviceManager::HapticDeviceManager_::_1_::dtor$0 @ 0x1801C8124 (_HapticDeviceManager--HapticDeviceManager_--_1_--dtor$0.c)
 *     _PenHapticDevice::PenHapticDevice_::_1_::dtor$0 @ 0x1801D119B (_PenHapticDevice--PenHapticDevice_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall BamoMPCManagerPrincipal::~BamoMPCManagerPrincipal(BamoMPCManagerPrincipal *this)
{
  BamoImpl::BamoMPCManagerPrincipalImpl::~BamoMPCManagerPrincipalImpl((BamoMPCManagerPrincipal *)((char *)this + 16));
}
