/*
 * XREFs of ??_GBamoInputSpacePayloadPrincipalImpl@BamoImpl@@UEAAPEAXI@Z @ 0x180139D40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1BamoInputSpacePayloadPrincipalImpl@BamoImpl@@UEAA@XZ @ 0x180139C24 (--1BamoInputSpacePayloadPrincipalImpl@BamoImpl@@UEAA@XZ.c)
 */

BamoImpl::BamoInputSpacePayloadPrincipalImpl *__fastcall BamoImpl::BamoInputSpacePayloadPrincipalImpl::`scalar deleting destructor'(
        BamoImpl::BamoInputSpacePayloadPrincipalImpl *this,
        const struct std::nothrow_t *a2,
        __int64 a3,
        const char *a4)
{
  char v4; // bl

  v4 = (char)a2;
  BamoImpl::BamoInputSpacePayloadPrincipalImpl::~BamoInputSpacePayloadPrincipalImpl(this, a2, a3, a4);
  if ( (v4 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x48);
  return this;
}
