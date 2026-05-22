/*
 * XREFs of ??_GBamoInputSpacePayloadProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x180112C80
 * Callers:
 *     <none>
 * Callees:
 *     ??1BamoDragManagerClientProxyImpl@BamoImpl@@UEAA@XZ @ 0x180095528 (--1BamoDragManagerClientProxyImpl@BamoImpl@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

BamoImpl::BamoInputSpacePayloadProxyImpl *__fastcall BamoImpl::BamoInputSpacePayloadProxyImpl::`scalar deleting destructor'(
        BamoImpl::BamoInputSpacePayloadProxyImpl *this,
        const struct std::nothrow_t *a2)
{
  char v2; // bl

  v2 = (char)a2;
  BamoImpl::BamoDragManagerClientProxyImpl::~BamoDragManagerClientProxyImpl(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x40);
  return this;
}
