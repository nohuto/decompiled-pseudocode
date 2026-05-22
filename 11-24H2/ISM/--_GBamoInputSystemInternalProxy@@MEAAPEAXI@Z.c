/*
 * XREFs of ??_GBamoInputSystemInternalProxy@@MEAAPEAXI@Z @ 0x180114810
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1BamoSystemContextEndpointProxyImpl@BamoImpl@@UEAA@XZ @ 0x180114360 (--1BamoSystemContextEndpointProxyImpl@BamoImpl@@UEAA@XZ.c)
 */

BamoInputSystemInternalProxy *__fastcall BamoInputSystemInternalProxy::`scalar deleting destructor'(
        BamoInputSystemInternalProxy *this,
        char a2)
{
  BamoImpl::BamoSystemContextEndpointProxyImpl::~BamoSystemContextEndpointProxyImpl((BamoInputSystemInternalProxy *)((char *)this + 16));
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x40);
  return this;
}
