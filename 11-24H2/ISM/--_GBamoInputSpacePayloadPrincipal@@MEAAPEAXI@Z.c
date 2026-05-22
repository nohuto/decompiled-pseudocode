/*
 * XREFs of ??_GBamoInputSpacePayloadPrincipal@@MEAAPEAXI@Z @ 0x18013BED0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1BamoInputSpacePayloadPrincipalImpl@BamoImpl@@UEAA@XZ @ 0x18013BDF4 (--1BamoInputSpacePayloadPrincipalImpl@BamoImpl@@UEAA@XZ.c)
 */

BamoInputSpacePayloadPrincipal *__fastcall BamoInputSpacePayloadPrincipal::`scalar deleting destructor'(
        BamoInputSpacePayloadPrincipal *this,
        const struct std::nothrow_t *a2,
        __int64 a3,
        const char *a4)
{
  char v5; // bl

  v5 = (char)a2;
  BamoImpl::BamoInputSpacePayloadPrincipalImpl::~BamoInputSpacePayloadPrincipalImpl(
    (BamoInputSpacePayloadPrincipal *)((char *)this + 16),
    a2,
    a3,
    a4);
  if ( (v5 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x58);
  return this;
}
