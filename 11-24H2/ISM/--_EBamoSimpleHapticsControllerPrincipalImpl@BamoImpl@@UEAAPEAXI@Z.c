/*
 * XREFs of ??_EBamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@UEAAPEAXI@Z @ 0x180184BE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@UEAA@XZ @ 0x1801849E4 (--1BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@UEAA@XZ.c)
 */

BamoImpl::BamoSimpleHapticsControllerPrincipalImpl *__fastcall BamoImpl::BamoSimpleHapticsControllerPrincipalImpl::`vector deleting destructor'(
        BamoImpl::BamoSimpleHapticsControllerPrincipalImpl *this,
        char a2)
{
  BamoImpl::BamoSimpleHapticsControllerPrincipalImpl::~BamoSimpleHapticsControllerPrincipalImpl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x48);
  return this;
}
