/*
 * XREFs of ??_EBamoSystemContextEndpointStub@@MEAAPEAXI@Z @ 0x1800AA880
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1BamoSystemContextEndpointStubImpl@BamoImpl@@UEAA@XZ @ 0x1800AA7D0 (--1BamoSystemContextEndpointStubImpl@BamoImpl@@UEAA@XZ.c)
 */

BamoSystemContextEndpointStub *__fastcall BamoSystemContextEndpointStub::`vector deleting destructor'(
        BamoSystemContextEndpointStub *this,
        char a2)
{
  BamoImpl::BamoSystemContextEndpointStubImpl::~BamoSystemContextEndpointStubImpl((BamoSystemContextEndpointStub *)((char *)this + 16));
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x60);
  return this;
}
