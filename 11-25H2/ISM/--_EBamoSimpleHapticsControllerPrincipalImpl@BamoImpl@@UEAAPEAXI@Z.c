/*
 * XREFs of ??_EBamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@UEAAPEAXI@Z @ 0x18018BEC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1BamoMPCManagerPrincipalImpl@BamoImpl@@UEAA@XZ @ 0x1800B8030 (--1BamoMPCManagerPrincipalImpl@BamoImpl@@UEAA@XZ.c)
 */

BamoImpl::BamoSimpleHapticsControllerPrincipalImpl *__fastcall BamoImpl::BamoSimpleHapticsControllerPrincipalImpl::`vector deleting destructor'(
        BamoImpl::BamoSimpleHapticsControllerPrincipalImpl *this,
        char a2)
{
  BamoImpl::BamoMPCManagerPrincipalImpl::~BamoMPCManagerPrincipalImpl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x38);
  return this;
}
