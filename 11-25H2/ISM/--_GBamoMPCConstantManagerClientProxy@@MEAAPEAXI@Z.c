/*
 * XREFs of ??_GBamoMPCConstantManagerClientProxy@@MEAAPEAXI@Z @ 0x1801607E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA@XZ @ 0x18011290C (--1BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA@XZ.c)
 */

BamoMPCConstantManagerClientProxy *__fastcall BamoMPCConstantManagerClientProxy::`scalar deleting destructor'(
        BamoMPCConstantManagerClientProxy *this,
        char a2)
{
  BamoImpl::BamoMPCConstantManagerClientProxyImpl::~BamoMPCConstantManagerClientProxyImpl((BamoMPCConstantManagerClientProxy *)((char *)this + 16));
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x38);
  return this;
}
