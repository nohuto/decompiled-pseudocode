/*
 * XREFs of ??_GBamoDataSourceProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x18027CEB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 *     ??1BamoDataSourceProxyImpl@BamoImpl@@UEAA@XZ @ 0x180271AF4 (--1BamoDataSourceProxyImpl@BamoImpl@@UEAA@XZ.c)
 */

BamoImpl::BamoDataSourceProxyImpl *__fastcall BamoImpl::BamoDataSourceProxyImpl::`scalar deleting destructor'(
        BamoImpl::BamoDataSourceProxyImpl *this,
        char a2)
{
  BamoImpl::BamoDataSourceProxyImpl::~BamoDataSourceProxyImpl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
