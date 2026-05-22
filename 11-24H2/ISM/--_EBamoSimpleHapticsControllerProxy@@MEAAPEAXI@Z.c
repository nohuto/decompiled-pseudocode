/*
 * XREFs of ??_EBamoSimpleHapticsControllerProxy@@MEAAPEAXI@Z @ 0x180114990
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1BamoSimpleHapticsControllerProxyImpl@BamoImpl@@UEAA@XZ @ 0x18011444C (--1BamoSimpleHapticsControllerProxyImpl@BamoImpl@@UEAA@XZ.c)
 */

BamoSimpleHapticsControllerProxy *__fastcall BamoSimpleHapticsControllerProxy::`vector deleting destructor'(
        BamoSimpleHapticsControllerProxy *this,
        char a2)
{
  BamoImpl::BamoSimpleHapticsControllerProxyImpl::~BamoSimpleHapticsControllerProxyImpl((BamoSimpleHapticsControllerProxy *)((char *)this + 16));
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x50);
  return this;
}
