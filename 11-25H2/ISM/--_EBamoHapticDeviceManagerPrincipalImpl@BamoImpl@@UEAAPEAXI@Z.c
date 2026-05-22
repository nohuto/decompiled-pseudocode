/*
 * XREFs of ??_EBamoHapticDeviceManagerPrincipalImpl@BamoImpl@@UEAAPEAXI@Z @ 0x1800B82D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1BamoMPCManagerPrincipalImpl@BamoImpl@@UEAA@XZ @ 0x1800B8030 (--1BamoMPCManagerPrincipalImpl@BamoImpl@@UEAA@XZ.c)
 */

BamoImpl::BamoHapticDeviceManagerPrincipalImpl *__fastcall BamoImpl::BamoHapticDeviceManagerPrincipalImpl::`vector deleting destructor'(
        BamoImpl::BamoHapticDeviceManagerPrincipalImpl *this,
        char a2)
{
  BamoImpl::BamoMPCManagerPrincipalImpl::~BamoMPCManagerPrincipalImpl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}
