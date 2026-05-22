/*
 * XREFs of ??_GBamoMPCConstantManagerClientProxy@@MEAAPEAXI@Z @ 0x180161630
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA@XZ @ 0x180161294 (--1BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA@XZ.c)
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
