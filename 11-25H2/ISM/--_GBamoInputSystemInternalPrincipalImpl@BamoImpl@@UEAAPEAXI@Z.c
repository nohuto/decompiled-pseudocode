/*
 * XREFs of ??_GBamoInputSystemInternalPrincipalImpl@BamoImpl@@UEAAPEAXI@Z @ 0x18012CF80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1BamoInputSystemInternalPrincipalImpl@BamoImpl@@UEAA@XZ @ 0x18012CF10 (--1BamoInputSystemInternalPrincipalImpl@BamoImpl@@UEAA@XZ.c)
 */

BamoImpl::BamoInputSystemInternalPrincipalImpl *__fastcall BamoImpl::BamoInputSystemInternalPrincipalImpl::`scalar deleting destructor'(
        BamoImpl::BamoInputSystemInternalPrincipalImpl *this,
        char a2)
{
  BamoImpl::BamoInputSystemInternalPrincipalImpl::~BamoInputSystemInternalPrincipalImpl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x38);
  return this;
}
