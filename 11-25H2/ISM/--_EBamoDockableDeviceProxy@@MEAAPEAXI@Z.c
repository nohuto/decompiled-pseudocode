/*
 * XREFs of ??_EBamoDockableDeviceProxy@@MEAAPEAXI@Z @ 0x180112A00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1BamoDockDeviceProxyImpl@BamoImpl@@UEAA@XZ @ 0x18011275C (--1BamoDockDeviceProxyImpl@BamoImpl@@UEAA@XZ.c)
 */

BamoDockableDeviceProxy *__fastcall BamoDockableDeviceProxy::`vector deleting destructor'(
        BamoDockableDeviceProxy *this,
        const struct std::nothrow_t *a2)
{
  char v3; // bl

  v3 = (char)a2;
  BamoImpl::BamoDockDeviceProxyImpl::~BamoDockDeviceProxyImpl((BamoDockableDeviceProxy *)((char *)this + 16), a2);
  if ( (v3 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x50);
  return this;
}
