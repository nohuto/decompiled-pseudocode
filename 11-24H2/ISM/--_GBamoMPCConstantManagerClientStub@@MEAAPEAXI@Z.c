/*
 * XREFs of ??_GBamoMPCConstantManagerClientStub@@MEAAPEAXI@Z @ 0x1800B3560
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1BamoMPCConstantManagerClientStubImpl@BamoImpl@@UEAA@XZ @ 0x1800B33AC (--1BamoMPCConstantManagerClientStubImpl@BamoImpl@@UEAA@XZ.c)
 */

BamoMPCConstantManagerClientStub *__fastcall BamoMPCConstantManagerClientStub::`scalar deleting destructor'(
        BamoMPCConstantManagerClientStub *this,
        char a2)
{
  BamoImpl::BamoMPCConstantManagerClientStubImpl::~BamoMPCConstantManagerClientStubImpl((BamoMPCConstantManagerClientStub *)((char *)this + 16));
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x58);
  return this;
}
