/*
 * XREFs of ??_EBamoDockDeviceProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x180114590
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1BamoDockDeviceProxyImpl@BamoImpl@@UEAA@XZ @ 0x18011429C (--1BamoDockDeviceProxyImpl@BamoImpl@@UEAA@XZ.c)
 */

BamoImpl::BamoDockDeviceProxyImpl *__fastcall BamoImpl::BamoDockDeviceProxyImpl::`vector deleting destructor'(
        BamoImpl::BamoDockDeviceProxyImpl *this,
        const struct std::nothrow_t *a2)
{
  char v2; // bl

  v2 = (char)a2;
  BamoImpl::BamoDockDeviceProxyImpl::~BamoDockDeviceProxyImpl(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x40);
  return this;
}
