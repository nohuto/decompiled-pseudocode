/*
 * XREFs of ??_EBamoSimpleHapticsControllerProxy@@MEAAPEAXI@Z @ 0x180112E40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA@XZ @ 0x18011290C (--1BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA@XZ.c)
 */

BamoSimpleHapticsControllerProxy *__fastcall BamoSimpleHapticsControllerProxy::`vector deleting destructor'(
        BamoSimpleHapticsControllerProxy *this,
        char a2)
{
  BamoImpl::BamoMPCConstantManagerClientProxyImpl::~BamoMPCConstantManagerClientProxyImpl((BamoSimpleHapticsControllerProxy *)((char *)this + 16));
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x40);
  return this;
}
