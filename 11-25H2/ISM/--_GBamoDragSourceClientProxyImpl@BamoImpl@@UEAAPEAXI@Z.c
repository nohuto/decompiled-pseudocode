/*
 * XREFs of ??_GBamoDragSourceClientProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x180112B00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1BamoDragSourceClientProxyImpl@BamoImpl@@UEAA@XZ @ 0x18011278C (--1BamoDragSourceClientProxyImpl@BamoImpl@@UEAA@XZ.c)
 */

BamoImpl::BamoDragSourceClientProxyImpl *__fastcall BamoImpl::BamoDragSourceClientProxyImpl::`scalar deleting destructor'(
        BamoImpl::BamoDragSourceClientProxyImpl *this,
        const struct std::nothrow_t *a2)
{
  char v2; // bl

  v2 = (char)a2;
  BamoImpl::BamoDragSourceClientProxyImpl::~BamoDragSourceClientProxyImpl(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x50);
  return this;
}
