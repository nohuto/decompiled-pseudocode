/*
 * XREFs of ??_GBamoSimpleHapticsControllerProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x180112E80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA@XZ @ 0x18011290C (--1BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA@XZ.c)
 */

BamoImpl::BamoSimpleHapticsControllerProxyImpl *__fastcall BamoImpl::BamoSimpleHapticsControllerProxyImpl::`scalar deleting destructor'(
        BamoImpl::BamoSimpleHapticsControllerProxyImpl *this,
        char a2)
{
  BamoImpl::BamoMPCConstantManagerClientProxyImpl::~BamoMPCConstantManagerClientProxyImpl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}
