/*
 * XREFs of ??_EBamoDragSourceClientProxy@@MEAAPEAXI@Z @ 0x180112AC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1BamoDragSourceClientProxyImpl@BamoImpl@@UEAA@XZ @ 0x18011278C (--1BamoDragSourceClientProxyImpl@BamoImpl@@UEAA@XZ.c)
 */

BamoDragSourceClientProxy *__fastcall BamoDragSourceClientProxy::`vector deleting destructor'(
        BamoDragSourceClientProxy *this,
        const struct std::nothrow_t *a2)
{
  char v3; // bl

  v3 = (char)a2;
  BamoImpl::BamoDragSourceClientProxyImpl::~BamoDragSourceClientProxyImpl(
    (BamoDragSourceClientProxy *)((char *)this + 16),
    a2);
  if ( (v3 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x60);
  return this;
}
