/*
 * XREFs of ??_EBamoMPCConstantManagerClientStubImpl@BamoImpl@@UEAAPEAXI@Z @ 0x1800B57E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1BamoMPCConstantManagerClientStubImpl@BamoImpl@@UEAA@XZ @ 0x1800B55EC (--1BamoMPCConstantManagerClientStubImpl@BamoImpl@@UEAA@XZ.c)
 */

BamoImpl::BamoMPCConstantManagerClientStubImpl *__fastcall BamoImpl::BamoMPCConstantManagerClientStubImpl::`vector deleting destructor'(
        BamoImpl::BamoMPCConstantManagerClientStubImpl *this,
        char a2)
{
  BamoImpl::BamoMPCConstantManagerClientStubImpl::~BamoMPCConstantManagerClientStubImpl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x48);
  return this;
}
