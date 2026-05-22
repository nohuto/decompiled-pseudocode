/*
 * XREFs of ??_EBamoInputSystemInternalPrincipal@@MEAAPEAXI@Z @ 0x18012EFE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1BamoInputSystemInternalPrincipalImpl@BamoImpl@@UEAA@XZ @ 0x18012EFB0 (--1BamoInputSystemInternalPrincipalImpl@BamoImpl@@UEAA@XZ.c)
 */

BamoInputSystemInternalPrincipal *__fastcall BamoInputSystemInternalPrincipal::`vector deleting destructor'(
        BamoInputSystemInternalPrincipal *this,
        char a2)
{
  BamoImpl::BamoInputSystemInternalPrincipalImpl::~BamoInputSystemInternalPrincipalImpl((BamoInputSystemInternalPrincipal *)((char *)this + 16));
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x48);
  return this;
}
