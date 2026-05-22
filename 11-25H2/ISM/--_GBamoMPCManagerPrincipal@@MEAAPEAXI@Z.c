/*
 * XREFs of ??_GBamoMPCManagerPrincipal@@MEAAPEAXI@Z @ 0x1800B8290
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1BamoMPCManagerPrincipalImpl@BamoImpl@@UEAA@XZ @ 0x1800B8030 (--1BamoMPCManagerPrincipalImpl@BamoImpl@@UEAA@XZ.c)
 */

BamoMPCManagerPrincipal *__fastcall BamoMPCManagerPrincipal::`scalar deleting destructor'(
        BamoMPCManagerPrincipal *this,
        char a2)
{
  BamoImpl::BamoMPCManagerPrincipalImpl::~BamoMPCManagerPrincipalImpl((BamoMPCManagerPrincipal *)((char *)this + 16));
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x40);
  return this;
}
