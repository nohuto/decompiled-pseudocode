/*
 * XREFs of ??_GBamoInputSiteElementProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x18012E330
 * Callers:
 *     <none>
 * Callees:
 *     ??1BamoInputSiteElementProxyImpl@BamoImpl@@UEAA@XZ @ 0x180062160 (--1BamoInputSiteElementProxyImpl@BamoImpl@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

BamoImpl::BamoInputSiteElementProxyImpl *__fastcall BamoImpl::BamoInputSiteElementProxyImpl::`scalar deleting destructor'(
        BamoImpl::BamoInputSiteElementProxyImpl *this,
        char a2)
{
  BamoImpl::BamoInputSiteElementProxyImpl::~BamoInputSiteElementProxyImpl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x140);
  return this;
}
