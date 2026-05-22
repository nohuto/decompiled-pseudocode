/*
 * XREFs of ??_EBamoPenDeviceProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x180112E00
 * Callers:
 *     <none>
 * Callees:
 *     ??1BamoPenDeviceProxyImpl@BamoImpl@@UEAA@XZ @ 0x180064470 (--1BamoPenDeviceProxyImpl@BamoImpl@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

BamoImpl::BamoPenDeviceProxyImpl *__fastcall BamoImpl::BamoPenDeviceProxyImpl::`vector deleting destructor'(
        BamoImpl::BamoPenDeviceProxyImpl *this,
        char a2)
{
  BamoImpl::BamoPenDeviceProxyImpl::~BamoPenDeviceProxyImpl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x38);
  return this;
}
