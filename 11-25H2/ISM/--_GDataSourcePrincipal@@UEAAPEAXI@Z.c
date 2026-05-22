/*
 * XREFs of ??_GDataSourcePrincipal@@UEAAPEAXI@Z @ 0x1800646E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1BamoDataSourcePrincipalImpl@BamoImpl@@UEAA@XZ @ 0x180064720 (--1BamoDataSourcePrincipalImpl@BamoImpl@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

DataSourcePrincipal *__fastcall DataSourcePrincipal::`scalar deleting destructor'(DataSourcePrincipal *this, char a2)
{
  BamoImpl::BamoDataSourcePrincipalImpl::~BamoDataSourcePrincipalImpl((DataSourcePrincipal *)((char *)this + 16));
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x48);
  return this;
}
