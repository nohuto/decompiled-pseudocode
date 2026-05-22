/*
 * XREFs of ??_GBamoDataSourcePrincipalImpl@BamoImpl@@UEAAPEAXI@Z @ 0x180100AD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1BamoDataSourcePrincipalImpl@BamoImpl@@UEAA@XZ @ 0x180064B60 (--1BamoDataSourcePrincipalImpl@BamoImpl@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

BamoImpl::BamoDataSourcePrincipalImpl *__fastcall BamoImpl::BamoDataSourcePrincipalImpl::`scalar deleting destructor'(
        BamoImpl::BamoDataSourcePrincipalImpl *this,
        char a2)
{
  BamoImpl::BamoDataSourcePrincipalImpl::~BamoDataSourcePrincipalImpl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x38);
  return this;
}
