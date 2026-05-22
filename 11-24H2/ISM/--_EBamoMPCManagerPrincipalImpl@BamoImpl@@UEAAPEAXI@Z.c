/*
 * XREFs of ??_EBamoMPCManagerPrincipalImpl@BamoImpl@@UEAAPEAXI@Z @ 0x1800B6090
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1BamoMPCManagerPrincipalImpl@BamoImpl@@UEAA@XZ @ 0x1800B5DF0 (--1BamoMPCManagerPrincipalImpl@BamoImpl@@UEAA@XZ.c)
 */

BamoImpl::BamoMPCManagerPrincipalImpl *__fastcall BamoImpl::BamoMPCManagerPrincipalImpl::`vector deleting destructor'(
        BamoImpl::BamoMPCManagerPrincipalImpl *this,
        char a2)
{
  BamoImpl::BamoMPCManagerPrincipalImpl::~BamoMPCManagerPrincipalImpl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}
