/*
 * XREFs of ??_GBamoSystemContextEndpointStubImpl@BamoImpl@@UEAAPEAXI@Z @ 0x1800AA8C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1BamoSystemContextEndpointStubImpl@BamoImpl@@UEAA@XZ @ 0x1800AA7D0 (--1BamoSystemContextEndpointStubImpl@BamoImpl@@UEAA@XZ.c)
 */

BamoImpl::BamoSystemContextEndpointStubImpl *__fastcall BamoImpl::BamoSystemContextEndpointStubImpl::`scalar deleting destructor'(
        BamoImpl::BamoSystemContextEndpointStubImpl *this,
        char a2)
{
  BamoImpl::BamoSystemContextEndpointStubImpl::~BamoSystemContextEndpointStubImpl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x50);
  return this;
}
