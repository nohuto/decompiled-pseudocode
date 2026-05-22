/*
 * XREFs of ??1BamoSimpleHapticsControllerPrincipal@@MEAA@XZ @ 0x1801849D4
 * Callers:
 *     _TouchpadHapticDevice::TouchpadHapticDevice_::_1_::dtor$0 @ 0x1801D84A7 (_TouchpadHapticDevice--TouchpadHapticDevice_--_1_--dtor$0.c)
 *     _PenHapticDevice::PenHapticDevice_::_1_::dtor$0 @ 0x1801D8522 (_PenHapticDevice--PenHapticDevice_--_1_--dtor$0.c)
 *     _MouseHapticDevice::MouseHapticDevice_::_1_::dtor$0 @ 0x1801D85DD (_MouseHapticDevice--MouseHapticDevice_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall BamoSimpleHapticsControllerPrincipal::~BamoSimpleHapticsControllerPrincipal(
        BamoSimpleHapticsControllerPrincipal *this)
{
  BamoImpl::BamoSimpleHapticsControllerPrincipalImpl::~BamoSimpleHapticsControllerPrincipalImpl((BamoSimpleHapticsControllerPrincipal *)((char *)this + 16));
}
