/*
 * XREFs of ??_EBamoHapticDeviceManagerPrincipalImpl@BamoImpl@@UEAAPEAXI@Z @ 0x180189E40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1BamoHapticDeviceManagerPrincipalImpl@BamoImpl@@UEAA@XZ @ 0x180189D7C (--1BamoHapticDeviceManagerPrincipalImpl@BamoImpl@@UEAA@XZ.c)
 */

BamoImpl::BamoHapticDeviceManagerPrincipalImpl *__fastcall BamoImpl::BamoHapticDeviceManagerPrincipalImpl::`vector deleting destructor'(
        BamoImpl::BamoHapticDeviceManagerPrincipalImpl *this,
        char a2)
{
  BamoImpl::BamoHapticDeviceManagerPrincipalImpl::~BamoHapticDeviceManagerPrincipalImpl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x40);
  return this;
}
